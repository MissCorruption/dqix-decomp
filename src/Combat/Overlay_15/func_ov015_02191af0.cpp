#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_ov015_0218f0c4(void* arg0);
extern "C" void func_ov015_02192700(void* arg0, int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern AllocatorUnion data_02114e20;

struct Struct_ov015_02191af0 { void* unknown_0_; Struct_ov015_02191af0* unknown_4_; };

struct Struct_ov015_02191af0_2 {
    char unknown_0_[0x2c];
    Struct_ov015_02191af0* unknown_2c_;
    char unknown_30_[0x23c];
    short unknown_26c_;
    char unknown_26e_[0xb0];
    unsigned short unknown_31e_;
};

// USA: func_ov015_02191af0
extern "C" ARM void func_ov015_02191af0(Struct_ov015_02191af0_2* arg0, int arg1) {
    Struct_ov015_02191af0* var0 = arg0->unknown_2c_;
    if (var0 == 0) {
        return;
    }
    int var1 = 0;
    Struct_ov015_02191af0* var2 = 0;
    Struct_ov015_02191af0* var3 = var0->unknown_4_;
    while (var1 < arg1) {
        var2 = var0;
        var0 = var3;
        var3 = var3->unknown_4_;
        var1++;
    }
    func_ov015_0218f0c4(var0->unknown_0_);
    func_02012da4(&data_02114e20, var0->unknown_0_);
    func_02012da4(&data_02114e20, var0);
    if (var2 != 0) {
        var2->unknown_4_ = var3;
    } else {
        arg0->unknown_2c_ = var3;
    }
    if ((arg0->unknown_31e_ - 1) <= arg0->unknown_26c_) {
        arg0->unknown_26c_ = arg0->unknown_31e_ - 2;
        if (arg0->unknown_26c_ < 0) {
            arg0->unknown_26c_ = 0;
        }
    }
    func_ov015_02192700(arg0, 0);
}
