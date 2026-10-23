#include <globaldefs.h>

struct Struct_0207fe80_2 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    char unknown_1d_[0x20 - 0x1d];
};

struct Struct_0207fe80 {
    char unknown_0_[4];
    struct Struct_0207fe80_2* unknown_4_;
    char unknown_8_[0xa8 - 8];
    short unknown_a8_;
    char unknown_aa_[2];
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[0xc0 - 0xb0];
    short unknown_c0_;
    char unknown_c2_[0xc4 - 0xc2];
    unsigned char unknown_c4_;
    unsigned char unknown_c5_;
    char unknown_c6_[0xe0 - 0xc6];
};

struct Struct_0207fe80_3 {
#if defined(jpn)
    char unknown_0_[0x20];
#else
    char unknown1_0_[0x2c];
#endif
    struct Struct_0207fe80_2* unknown_2c_;
    struct Struct_0207fe80* unknown_30_;
    char unknown_34_[0x38 - 0x34];
    unsigned char unknown_38_;
    unsigned char unknown_39_;
};

extern "C" int func_0204c7e0(unsigned char*);
extern "C" void func_0204bc74(struct Struct_0207fe80_2* arg0, int arg1, short arg2, short arg3, short arg4, short arg5, int arg6);
extern "C" int func_0204fd00(struct Struct_0207fe80* arg0, int arg1);

// USA: func_0207fe80
extern "C" ARM void func_0207fe80(struct Struct_0207fe80_3* arg0, int arg1, int arg2, unsigned short arg3) {
    struct Struct_0207fe80_2* var0;
    struct Struct_0207fe80_2* var1;
    struct Struct_0207fe80_2* var2;
    unsigned char var3;
    struct Struct_0207fe80* var4;
    unsigned char var5;
    short var6;
    short var7;
    short var8;
    short var9;

    arg1 &= 3;
    arg2 &= 3;
    if (arg1 == arg2) {
        return;
    }
    var0 = NULL;
    var1 = NULL;
    for (var3 = 0; var3 < arg0->unknown_38_; var3++) {
        var2 = &arg0->unknown_2c_[var3];
        if (arg1 == var2->unknown_1c_4_) {
            var0 = var2;
        }
        if (arg2 == var2->unknown_1c_4_) {
            var1 = var2;
        }
    }
    if ((var0 == NULL) | (var1 == NULL)) {
        return;
    }
    arg3 &= 0x3ff;
    for (var5 = 0; var5 < arg0->unknown_39_; var5++) {
        var4 = &arg0->unknown_30_[var5];
        if (func_0204c7e0((unsigned char*)var4) && var4->unknown_c4_ != 0xff) {
            if (!(var4->unknown_c5_ & 0x20) && !(var4->unknown_c5_ & 0x80) && var1 == var4->unknown_4_) {
                var7 = var4->unknown_ae_;
                var6 = var4->unknown_ac_;
                var8 = var4->unknown_a8_;
                var9 = var4->unknown_c0_;
                func_0204bc74(var0, arg3, var6, var7, var8, var9, 0);
                if (var9 && arg3) {
                    if (!func_0204fd00(var4, 1)) {
                        func_0204bc74(var0, 2, var6, var7, 1, 1, 0);
                    }
                    if (!func_0204fd00(var4, 2)) {
                        func_0204bc74(var0, 0x402, (short)(var6 + var8 - 1), var7, 1, 1, 0);
                    }
                    if (!func_0204fd00(var4, 4)) {
                        func_0204bc74(var0, 0x802, var6, (short)(var7 + var9 - 1), 1, 1, 0);
                    }
                    if (!func_0204fd00(var4, 8)) {
                        func_0204bc74(var0, 0xc02, (short)(var6 + var8 - 1), (short)(var7 + var9 - 1), 1, 1, 0);
                    }
                }
            }
        }
    }
}
