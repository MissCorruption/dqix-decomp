#include <globaldefs.h>

// USA: func_ov025_021ed5f0
#pragma optimize_for_size off
extern "C" ARM void func_ov025_021ed5f0(char* arg0, int arg1, int arg2, int arg3) {
    if (arg2 >= 6) return;
    if (*(unsigned char*)(arg0 + 0x151) >= 0x10) return;
    unsigned char var0 = *(unsigned char*)(arg0 + 0x151);
    *(int*)(arg0 + 0xf0 + var0 * 4) = arg1;
    var0 = *(unsigned char*)(arg0 + 0x151);
    *(unsigned char*)(arg0 + 0x130 + var0) = arg2;
    var0 = *(unsigned char*)(arg0 + 0x151);
    *(unsigned char*)(arg0 + 0x140 + var0) = arg3;
    var0 = *(unsigned char*)(arg0 + 0x151);
    *(unsigned char*)(arg0 + 0x151) = var0 + 1;
}
