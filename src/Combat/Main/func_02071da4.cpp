#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);

struct Struct_02071da4_2 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    unsigned short unknown_a_0_ : 4;
    unsigned short unknown_a_4_ : 4;
    unsigned short unknown_b_0_ : 4;
    unsigned short unknown_b_4_ : 4;
    char unknown_c_[0x14];
};

struct Struct_02071da4 {
    char unknown_0_[4];
    struct Struct_02071da4_2* unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

// USA: func_02071da4
extern "C" ARM struct Struct_02071da4_2* func_02071da4(struct Struct_02071da4* arg0, short* arg1, unsigned char* arg2, unsigned char* arg3) {
    unsigned char var0;
    unsigned char var1;
    struct Struct_02071da4_2* var2;
    unsigned int var3;
    struct Struct_02071da4_2* var4;
    unsigned short var5;
    unsigned char var6;
    unsigned char var7;
    unsigned char var8;
    unsigned char var9;
    unsigned char var10;
    unsigned char var11;
    unsigned char var12[3];
    unsigned char var13;
    int var14;
    int var15;
    int var16;

    if (arg1 == NULL || arg2 == NULL) {
        return NULL;
    }
    var0 = 0;
    for (var1 = 0; var1 < 3; var1++) {
        if (arg1[var1] > 0) {
            var0 = var0 + 1;
        }
    }

    var2 = arg0->unknown_4_;
    var3 = arg0->unknown_a_;
    for (var5 = 0; var5 < var3; var5++) {
        var4 = &var2[var5];
        var6 = 0;
        var6 += (var4->unknown_4_ > 0);
        var6 += (var4->unknown_6_ > 0);
        var6 += (var4->unknown_8_ > 0);
        if (var6 == var0) {
            __clear(var12, 3);
            for (var8 = 0; var8 < var6; var8++) {
                short var17 = arg1[var8];
                var13 = arg2[var8];
                if (var17 == var4->unknown_4_) {
                    var14 = var4->unknown_a_0_;
                    if (var13 % var14 == 0) {
                        var12[0] = var13 / var14;
                    } else {
                        break;
                    }
                } else if (var17 == var4->unknown_6_) {
                    var15 = var4->unknown_a_4_;
                    if (var13 % var15 == 0) {
                        var12[1] = var13 / var15;
                    } else {
                        break;
                    }
                } else if (var17 == var4->unknown_8_) {
                    var16 = var4->unknown_b_0_;
                    if (var13 % var16 == 0) {
                        var12[2] = var13 / var16;
                    } else {
                        break;
                    }
                } else {
                    break;
                }
            }

            var7 = 0;
            for (var10 = 0; var10 < 3; var10++) {
                if (var12[var10] != 0) {
                    var7 = var7 + 1;
                }
            }

            if (var6 == var7) {
                var9 = 0;
                for (var11 = 1; var11 < var6; var11++) {
                    if (var12[0] != var12[var11]) {
                        var9 = 1;
                        break;
                    }
                }
                if (var9 == 0) {
                    *arg3 = var12[0];
                    return var4;
                }
            }
        }
    }
    return NULL;
}
