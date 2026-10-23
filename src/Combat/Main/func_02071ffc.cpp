#include <globaldefs.h>

struct Struct_02071ffc_2;
struct Struct_02071ffc_3;
struct Struct_02071ffc_5;

extern "C" void func_0207214c(struct Struct_02071ffc_2* arg0);
extern "C" void func_020721f8(struct Struct_02071ffc_3* arg0);
extern "C" void func_020722a4(struct Struct_02071ffc_5** arg0, int arg1);

struct Struct_02071ffc {
    unsigned char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 20;
    unsigned int unknown_e_4_   : 8;
    unsigned int unknown_f_4_ : 4;
    unsigned int unknown_10_0_ : 21;
    unsigned int unknown_12_5_   : 1;
    unsigned int unknown_12_6_: 1;
    unsigned int unknown_12_7_  : 8;
    unsigned int unknown_13_7_ : 1;
    unsigned char unknown_14_[8];
    struct Struct_02071ffc* unknown_1c_;
};

struct Struct_02071ffc_4 {
    struct Struct_02071ffc* unknown_0_;
    struct Struct_02071ffc* unknown_4_;
    unsigned char unknown_8_[2];
    unsigned short unknown_a_;
};

// USA: func_02071ffc
extern "C" ARM struct Struct_02071ffc* func_02071ffc(struct Struct_02071ffc_4* arg0, int arg1, int arg2, int arg3, short arg4, short* arg5) {
    unsigned short var0 = arg0->unknown_a_;
    struct Struct_02071ffc* var1 = arg0->unknown_4_;
    unsigned short var2, var3, var4;
    struct Struct_02071ffc* var5;

    arg0->unknown_0_ = NULL;
    for (var2 = 0; var2 < var0; var2++) {
        struct Struct_02071ffc* var6 = (struct Struct_02071ffc*)((char*)var1 + (var2 << 5));
        var6->unknown_1c_ = NULL;
        var6->unknown_12_5_ = 1;
    }
    if (arg1 >= 0) {
        for (var3 = 0; var3 < var0; var3++) {
            struct Struct_02071ffc* var7 = (struct Struct_02071ffc*)((char*)var1 + (var3 << 5));
            var7->unknown_12_5_ = (var7->unknown_e_4_ == (unsigned int)arg1);
        }
    }
    if (arg2 >= 0) {
        for (var4 = 0; var4 < var0; var4++) {
            struct Struct_02071ffc* var8 = (struct Struct_02071ffc*)((char*)var1 + (var4 << 5));
            var8->unknown_12_5_ = (var8->unknown_12_7_ == (unsigned int)arg2);
        }
    }
    if (arg3 == 0) {
        func_0207214c((struct Struct_02071ffc_2*)arg0);
    } else {
        func_020721f8((struct Struct_02071ffc_3*)arg0);
    }

    *arg5 = 0;
    var5 = arg0->unknown_0_;
    while (var5 != NULL) {
        (*arg5)++;
        var5 = var5->unknown_1c_;
    }

    func_020722a4((struct Struct_02071ffc_5**)arg0, arg4);
    return arg0->unknown_0_;
}
