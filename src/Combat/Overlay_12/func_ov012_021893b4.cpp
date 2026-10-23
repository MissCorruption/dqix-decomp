#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

struct Struct_ov012_0218b008 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    signed char unknown_3_;
    signed char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
};
extern struct Struct_ov012_0218b008 data_ov012_0218b008[];

struct Struct_ov012_021893b4 {
    char unknown_0_[LOW_REGION(0x130, 0xa0)];
    short unknown_a0_;
    short unknown_a2_;
    short unknown_a4_;
    short unknown_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_;
    unsigned char unknown_b1_;
    char unknown_b2_[3];
    unsigned char unknown_b5_;
};

// USA: func_ov012_021893b4
extern "C" ARM void func_ov012_021893b4(void* arg0, int arg1, int arg2, int arg3) {
    struct Struct_ov012_021893b4* var0 = (struct Struct_ov012_021893b4*)((char*)arg0 + LOW_REGION(0, 0xac));
    int var1;
    for (var1 = 0; data_ov012_0218b008[var1].unknown_0_ != 0xff; var1++) {
        struct Struct_ov012_0218b008* var2 = &data_ov012_0218b008[var1];
        if (var2->unknown_0_ == arg1) {
            unsigned char var3, var4;
            signed char var5, var6;
            unsigned char var7, var8;
            var0->unknown_b1_ = var2->unknown_0_;
            var0->unknown_a4_ = arg2;
            var0->unknown_a6_ = arg3;
            var3 = var2->unknown_2_;
            var4 = var2->unknown_1_;
            var0->unknown_a8_ = var4;
            var0->unknown_aa_ = var3;
            var5 = var2->unknown_4_;
            var6 = var2->unknown_3_;
            var0->unknown_a0_ = var6;
            var0->unknown_a2_ = var5;
            var7 = var2->unknown_6_;
            var8 = var2->unknown_5_;
            var0->unknown_ac_ = var8;
            var0->unknown_ae_ = var7;
            var0->unknown_b5_ = 1;
            return;
        }
    }
}
