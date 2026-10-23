#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

extern AllocatorUnion data_02114e20;
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

struct Struct_ov015_0218eef0;
extern "C" void func_ov015_0218eef0(struct Struct_ov015_0218eef0* arg0);

struct Struct_ov015_0218ef7c_2;
struct Struct_ov015_0218ef7c_3;
struct Struct_ov015_0218ef7c;
extern "C" int func_ov015_0218ef7c(struct Struct_ov015_0218ef7c_2* arg0, struct Struct_ov015_0218ef7c_3* arg1, struct Struct_ov015_0218ef7c* arg2);

extern "C" int func_ov015_0218f27c(void* arg0, void* arg1);
extern "C" void func_ov015_0218f0c4(void* arg0);

struct Struct_ov015_021919e4 { void* unknown_0_; struct Struct_ov015_021919e4* unknown_4_; };

struct Struct_ov015_021919e4_2 {
    char unknown_0_[0x2c];
    struct Struct_ov015_021919e4* unknown_2c_;
};

// USA: func_ov015_021919e4
extern "C" ARM void* func_ov015_021919e4(struct Struct_ov015_021919e4_2* arg0, void* arg1) {
    struct Struct_ov015_021919e4* var0 = (struct Struct_ov015_021919e4*)func_02012d88(&data_02114e20, 8);
    if (var0 == 0) {
        return 0;
    }
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = func_02012d88(&data_02114e20, 0x5c);
    if (var0->unknown_0_ == 0) {
        func_02012da4(&data_02114e20, var0);
        return 0;
    }
    void* var1 = var0->unknown_0_;

    func_ov015_0218eef0((struct Struct_ov015_0218eef0*)var1);
    int var2 = func_ov015_0218ef7c((struct Struct_ov015_0218ef7c_2*)var1, (struct Struct_ov015_0218ef7c_3*)arg0, (struct Struct_ov015_0218ef7c*)arg1);
    if (var2 == 0) {
        func_02012da4(&data_02114e20, var0->unknown_0_);
        var0->unknown_0_ = 0;
        func_02012da4(&data_02114e20, var0);
        return 0;
    }

    if (!func_ov015_0218f27c(var1, arg1)) {
        func_ov015_0218f0c4(var0->unknown_0_);
        func_02012da4(&data_02114e20, var0->unknown_0_);
        var0->unknown_0_ = 0;
        func_02012da4(&data_02114e20, var0);
        return 0;
    }

    struct Struct_ov015_021919e4** var3 = &arg0->unknown_2c_;
    while (*var3 != 0) {
        var3 = &(*var3)->unknown_4_;
    }
    *var3 = var0;
    return var0->unknown_0_;
}
