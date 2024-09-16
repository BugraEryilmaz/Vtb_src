#ifndef __MEM_H__
#define __MEM_H__

#include <stdint.h>
#include <stddef.h>


class mem_t {
public:
    mem_t(uint32_t base, uint32_t size)
        : m_base(base),
          m_size(size),
          m_mem (NULL) {
    }
   ~mem_t() {
    }

    virtual uint32_t rd(uint32_t addr) {
        return 0xdeadbeef;
    }
    virtual void     wr(uint32_t addr, uint32_t data, uint32_t strb) {
    }

    uint32_t base() const {
        return m_base;
    }
    uint32_t size() const {
        return m_size;
    }

protected:
    uint32_t m_base;
    uint32_t m_size;
    void    *m_mem;
};

extern "C" {

void     mem_init(const char *fn);
uint32_t mem_rd  (uint32_t addr);
void     mem_wr  (uint32_t addr, uint32_t data, uint32_t strb);

}

#endif
