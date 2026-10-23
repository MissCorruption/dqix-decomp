#include <globaldefs.h>

#define EXMEMCNT (*(volatile unsigned short*)0x4000204)

// USA: func_020d14b0
extern "C" ARM void func_020d14b0(int* arg0) {
    EXMEMCNT = (arg0[0] << 2) | (EXMEMCNT & ~0xc);
    EXMEMCNT = (arg0[1] << 4) | (EXMEMCNT & ~0x10);
}
