#include <globaldefs.h>
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

extern "C" void func_020ca390(int a, void* b, unsigned int c);
extern "C" void func_ov031_0221bfe8(void* arg0);
extern "C" void* func_ov031_0221b8e4(void* arg0);

struct Struct_ov031_0221bdb8 {
    unsigned char unknown_0_[0xe7];
    unsigned char unknown_e7_;
    unsigned char unknown_e8_[8];
    unsigned char unknown_f0_[0x10];
};

// USA: func_ov031_0221bdb8
extern "C" ARM int func_ov031_0221bdb8(char* arg0) {
    char var0[0x14];
    Struct_ov031_0221bdb8* var1 = (Struct_ov031_0221bdb8*)arg0;
    func_020ca390(0, arg0, 0x400);
    for (int var2 = 0; var2 < 3; var2++) {
        var1[var2].unknown_e7_ = 0xff;
    }
    func_ov031_0221bfe8(var0);
    void* var3 = func_ov031_0221b8e4(var0);
    for (int var4 = 0; var4 < 2; var4++) {
        VectorizedInvertedMemcpy(var3, var1[var4].unknown_f0_, 0xe);
    }
    return 0;
}
