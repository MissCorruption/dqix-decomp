#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov000_0216fe9c
extern "C" ARM void func_ov000_0216fe9c(char* arg0) {
    *(unsigned short*)(arg0 + 0x0) = 1;
    *(unsigned short*)(arg0 + 0x2) = 1;
    *(unsigned short*)(arg0 + 0x4) = 1;
    *(unsigned short*)(arg0 + 0x6) = 1;
    memset(arg0 + 0x8, 0, 8);
    *(unsigned char*)(arg0 + 0x8) = 0xd;
    int var0 = 0;
    *(unsigned char*)(arg0 + 0x10) = var0;
    *(unsigned char*)(arg0 + 0x11) = var0;
    *(unsigned char*)(arg0 + 0x13) = var0;
    int var1 = var0 - 1;
    *(char*)(arg0 + 0x14) = var1;
    *(char*)(arg0 + 0x15) = var1;
    *(char*)(arg0 + 0x18) = var1;
    *(short*)(arg0 + 0x16) = var1;
    *(char*)(arg0 + 0x19) = var1;
    *(char*)(arg0 + 0x1a) = var1;
    *(char*)(arg0 + 0x1b) = var1;
    *(unsigned char*)(arg0 + 0x1c) = var0;
    *(unsigned char*)(arg0 + 0x1d) = var0;
    *(int*)(arg0 + 0x20) = var0;
    *(short*)(arg0 + 0x24) = var1;
    *(char*)(arg0 + 0x26) = var1;
    *(short*)(arg0 + 0x1e) = var0;
    *(unsigned char*)(arg0 + 0x27) = var0;
}
