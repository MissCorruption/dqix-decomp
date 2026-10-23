#include <globaldefs.h>

extern "C" int func_0204c7e0(unsigned char* arg0);
extern "C" int func_0204fd00(void* arg0, int arg1);
extern "C" void func_0204bc74(void* arg0, int arg1, short arg2, short arg3, short arg4, short arg5, int arg6);

struct Struct_0205da88 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    char unknown_1d_[0x20 - 0x1d];
};

struct Struct_0205da88_2 {
    char unknown_0_[0x4];
    struct Struct_0205da88* unknown_4_;
    char unknown_8_[0xa8 - 0x8];
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[0xc0 - 0xb0];
    short unknown_c0_;
    char unknown_c2_[0xc5 - 0xc2];
    unsigned char unknown_c5_;
    char unknown_c6_[0xe0 - 0xc6];
};

struct Struct_0205da88_3 {
    char unknown_0_[0x98];
    struct Struct_0205da88* unknown_98_;
    struct Struct_0205da88_2* unknown_9c_;
    char unknown_a0_[0xb2 - 0xa0];
    unsigned char unknown_b2_;
    unsigned char unknown_b3_;
};

// USA: func_0205da88
extern "C" ARM void func_0205da88(struct Struct_0205da88_3* arg0, int arg1, int arg2, unsigned short arg3) {
    struct Struct_0205da88* var0;
    struct Struct_0205da88* var1;
    struct Struct_0205da88* var2;
    struct Struct_0205da88_2* var3;
    unsigned char var4;

    if (arg0->unknown_98_ != 0 && arg0->unknown_9c_ != 0) {
        arg1 &= 3;
        arg2 &= 3;
        if (arg1 == arg2) return;

        var0 = 0;
        var1 = 0;
        for (var4 = 0; var4 < arg0->unknown_b2_; var4++) {
            var2 = &arg0->unknown_98_[var4];
            if (arg1 == var2->unknown_1c_4_) var0 = var2;
            if (arg2 == var2->unknown_1c_4_) var1 = var2;
        }
        if ((var0 == 0) | (var1 == 0)) return;

        arg3 &= 0x3ff;
        for (var4 = 0; var4 < arg0->unknown_b3_; var4++) {
            var3 = &arg0->unknown_9c_[var4];
            if (!func_0204c7e0((unsigned char*)var3)) continue;
            if (var3->unknown_c5_ & 0x20) continue;
            if (var3->unknown_c5_ & 0x80) continue;
            if (var1 != var3->unknown_4_) continue;
            short var5 = var3->unknown_ac_;
            short var6 = var3->unknown_ae_;
            short var7 = var3->unknown_a8_;
            short var8 = var3->unknown_c0_;
            func_0204bc74(var0, arg3, var5, var6, var7, var8, 0);
            if (var8 == 0 || arg3 == 0) continue;
            if (!func_0204fd00(var3, 1))
                func_0204bc74(var0, 2, var5, var6, 1, 1, 0);
            if (!func_0204fd00(var3, 2))
                func_0204bc74(var0, 0x402, (short)(var5 + var7 - 1), var6, 1, 1, 0);
            if (!func_0204fd00(var3, 4))
                func_0204bc74(var0, 0x802, var5, (short)(var6 + var8 - 1), 1, 1, 0);
            if (!func_0204fd00(var3, 8))
                func_0204bc74(var0, 0xc02, (short)(var5 + var7 - 1), (short)(var6 + var8 - 1), 1, 1, 0);
        }
    }
}
