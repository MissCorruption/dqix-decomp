#include <globaldefs.h>

struct Struct_020974b0_2 {
    struct Struct_020974b0_2* unknown_0_;
    char unknown_4_[0xe];
    signed char unknown_12_;
    unsigned char unknown_13_0_ : 1;
    unsigned char unknown_13_1_ : 1;
    unsigned char unknown_13_2_ : 6;
    unsigned char* unknown_14_;
    unsigned char unknown_18_;
    char unknown_19_[0x20 - 0x19];
};

struct Struct_020974b0 {
    struct Struct_020974b0_2* unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    struct Struct_020974b0_2* unknown_8_;
};

extern "C" void func_02097628(void*);
extern "C" void func_020976e0(void*);
extern "C" void func_02097844(struct Struct_020974b0_2**, int);

extern "C" {
// USA: func_020974b0
extern "C" ARM struct Struct_020974b0_2* func_020974b0(struct Struct_020974b0* arg0, int arg1, int arg2, bool arg3, short arg4, short* arg5) {
    unsigned short var0 = arg0->unknown_4_0_;
    struct Struct_020974b0_2* var1 = arg0->unknown_8_;
    arg0->unknown_0_ = NULL;
    short var2;
    for (var2 = 0; var2 < var0; var2++) {
        struct Struct_020974b0_2* var3 = &var1[var2];
        var3->unknown_0_ = NULL;
        var3->unknown_13_0_ = 1;
    }
    if (arg1 >= 0) {
        short var4;
        for (var4 = 0; var4 < var0; var4++) {
            struct Struct_020974b0_2* var5 = &var1[var4];
            var5->unknown_13_0_ = (var5->unknown_12_ == arg1);
        }
    }
    if (arg2 >= 0) {
        unsigned char var6 = arg2;
        short var7;
        for (var7 = 0; var7 < var0; var7++) {
            struct Struct_020974b0_2* var8 = &var1[var7];
            var8->unknown_13_0_ = 0;
            unsigned char var9;
            for (var9 = 0; var9 < var8->unknown_18_; var9++) {
                if (var8->unknown_14_[var9] == var6) {
                    var8->unknown_13_0_ = 1;
                    break;
                }
            }
        }
    }
    if (!arg3) {
        func_02097628(arg0);
    } else {
        func_020976e0(arg0);
    }
    *arg5 = 0;
    struct Struct_020974b0_2* var10 = arg0->unknown_0_;
    while (var10 != NULL) {
        (*arg5)++;
        var10 = var10->unknown_0_;
    }
    func_02097844((struct Struct_020974b0_2**)&arg0->unknown_0_, arg4);
    return arg0->unknown_0_;
}
}
