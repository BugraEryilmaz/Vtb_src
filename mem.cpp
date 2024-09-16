#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/mman.h>
#include <sys/stat.h>

#include <algorithm>
#include <vector>

#include "mem.h"


#define die(fmt, ...)             \
    do {                          \
        fprintf(stderr, "%s:%d: " \
                fmt ": %s\n",     \
                __FILE__,         \
                __LINE__,         \
                ##__VA_ARGS__,    \
                strerror(errno)); \
        exit(EXIT_FAILURE);       \
    } while (0)


class ram_t: public mem_t {
public:
    ram_t(int base, int size)
        : mem_t(base, size) {
    }

    ~ram_t() {
        if (m_mem)
            munmap(m_mem, m_size);
    }

    void init(const char *fn) {
        FILE *fp;

        if ((fn == NULL) || !strlen(fn))
            die("empty file name");

        struct stat st;

        if (stat(fn, &st) < 0)
            die("stat(%s) failed", fn);

        if (st.st_size > (uint64_t)(m_size))
            die("image (%lx) too large", st.st_size);

        if ((fp = fopen(fn, "rb")) == NULL)
            die("fopen(%s) failed", fn);

        if ((m_mem = mmap(NULL, m_size, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE | MAP_NORESERVE, -1, 0)) == MAP_FAILED)
            die("mmap(%x) failed", m_size);

        if (fread((char *)(m_mem), st.st_size, 1, fp) != 1)
            die("fread(%lx) failed", st.st_size);

        fclose(fp);
    }

    virtual uint32_t rd(uint32_t addr) {
        return ((uint32_t *)(m_mem))[(addr - m_base) >> 2];
    }

    virtual void wr(uint32_t addr, uint32_t data, uint32_t strb) {
        auto dst = (char *)(m_mem) + ((addr - m_base) & ~0x3);
        auto src = (char *)(&data);

        for (auto i = 0; i < 4; i++)
            if ((strb >> i) & 0x1)
                dst[i] = src[i];
    }
};


static std::vector<mem_t *> g_mem;

class cmp_t {
public:
    bool operator()(const uint32_t lhs, const mem_t *rhs) {
        return lhs < rhs->base();
    }
};

static cmp_t g_cmp;

static void mem_add(mem_t *mem) {
    auto lo = mem->base();
    auto sz = mem->size();

    auto it = std::upper_bound(g_mem.begin(), g_mem.end(), lo, g_cmp);

    if (it != g_mem.begin()) {
        auto pt = *std::prev(it);

        if (lo < (pt->base() + pt->size()))
            die("overlapping mem: %x:%x vs. %x:%x\n",
                 lo, sz, pt->base(), pt->size());
    }

    if (it != g_mem.end()) {
        auto pt = *it;

        if (pt->base() < (lo + sz))
            die("overlapping mem: %x:%x vs. %x:%x\n",
                 lo, sz, pt->base(), pt->size());
    }

    g_mem.insert(it, mem);
}

static mem_t *mem_get(uint32_t addr) {
    auto it = std::upper_bound(g_mem.begin(), g_mem.end(), addr, g_cmp);

    if (it == g_mem.begin())
        return NULL;

    auto pt = *std::prev(it);

    if ((addr >= pt->base()) && (addr < (pt->base() + pt->size())))
        return pt;
    else
        return NULL;
}


extern "C" {

void mem_init(const char *fn) {
    auto ram = new ram_t(0x80000000, 0x20000000);
    // Logically 0x8000_0000-0x9000_0000 is for Code
    //  and 0x9000_0000-0xA000_0000 is for data
    // Physically no separation

    ram->init(fn);

    mem_add(ram);
}

uint32_t mem_rd(uint32_t addr) {
    mem_t *mem;

    if ((mem = mem_get(addr)))
        return mem->rd(addr);
    else
        return 0xdeadbeef;
}

void mem_wr(uint32_t addr, uint32_t data, uint32_t strb) {
    mem_t *mem;

    if ((mem = mem_get(addr)))
        return mem->wr(addr, data, strb);
}

}
