#include <globaldefs.h>
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

extern "C" void func_020ca390(int, void*, unsigned int);
extern "C" void func_ov031_0221bfe8(void*);
extern "C" void* func_ov031_0221b8e4(void*);
extern "C" void func_ov031_02236570(int);

struct Struct_ov031_022364c0 { unsigned char unknown_0_[0xe7]; unsigned char unknown_e7_; unsigned char unknown_e8_[8]; unsigned char unknown_f0_[14]; unsigned char unknown_fe_[2]; };
struct Struct_ov031_022364c0_2 { Struct_ov031_022364c0 unknown_0_[4]; };
extern Struct_ov031_022364c0_2* data_ov031_02290cfc;

// USA: func_ov031_022364c0
extern "C" ARM void func_ov031_022364c0() {
    func_020ca390(0, data_ov031_02290cfc, 0x400);
    int var0 = 0;
    do {
        data_ov031_02290cfc->unknown_0_[var0].unknown_e7_ = 0xff;
        var0++;
    } while (var0 < 3);
    unsigned char var1[20];
    func_ov031_0221bfe8(var1);
    void* var2 = func_ov031_0221b8e4(var1);
    unsigned int var3;
    int var4 = 0;
    var3 = 0;
    do {
        Struct_ov031_022364c0* var5 = (Struct_ov031_022364c0*)((char*)data_ov031_02290cfc + var3);
        VectorizedInvertedMemcpy(var2, var5->unknown_f0_, 14);
        var4++;
        var3 += 0x100;
    } while (var4 < 2);
    int var6 = 0;
    do {
        func_ov031_02236570(var6);
        var6++;
    } while (var6 < 4);
}
