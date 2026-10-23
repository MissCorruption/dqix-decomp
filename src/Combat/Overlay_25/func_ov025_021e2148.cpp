#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov025_021e2148_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    char unknown_6_[2];
    Struct_ov025_021e2148_4* unknown_8_;
};

struct Struct_ov025_021e2148 {
    Struct_ov025_021e2148_4* unknown_0_;
};

struct Struct_ov025_021e2148_2 {
    Struct_ov025_021e2148_4* unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_[12];
    unsigned char unknown_14_;
};

struct Struct_ov025_021e2148_3 {
    unsigned char unknown_0_[6];
};

struct Struct_ov000_02171720;
struct Struct_ov000_02171720_2;
struct Struct_ov000_02171738;
struct Struct_ov000_0217179c;
struct Struct_ov000_0217179c_2;

#if defined(jpn)
#define func_ov025_021e23d0 func_ov000_02171720
#define func_ov025_021e23e8 func_ov000_02171738
#define func_ov025_021e244c func_ov000_0217179c
#define func_ov025_021e2494 func_ov000_021717e4
extern "C" void func_ov000_02171720(Struct_ov000_02171720* arg0, Struct_ov000_02171720_2* arg1);
extern "C" int func_ov000_021717e4(void* arg0);
extern "C" Struct_ov025_021e2148_4* func_ov000_02171738(Struct_ov000_02171738* arg0);
extern "C" void func_ov000_0217179c(Struct_ov000_0217179c* arg0, Struct_ov000_0217179c_2* arg1);
#endif

extern "C" void func_ov025_021e23d0(Struct_ov000_02171720* arg0, Struct_ov000_02171720_2* arg1);
extern "C" int func_ov025_021e2494(void* arg0);
extern "C" Struct_ov025_021e2148_4* func_ov025_021e23e8(Struct_ov000_02171738* arg0);
extern "C" void func_ov025_021e244c(Struct_ov000_0217179c* arg0, Struct_ov000_0217179c_2* arg1);
extern "C" int func_ov025_021e24a8(Struct_ov025_021e2148* arg0, Struct_ov025_021e2148_4* arg1);
extern "C" void func_ov000_0216f82c(Struct_ov025_021e2148_3* arg0, const int* arg1);

// USA: func_ov025_021e2148
extern "C" ARM int func_ov025_021e2148(Struct_ov025_021e2148_2* arg0, int arg1, int arg2, unsigned char* arg3, int arg4) {
    if (arg0->unknown_0_ == NULL) {
        return 0;
    }
    if (arg0->unknown_4_ <= arg1) {
        return 0;
    }
    if (arg0->unknown_4_ <= arg2) {
        return 0;
    }
    memset(arg0->unknown_0_, 0, arg0->unknown_4_ * sizeof(Struct_ov025_021e2148_4));

    Struct_ov025_021e2148 var0;
    Struct_ov025_021e2148 var1;
    var0.unknown_0_ = NULL;
    var1.unknown_0_ = NULL;

    unsigned char* var2 = arg0->unknown_8_;
    for (int var3 = 0; var3 < arg0->unknown_14_; var3++) {
        int var4 = var2[var3];
        if (arg0->unknown_4_ <= var4) {
            return 0;
        }
        arg0->unknown_0_[var4].unknown_5_ = 1;
    }

    Struct_ov025_021e2148_4* var5 = &arg0->unknown_0_[arg1];
    var5->unknown_0_ = arg1;
    var5->unknown_1_ = 0;
    var5->unknown_2_ = 0;
    var5->unknown_3_ = 0;
    var5->unknown_4_ = 0xff;
    var5->unknown_8_ = NULL;
    var5->unknown_5_ = 0;
    func_ov025_021e23d0((Struct_ov000_02171720*)&var0, (Struct_ov000_02171720_2*)var5);

    Struct_ov025_021e2148_4* var6;
    while (true) {
        if (func_ov025_021e2494(&var0)) {
            return 0;
        }
        var6 = func_ov025_021e23e8((Struct_ov000_02171738*)&var0);
        if (var6->unknown_0_ == arg2) {
            break;
        }
        func_ov025_021e23d0((Struct_ov000_02171720*)&var1, (Struct_ov000_02171720_2*)var6);

        Struct_ov025_021e2148_3 var7;
        Struct_ov025_021e2148_3 var8;
        int var9 = var6->unknown_0_;
        func_ov000_0216f82c(&var8, &var9);
        var7 = var8;

        for (int var10 = 0; var10 < 6; var10++) {
            int var11 = var7.unknown_0_[var10];
            if (var11 == 0xff) {
                continue;
            }
            Struct_ov025_021e2148_4* var12 = &arg0->unknown_0_[var11];
            var12->unknown_0_ = var11;
            if (arg0->unknown_4_ <= var11) {
                return 0;
            }
            if (var12->unknown_5_ != 0) {
                continue;
            }
            var6->unknown_2_ = var6->unknown_1_ - var6->unknown_3_;
            int var13 = var6->unknown_2_ + 1;
            if (func_ov025_021e24a8(&var0, var12)) {
                if (var13 < var12->unknown_1_) {
                    var12->unknown_1_ = var13;
                    var12->unknown_4_ = var6->unknown_0_;
                }
            } else if (func_ov025_021e24a8(&var1, var12)) {
                if (var13 < var12->unknown_1_) {
                    var12->unknown_1_ = var13;
                    var12->unknown_4_ = var6->unknown_0_;
                    func_ov025_021e244c((Struct_ov000_0217179c*)&var1, (Struct_ov000_0217179c_2*)var12);
                    func_ov025_021e23d0((Struct_ov000_02171720*)&var0, (Struct_ov000_02171720_2*)var12);
                }
            } else {
                var12->unknown_1_ = var13;
                var12->unknown_4_ = var6->unknown_0_;
                func_ov025_021e23d0((Struct_ov000_02171720*)&var0, (Struct_ov000_02171720_2*)var12);
            }
        }
    }

    Struct_ov025_021e2148_4* var14 = &arg0->unknown_0_[arg2];
    int var15 = 0;
    while (true) {
        arg3[var15] = var14->unknown_0_;
        var15++;
        if (arg4 <= var15) {
            break;
        }
        int var16 = var14->unknown_4_;
        if (arg0->unknown_4_ <= var16) {
            break;
        }
        var14 = &arg0->unknown_0_[var16];
    }
    return var15;
}
