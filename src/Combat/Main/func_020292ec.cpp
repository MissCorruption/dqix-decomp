#include <globaldefs.h>

// USA: func_020292ec
extern "C" ARM void func_020292ec(int arg0, int arg1, int arg2, int arg3, int arg4) {
    *(volatile unsigned int*)0x4000444 = 0;
    *(volatile unsigned int*)0x4000454 = 0;
    *(volatile unsigned int*)0x4000470 = arg0 << 12;
    *(volatile unsigned int*)0x4000470 = arg1 << 12;
    *(volatile unsigned int*)0x4000470 = 0x3ff000;
    *(volatile unsigned int*)0x400046c = arg2 << 12;
    *(volatile unsigned int*)0x400046c = arg3 << 12;
    *(volatile unsigned int*)0x400046c = 0x1000;
    *(volatile unsigned int*)0x4000500 = 1;
    *(volatile unsigned int*)0x4000480 = arg4 & 0xffff;
    *(volatile unsigned int*)0x400048c = 0;
    *(volatile unsigned int*)0x400048c = 0x1000;
    *(volatile unsigned int*)0x400048c = 0x1000;
    *(volatile unsigned int*)0x400048c = 0x1000;
    *(volatile unsigned int*)0x400048c = 0x10001000;
    *(volatile unsigned int*)0x400048c = 0x1000;
    *(volatile unsigned int*)0x400048c = 0x10000000;
    *(volatile unsigned int*)0x400048c = 0x1000;
    *(volatile unsigned int*)0x4000504 = 0;
    *(volatile unsigned int*)0x4000448 = 1;
}
