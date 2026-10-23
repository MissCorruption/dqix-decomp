#include <globaldefs.h>
#include <NitroSDK/Cache.h>

#if defined(jpn)
#define func_0204e3e0 func_0204f6a0
#define func_0204cd60 func_0204daf8
#endif

struct Struct_0204cb20 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    inline int inline_0204cb20() { return unknown_1c_4_; }
};
struct Struct_0204cb20_2 {
    int unknown_0_;
    Struct_0204cb20* unknown_4_;
    void* unknown_8_;
    char unknown_c_[0xa0 - 0xc];
    int unknown_a0_;
    int unknown_a4_;
    short unknown_a8_, unknown_aa_;
    short unknown_ac_, unknown_ae_;
    short unknown_b0_, unknown_b2_, unknown_b4_, unknown_b6_;
    char unknown_b8_[0xc7 - 0xb8];
    unsigned char unknown_c7_;
};
extern "C" void __clear(void*, unsigned int);
extern "C" void* func_020421a0();
#if defined(jpn)
extern "C" void func_020474a8(void*, int, const char*, char*);
extern "C" int func_0204e3e0(Struct_0204cb20_2*, char*, int, int, int);
extern "C" void func_0204cd60(Struct_0204cb20_2*, char*, int);
#else
extern "C" void func_02046608(void*, int, const char*, char*, int, int, int);
extern "C" int func_0204e3e0(Struct_0204cb20_2*, char*, int, int, int, int);
extern "C" void func_0204cd60(Struct_0204cb20_2*, char*, int, int);
#endif
extern "C" void func_02050100(Struct_0204cb20_2*, int);
typedef void (*Type_0204cb20)(void*, int, unsigned int);
extern "C" Type_0204cb20 func_0204a5e4(int, int);

// USA: func_0204cb20
#if defined(jpn)
extern "C" ARM void func_0204cb20(Struct_0204cb20_2* arg0, const char* arg1, short arg2) {
    char var0[0x800];
    short var1;
    short var2;
    short var3;
    short var4;
    short var5;
    short var6;
    int var7;
    if (arg0->unknown_4_ && arg0->unknown_8_ && arg1) {
        var1 = arg0->unknown_a8_;
        var2 = arg0->unknown_aa_;
        var3 = arg0->unknown_b0_;
        var4 = arg0->unknown_b2_;
        var5 = arg0->unknown_b4_;
        var6 = arg0->unknown_b6_;
        var7 = arg0->unknown_a4_;
        __clear(var0, sizeof(var0));
        func_020474a8(func_020421a0(), arg0->unknown_c7_, arg1, var0);
        int var8 = func_0204e3e0(arg0, var0, 0, 0, arg2);
        arg0->unknown_a8_ = var1;
        arg0->unknown_aa_ = var2;
        arg0->unknown_b0_ = var3;
        arg0->unknown_b2_ = var4;
        arg0->unknown_b4_ = var5;
        arg0->unknown_b6_ = var6;
        arg0->unknown_a4_ = var7;
        func_0204cd60(arg0, var0, var8);
        func_02050100(arg0, 0);
        int var9 = arg0->unknown_4_->inline_0204cb20();
        int var10 = arg0->unknown_4_->unknown_1c_0_;
        Type_0204cb20 var11 = func_0204a5e4(var10, var9);
        CleanInvalidateCacheRange(arg0->unknown_8_, arg0->unknown_a4_);
        var11(arg0->unknown_8_, arg0->unknown_a0_, arg0->unknown_a4_);
    }
}
#else
extern "C" ARM void func_0204cb20(Struct_0204cb20_2* arg0, const char* arg1, int arg2, int arg3) {
    char var12[0x800];
    short var13;
    short var14;
    short var15;
    short var16;
    short var17;
    int var18;
    int var19;
    short var20;
    if (arg0->unknown_4_ && arg0->unknown_8_ && arg1) {
        var20 = arg0->unknown_a8_;
        var13 = arg0->unknown_aa_;
        var18 = (var20 << 3) - 4;
        var17 = arg0->unknown_b0_;
        var14 = arg0->unknown_b2_;
        if (arg2) var18 = 0x100;
        var15 = arg0->unknown_b4_;
        var16 = arg0->unknown_b6_;
        var19 = arg0->unknown_a4_;
        __clear(var12, sizeof(var12));
        func_02046608(func_020421a0(), arg0->unknown_c7_, arg1, var12, var18, var17, arg3);
        int var21 = func_0204e3e0(arg0, var12, 0, 0, arg2, arg3);
        arg0->unknown_a8_ = var20;
        arg0->unknown_aa_ = var13;
        arg0->unknown_b0_ = var17;
        arg0->unknown_b2_ = var14;
        arg0->unknown_b4_ = var15;
        arg0->unknown_b6_ = var16;
        arg0->unknown_a4_ = var19;
        func_0204cd60(arg0, var12, var21, arg3);
        func_02050100(arg0, 0);
        int var22 = arg0->unknown_4_->inline_0204cb20();
        int var23 = arg0->unknown_4_->unknown_1c_0_;
        Type_0204cb20 var24 = func_0204a5e4(var23, var22);
        CleanInvalidateCacheRange(arg0->unknown_8_, arg0->unknown_a4_);
        var24(arg0->unknown_8_, arg0->unknown_a0_, arg0->unknown_a4_);
    }
}
#endif
