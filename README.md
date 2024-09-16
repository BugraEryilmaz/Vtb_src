# Prerequisites

## For compiling the debug adapter with verilog

-   g++-13

```bash
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt update
sudo apt-get install g++-13 gcc-13
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-13 100
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-13 100
```

-   Verilator

```bash
# Make sure you have g++ and gcc version 13 before this step, or you will need to install again
# Prerequisites:
sudo apt-get install git help2man perl python3 make autoconf flex bison ccache
sudo apt-get install libgoogle-perftools-dev numactl perl-doc
sudo apt-get install libfl2  # Ubuntu only (ignore if gives error)
sudo apt-get install libfl-dev  # Ubuntu only (ignore if gives error)
sudo apt-get install zlibc zlib1g zlib1g-dev  # Ubuntu only (ignore if gives error)
git clone https://github.com/verilator/verilator   # Only first time
# Every time you need to build:
unsetenv VERILATOR_ROOT  # For csh; ignore error if on bash
unset VERILATOR_ROOT  # For bash
cd verilator
git pull         # Make sure git repository is up-to-date
git checkout stable      # Use most recent stable release
autoconf         # Create ./configure script
./configure      # Configure and create Makefile
make -j  # Build Verilator itself (if error, try just 'make')
sudo make install
```

-   cppdap

```bash
# Prerequisites:
sudo apt  install cmake make git
git clone https://github.com/google/cppdap.git
cd cppdap
git submodule update --init
mkdir build
cd build
cmake ..
sudo make install
```

-   cpp libraries for the debugger

```bash
sudo apt-get install libdw-dev libelf-dev
```

## For compiling the riscv assembly code

-   RISC-V GNU Toolchain

```bash
# Prerequisites:
sudo apt-get install autoconf automake autotools-dev curl python3 python3-pip libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils bc zlib1g-dev libexpat-dev ninja-build git cmake libglib2.0-dev libslirp-dev

git clone https://github.com/riscv-collab/riscv-gnu-toolchain.git
cd riscv-gnu-toolchain
./configure --prefix=/opt/riscv
sudo make linux
```

# Compilation

If your verilator is installed in a different directory, you need to change the VERILATOR_ROOT variable in the Vtb.mk file to your verilator installation directory.

```makefile
VERILATOR_ROOT = /usr/local/share/verilator
```

To compile the debug adapter, run the following commands in the root directory of this folder:

```bash
make -f Vtb.mk
```

This will generate the debug adapter executable 'Vtb' in the root directory. You can change the Vtb executable given in the template folder structure with this executable.

# Common Issues

While running the extension, if the debug session does not start and if it does not show any error, then try to run the Vtb executable you compiled in terminal. If there is an error in the compiled Vtb executable, it will print the error message. If you see empty output waiting for input, then the executable is working fine and you can exit using Ctrl+C.

-  Permisson denied
    
    ```bash
    chmod +x Vtb
    ```

-  ./Vtb: /lib/x86_64-linux-gnu/libc.so.6: version `GLIBC_2.32' not found (required by ./Vtb)

    This error is due to the version of the glibc library. That usually happens when you compile the debug adapter in a newer version of the OS and try to run it in an older version. To fix this, compile the debug adapter in the same machine where you are running the debug adapter.