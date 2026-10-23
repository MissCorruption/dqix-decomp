#include <globaldefs.h>

struct Struct_0202bad4 {
    char unknown_0_[4];
    unsigned char unknown_4_[6];
    char unknown_a_[0x43 - 0xa];
    unsigned char unknown_43_;
    char unknown_44_[0x50 - 0x44];
    unsigned char unknown_50_[0x63 - 0x50];
    signed char unknown_63_;
    char unknown_64_;
    unsigned char unknown_65_0_ : 1;
    unsigned char unknown_65_1_ : 1;
    unsigned char unknown_65_2_ : 1;
    unsigned char unknown_65_3_ : 1;
    unsigned char unknown_65_4_ : 1;
    unsigned char unknown_65_5_ : 1;
    unsigned char unknown_65_6_ : 1;
    unsigned char unknown_65_7_ : 1;
    char unknown_66_[0xc0 - 0x66];
};
struct Struct_0202bad4_2;

struct Struct_ov003_0215f698_2 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 6;
    unsigned char unknown_0_7_ : 1;
    char unknown_1_[0x30];
    unsigned char unknown_31_[6];
};

extern "C" void* func_0202ae18(void);
extern "C" int func_0202bae4(void* arg0);
extern "C" struct Struct_0202bad4* func_0202bad4(struct Struct_0202bad4_2* arg0, int arg1);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02042764(void* arg0, char* arg1, int arg2);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" void* memcpy(void* arg0, const void* arg1, int arg2);

// USA: func_ov003_0215f698
#if defined(jpn)
struct Struct_ov003_0215f698 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 6;
    unsigned char unknown_0_7_ : 1;
    char unknown_1_[0x13];
    signed char unknown_14_;
    unsigned char unknown_15_[6];
};

extern "C" ARM void func_ov003_0215f698(struct Struct_ov003_0215f698* arg0, short* arg1) {
    void* var0 = func_0202ae18();
    int var1 = func_0202bae4(var0);

    struct Struct_ov003_0215f698* var2 = arg0;
    for (short var3 = 0; var3 < 10; var3++) {
        var2->unknown_0_0_ = 0;
        var2++;
    }

    for (int var4 = 0; var4 < var1; var4++) {
        struct Struct_0202bad4* var5 = func_0202bad4((struct Struct_0202bad4_2*)var0, var4);
        int var6 = 0;
        for (short var7 = 0; var7 < *arg1; var7++) {
            var2 = &arg0[var7];
            if (var5->unknown_43_ == 0 && func_02001aec(var2->unknown_15_, var5->unknown_4_, 6) == 0 && !var5->unknown_65_3_ && !var5->unknown_65_4_) {
                var2->unknown_0_7_ = 1;
                var2->unknown_0_0_ = 1;
                memcpy(var2->unknown_1_, var5->unknown_50_, 0x14);
                memcpy(var2->unknown_15_, var5->unknown_4_, 6);
                var2->unknown_0_1_ = var2->unknown_14_;
                var6 = 1;
                break;
            }
        }
        if (!var6 && *arg1 < 10 && var5->unknown_43_ == 0 && !var5->unknown_65_3_ && !var5->unknown_65_4_ && var5->unknown_63_ > 0) {
            struct Struct_ov003_0215f698* var8 = &arg0[*arg1];
            var8->unknown_0_7_ = 1;
            var8->unknown_0_0_ = 1;
            memcpy(var8->unknown_1_, var5->unknown_50_, 0x14);
            memcpy(var8->unknown_15_, var5->unknown_4_, 6);
            var8->unknown_0_1_ = var5->unknown_63_;
            (*arg1)++;
        }
    }
}
#else
extern "C" ARM void func_ov003_0215f698(struct Struct_ov003_0215f698_2* arg0, short* arg1) {
    void* var9 = func_0202ae18();
    int var10 = func_0202bae4(var9);

    struct Struct_ov003_0215f698_2* var11 = arg0;
    for (short var12 = 0; var12 < 10; var12++) {
        var11->unknown_0_0_ = 0;
        var11++;
    }

    for (int var13 = 0; var13 < var10; var13++) {
        struct Struct_0202bad4* var14 = func_0202bad4((struct Struct_0202bad4_2*)var9, var13);
        int var15 = 0;
        for (short var16 = 0; var16 < *arg1; var16++) {
            var11 = &arg0[var16];
            if (var14->unknown_43_ == 0 && func_02001aec(var11->unknown_31_, var14->unknown_4_, 6) == 0 && !var14->unknown_65_3_ && var14->unknown_65_4_ &&
                var14->unknown_65_5_) {
                char var17[0x30];
                var11->unknown_0_7_ = 1;
                var11->unknown_0_0_ = 1;
                __clear(var17, 0x30);
                func_02042764(var14->unknown_50_, var17, 1);
                sprintf(var11->unknown_1_, var17);
                memcpy(var11->unknown_31_, var14->unknown_4_, 6);
                var11->unknown_0_1_ = var14->unknown_63_;
                var15 = 1;
                break;
            }
        }
        if (!var15 && *arg1 < 10 && var14->unknown_43_ == 0 && !var14->unknown_65_3_ && var14->unknown_65_4_ && var14->unknown_65_5_ &&
            var14->unknown_63_ > 0) {
            char var18[0x30];
            struct Struct_ov003_0215f698_2* var19 = &arg0[*arg1];
            var19->unknown_0_7_ = 1;
            var19->unknown_0_0_ = 1;
            __clear(var18, 0x30);
            func_02042764(var14->unknown_50_, var18, 1);
            sprintf(var19->unknown_1_, var18);
            memcpy(var19->unknown_31_, var14->unknown_4_, 6);
            var19->unknown_0_1_ = var14->unknown_63_;
            (*arg1)++;
        }
    }
}
#endif
