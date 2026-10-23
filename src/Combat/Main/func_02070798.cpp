#include <globaldefs.h>

// USA: func_02070798
extern "C" ARM void func_02070798(int arg0, int arg1, int arg2) {
    *(volatile unsigned int*)0x400048c = (arg0 & 0xffff) | ((unsigned short)arg1 << 16);
    *(volatile unsigned int*)0x400048c = arg2 & 0xffff;
}
