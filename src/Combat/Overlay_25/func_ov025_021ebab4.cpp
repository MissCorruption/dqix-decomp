#include <globaldefs.h>

extern "C" void func_ov025_021ebb24(void* arg0);
extern "C" void* func_ov000_02160130(void);
extern "C" void func_ov025_021dcd5c(void* arg0);
extern "C" void func_ov025_021dcd98(char* arg0);

// USA: func_ov025_021ebab4
extern "C" ARM void func_ov025_021ebab4(char* arg0) {
    for (int var0 = 0; var0 < 0xc; var0++) {
        func_ov025_021ebb24(arg0 + (var0 << 6));
    }
    arg0[0x300] = 0;
    *(unsigned short*)(arg0 + 0x302) = 0;
    *(unsigned short*)(arg0 + 0x304) = 0;
    arg0[0x301] = 0;
    arg0[0x306] = 0;
    void* var1 = func_ov000_02160130();
    func_ov025_021dcd5c(var1);
    func_ov025_021dcd98((char*)var1);
    *(int*)(arg0 + 0x308) = 0;
    *(int*)(arg0 + 0x30c) = 0;
    arg0[0x310] = 1;
    arg0[0x311] = 0;
}
