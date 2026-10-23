#include <globaldefs.h>

struct Struct_02098a84;
extern "C" int func_02098e3c(struct Struct_02098a84* arg0, int arg1);

struct Struct_02098630 {
    unsigned char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 4;
    unsigned int unknown_c_4_ : 4;
    unsigned int unknown_d_0_ : 24;
    unsigned int unknown_10_0_ : 2;
    unsigned int unknown_10_2_ : 30;
    unsigned char unknown_14_[0xe8 - 0x14];
};

extern "C" struct Struct_02098630* func_02098834(struct Struct_02098630* arg0, struct Struct_02098630* arg1);
extern "C" void func_02098364(void* arg0);

struct Struct_02098a84 {
    Struct_02098630 unknown_0_[30];
    unsigned char unknown_1b30_[8];
    int unknown_1b38_;
    unsigned char unknown_1b3c_[0x1b68 - 0x1b3c];
    unsigned int unknown_1b68_[3];
    int unknown_1b74_;
};

// USA: func_02098a84
extern "C" ARM int func_02098a84(Struct_02098a84* arg0) {
    Struct_02098630* var0 = arg0->unknown_0_;
    if (arg0->unknown_1b38_ == 0) {
        return 0;
    }

    int var1 = 0;
    int var2 = var1;
    int var3 = var1 - 1;
    int var4 = 1;
    for (int var5 = var1; var5 < 0x1e; var5++) {
        struct Struct_02098630* var6 = &var0[var5];
        if (var6->unknown_10_0_ == 0) {
            var3 = var5;
            break;
        }
        if (var6->unknown_c_4_ == 9 || var6->unknown_c_4_ == 10) {
            continue;
        }
        if (func_02098e3c(arg0, var6->unknown_10_2_) == 0) {
            var4 = 0;
        }
    }

    if (var3 == 0) {
        return 0;
    }

    if (var3 != -1) {
        if (var4) {
            if (var3 < 6) {
                return var3;
            }
            func_02098834(&var0[var3], &var0[arg0->unknown_1b74_]);
            func_02098364(&var0[arg0->unknown_1b74_]);
            return arg0->unknown_1b74_;
        }
        var1 = var3;
    } else {
        for (int var7 = 0x1d; var7 >= 0; var7--) {
            struct Struct_02098630* var8 = &var0[var7];
            if (var8->unknown_c_4_ == 9 || var8->unknown_c_4_ == 10) {
                continue;
            }
            if (func_02098e3c(arg0, var8->unknown_10_2_) == 0) {
                var1 = var7;
                break;
            }
        }
    }

    for (int var9 = var1 - 1; var9 >= 0; var9--) {
        struct Struct_02098630* var10 = &var0[var9];
        if (var10->unknown_c_4_ == 9 || var10->unknown_c_4_ == 10) {
            continue;
        }
        if (func_02098e3c(arg0, var10->unknown_10_2_) == 0) {
            var2 = var9;
            func_02098834(&var0[var1], var10);
            var1 = var9;
        }
    }
    struct Struct_02098630* var11 = &var0[var2];
    func_02098364(var11);

    struct Struct_02098630* var12;
    for (var1 = 0; var1 < 6; var1++) {
        if (var0[var1].unknown_c_4_ == 9 || var0[var1].unknown_c_4_ == 10) {
            continue;
        }
        var12 = &var0[var1];
        if (func_02098e3c(arg0, var12->unknown_10_2_) == 0) {
            var12->unknown_c_4_ = 2;
        }
    }
    for (var1 = 6; var1 < 12; var1++) {
        if (var0[var1].unknown_c_4_ == 9 || var0[var1].unknown_c_4_ == 10) {
            continue;
        }
        var12 = &var0[var1];
        if (func_02098e3c(arg0, var12->unknown_10_2_) == 0) {
            var12->unknown_c_4_ = 3;
        }
    }
    for (var1 = 12; var1 < 18; var1++) {
        if (var0[var1].unknown_c_4_ == 9 || var0[var1].unknown_c_4_ == 10) {
            continue;
        }
        var12 = &var0[var1];
        if (func_02098e3c(arg0, var12->unknown_10_2_) == 0) {
            var12->unknown_c_4_ = 4;
        }
    }
    for (var1 = 18; var1 < 24; var1++) {
        if (var0[var1].unknown_c_4_ == 9 || var0[var1].unknown_c_4_ == 10) {
            continue;
        }
        var12 = &var0[var1];
        if (func_02098e3c(arg0, var12->unknown_10_2_) == 0) {
            var12->unknown_c_4_ = 5;
        }
    }
    for (var1 = 24; var1 < 0x1e; var1++) {
        if (var0[var1].unknown_c_4_ == 9 || var0[var1].unknown_c_4_ == 10) {
            continue;
        }
        var12 = &var0[var1];
        if (func_02098e3c(arg0, var12->unknown_10_2_) == 0) {
            var12->unknown_c_4_ = 6;
        }
    }

    if (var2 < 6) {
        return var2;
    }
    func_02098834(var11, &var0[arg0->unknown_1b74_]);
    func_02098364(&var0[arg0->unknown_1b74_]);
    return arg0->unknown_1b74_;
}
