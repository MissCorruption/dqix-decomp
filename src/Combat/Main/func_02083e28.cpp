#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02083e28_10 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int : 2;
};

struct Struct_02083e28_4 {
    int unknown_0_0_ : 10;
    int unknown_1_2_ : 10;
    int unknown_2_4_ : 10;
    int : 2;
};

struct Struct_02083e28_7 {
    int unknown_0_0_ : 10;
    int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int : 2;
};

struct Struct_02083e28_8 {
    int unknown_0_0_ : 8;
    int unknown_1_0_ : 8;
    int unknown_2_0_ : 8;
    int unknown_3_0_ : 8;
};

struct Struct_02083e28_9 {
    int unknown_0_;
    int unknown_4_;
    struct Struct_02083e28_7 unknown_8_;
    struct Struct_02083e28_10 unknown_c_;
    struct Struct_02083e28_4 unknown_10_;
    struct Struct_02083e28_4 unknown_14_;
    struct Struct_02083e28_4 unknown_18_;
    struct Struct_02083e28_4 unknown_1c_;
};

struct Struct_0208358c_2 {
    struct Struct_02083e28_9* unknown_0_;
    char* unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 5;
    unsigned int : 23;
    char unknown_c_[0xc];
    short unknown_18_;
    char unknown_1a_[6];
};

struct Struct_02083e28_11 {
    char unknown_0_[0x14];
    struct Struct_02083e28_8 unknown_14_[5];
    short unknown_28_;
    char unknown_2a_[2];
};

struct Struct_02083e28 {
    unsigned char unknown_0_[0x18];
};

struct Struct_02083e28_2 {
    struct Struct_02083e28_10 unknown_0_[3];
};

struct Struct_02083e28_3 {
    struct Struct_02083e28_10 unknown_0_[3];
    struct Struct_02083e28_10 unknown_c_[3];
    char unknown_18_[4];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    char unknown_20_;
    unsigned char unknown_21_[0x18];
    char unknown_39_[0x33];
    unsigned short unknown_6c_;
    unsigned short unknown_6e_;
    unsigned short unknown_70_;
    unsigned short unknown_72_;
    unsigned short unknown_74_;
    char unknown_76_[2];
    struct Struct_02083e28_10 unknown_78_;
    unsigned char unknown_7c_[0x18];
    char unknown_94_[0x100];
    struct Struct_0208358c_2 unknown_194_[11];
    struct Struct_02083e28_11 unknown_2f4_[8];
#if defined(jpn)
    char unknown_454_[0x7b8 - 0x454];
#else
    char unknown1_454_[0x850 - 0x454];
#endif
    struct Struct_02083e28_2 unknown_850_[17];
    struct Struct_02083e28_10 unknown_91c_[3];
    char unknown_928_[0xc];
    unsigned char unknown_934_[0x16];
    char unknown_94a_[6];
    int unknown_950_;
};

struct Struct_02083e28_5 {
    struct Struct_0208358c_2* unknown_0_;
    short* unknown_4_;
    short* unknown_8_;
    float* unknown_c_;
    float* unknown_10_;
    float* unknown_14_;
    float* unknown_18_;
    short* unknown_1c_;
    short* unknown_20_;
    short* unknown_24_;
    short* unknown_28_;
    short* unknown_2c_;
    short* unknown_30_;
    unsigned char unknown_34_;
};

extern "C" int func_02085fb4(unsigned char*);
extern "C" int func_02086020(unsigned char*);
extern "C" int func_0208608c(unsigned char*);
extern "C" int func_020860f8(unsigned char*);
extern "C" int func_02086164(unsigned char*);
extern "C" int func_020861d0(unsigned char*);
extern "C" int func_0208623c(unsigned char*);
extern "C" int func_020862a8(unsigned char*);
extern "C" int func_02086314(unsigned char*);
extern "C" int func_02085cd0(unsigned char*, int);
extern "C" int func_02085f1c(unsigned char*, int);
extern "C" int func_02085b88(unsigned char*);
struct Struct_02083e28_6;
extern "C" void func_020863e0(Struct_02083e28_6*);
extern "C" void func_020836e4(struct Struct_0208358c_2*, struct Struct_0208358c_2*);

static inline void inline_02083e28(unsigned char* arg0, struct Struct_02083e28 arg1) {
    memcpy(arg0, &arg1, sizeof(arg1));
}

static inline void inline_02083e28_2(struct Struct_02083e28_3* arg0, unsigned short arg1) {
    arg0->unknown_78_.unknown_0_0_ = arg1;
}

static inline void inline_02083e28_3(struct Struct_02083e28_3* arg0, unsigned short arg1) {
    arg0->unknown_78_.unknown_1_2_ = arg1;
}

static inline void inline_02083e28_4(struct Struct_02083e28_3* arg0, unsigned short arg1) {
    arg0->unknown_78_.unknown_2_4_ = arg1;
}

// USA: func_02083e28
extern "C" ARM void func_02083e28(struct Struct_02083e28_3* arg0, struct Struct_02083e28_5* arg1) {
    int var0 = func_02085fb4((unsigned char*)arg0) + arg0->unknown_91c_[0].unknown_0_0_;
    int var1 = func_02086020((unsigned char*)arg0) + arg0->unknown_91c_[0].unknown_1_2_;
    int var2 = func_0208608c((unsigned char*)arg0) + arg0->unknown_91c_[0].unknown_2_4_;
    int var3 = func_020860f8((unsigned char*)arg0) + arg0->unknown_91c_[1].unknown_0_0_;
    int var4 = func_02086164((unsigned char*)arg0) + arg0->unknown_91c_[1].unknown_1_2_;
    int var5 = func_020861d0((unsigned char*)arg0) + arg0->unknown_91c_[1].unknown_2_4_;
    int var6 = func_0208623c((unsigned char*)arg0) + arg0->unknown_91c_[2].unknown_0_0_;
    int var7 = func_020862a8((unsigned char*)arg0) + arg0->unknown_91c_[2].unknown_1_2_;
    int var8 = func_02086314((unsigned char*)arg0) + arg0->unknown_91c_[2].unknown_2_4_;
    float var9;
    float var10;
    float var11;
    float var12;
    var12 = var11 = var10 = var9 = 0.0f;
    struct Struct_02083e28_2* var13 = &arg0->unknown_850_[arg0->unknown_950_];
    var0 += var13->unknown_0_[0].unknown_0_0_;
    var1 += var13->unknown_0_[0].unknown_1_2_;
    var2 += var13->unknown_0_[0].unknown_2_4_;
    var3 += var13->unknown_0_[1].unknown_0_0_;
    var4 += var13->unknown_0_[1].unknown_1_2_;
    var5 += var13->unknown_0_[1].unknown_2_4_;
    var6 += var13->unknown_0_[2].unknown_0_0_;
    var7 += var13->unknown_0_[2].unknown_1_2_;
    var8 += var13->unknown_0_[2].unknown_2_4_;
    if (var0 > 999) var0 = 999;
    if (var2 > 999) var2 = 999;
    if (var4 > 999) var4 = 999;
    if (var0 < 0) var0 = 0;
    if (var2 < 0) var2 = 0;
    if (var4 < 0) var4 = 0;

    int var14[6] = {0};
    for (int var15 = 0; var15 < 6; var15++) {
        var14[var15] = var4;
    }
    struct Struct_0208358c_2* var16[11];
    for (int var17 = 0; var17 < 11; var17++) {
        var16[var17] = &arg0->unknown_194_[var17];
    }
    struct Struct_0208358c_2* var18;
    if (arg1 != NULL && (var18 = arg1->unknown_0_) != NULL) {
        switch (var18->unknown_8_0_) {
        case 0: var16[8] = var18; break;
        case 1: var16[9] = var18; break;
        case 4: var16[7] = var18; break;
        case 2: var16[0] = var18; break;
        case 5: var16[5] = var18; break;
        case 3: var16[1] = var18; break;
        case 6: var16[6] = var18; break;
        case 7: var16[10] = var18; break;
        }
    }
    for (int var19 = 0; var19 < 11; var19++) {
        struct Struct_0208358c_2* var20 = var16[var19];
        struct Struct_02083e28_9* var21;
        if (var20 != NULL && var20->unknown_18_ > 0 && (var21 = var20->unknown_0_) != NULL) {
            var1 += var21->unknown_10_.unknown_1_2_;
            var3 += var21->unknown_10_.unknown_0_0_;
            var6 += var21->unknown_10_.unknown_2_4_;
            var5 += var21->unknown_14_.unknown_0_0_;
            var7 += var21->unknown_14_.unknown_1_2_;
            var8 += var21->unknown_14_.unknown_2_4_;
            var9 += var21->unknown_8_.unknown_2_4_ / 10.0f;
            var10 += var21->unknown_c_.unknown_0_0_ / 10.0f;
            var11 += var21->unknown_c_.unknown_1_2_ / 10.0f;
            var12 += var21->unknown_c_.unknown_2_4_ / 10.0f;
            var14[0] += var21->unknown_18_.unknown_1_2_;
            var14[1] += var21->unknown_18_.unknown_2_4_;
            var14[2] += var21->unknown_1c_.unknown_0_0_;
            var14[3] += var21->unknown_1c_.unknown_1_2_;
            var14[4] += var21->unknown_1c_.unknown_2_4_;
            var14[5] += var21->unknown_18_.unknown_0_0_;
        }
    }
    if (var1 > 999) var1 = 999;
    if (var3 > 999) var3 = 999;
    if (var5 > 999) var5 = 999;
    if (var6 > 999) var6 = 999;
    if (var7 > 999) var7 = 999;
    if (var8 > 999) var8 = 999;
    if (var1 < 0) var1 = 0;
    if (var3 < 0) var3 = 0;
    if (var5 < 0) var5 = 0;
    if (var6 < 0) var6 = 0;
    if (var7 < 1) var7 = 1;
    if (var8 < 0) var8 = 0;
    int var22 = 0;
    for (int var23 = 0; var23 < 6; var23++) {
        if (var14[var23] > 999) {
            var14[var23] = 999;
        } else if (var14[var23] < 0) {
            var14[var23] = 0;
        }
        if (var22 < var14[var23]) var22 = var14[var23];
    }

    if (arg1 == NULL) {
        arg0->unknown_0_[0].unknown_0_0_ = var0;
        arg0->unknown_0_[0].unknown_1_2_ = var1;
        arg0->unknown_0_[0].unknown_2_4_ = var2;
        arg0->unknown_0_[1].unknown_0_0_ = var3;
        arg0->unknown_0_[1].unknown_1_2_ = var4;
        arg0->unknown_0_[1].unknown_2_4_ = var5;
        arg0->unknown_0_[2].unknown_0_0_ = var6;
        arg0->unknown_0_[2].unknown_1_2_ = var7;
        arg0->unknown_0_[2].unknown_2_4_ = var8;
        arg0->unknown_c_[0].unknown_0_0_ = var22;
        arg0->unknown_c_[0].unknown_1_2_ = var14[0];
        arg0->unknown_c_[0].unknown_2_4_ = var14[1];
        arg0->unknown_c_[1].unknown_0_0_ = var14[2];
        arg0->unknown_c_[1].unknown_1_2_ = var14[3];
        arg0->unknown_c_[1].unknown_2_4_ = var14[4];
        arg0->unknown_c_[2].unknown_0_0_ = var14[5];

        int var24 = arg0->unknown_0_[0].unknown_0_0_;
        int var25 = arg0->unknown_0_[0].unknown_2_4_;
        int var26 = arg0->unknown_0_[0].unknown_1_2_;
        int var27 = arg0->unknown_0_[1].unknown_1_2_;
        int var28 = arg0->unknown_0_[1].unknown_2_4_;
        int var29 = arg0->unknown_0_[2].unknown_0_0_;
        int var30 = arg0->unknown_0_[2].unknown_1_2_;
        int var31 = arg0->unknown_0_[2].unknown_2_4_;
        for (int var32 = 0; var32 < 11; var32++) {
            struct Struct_0208358c_2* var33 = &arg0->unknown_194_[var32];
            if (var33 != NULL && var33->unknown_18_ > 0 && var33->unknown_0_ != NULL) {
                var24 += var33->unknown_0_->unknown_8_.unknown_0_0_;
                var25 += var33->unknown_0_->unknown_8_.unknown_1_2_;
            }
        }
        var24 += func_02085cd0((unsigned char*)arg0, -1);
        int var34 = func_02085f1c((unsigned char*)arg0, -1) + var31;
        if (var24 > 999) var24 = 999;
        if (var25 > 999) var25 = 999;
        if (var34 > 999) var34 = 999;
        if (var24 < 0) var24 = 0;
        if (var25 < 0) var25 = 0;
        if (var34 < 0) var34 = 0;
        arg0->unknown_70_ = var24;
        arg0->unknown_72_ = var25;
        arg0->unknown_74_ = var26;
        inline_02083e28_2(arg0, var27);
        inline_02083e28_4(arg0, var28);
        inline_02083e28_3(arg0, var29);
        arg0->unknown_6c_ = var30;
        arg0->unknown_6e_ = var34;
        func_020863e0((Struct_02083e28_6*)arg0);

        short var35[0x16] = {0};
        for (int var36 = 0; var36 < 0x16; var36++) {
            var35[var36] = arg0->unknown_934_[var36];
        }
        for (int var37 = 0; var37 < 8; var37++) {
            struct Struct_02083e28_11* var38 = &arg0->unknown_2f4_[var37];
            if (var38->unknown_28_ > 0) {
                var35[0] += var38->unknown_14_[0].unknown_0_0_;
                var35[1] += var38->unknown_14_[0].unknown_1_0_;
                var35[2] += var38->unknown_14_[0].unknown_2_0_;
                var35[3] += var38->unknown_14_[0].unknown_3_0_;
                var35[4] += var38->unknown_14_[1].unknown_0_0_;
                var35[5] += var38->unknown_14_[1].unknown_1_0_;
                var35[6] += var38->unknown_14_[1].unknown_2_0_;
                var35[8] += var38->unknown_14_[1].unknown_3_0_;
                var35[9] += var38->unknown_14_[2].unknown_0_0_;
                var35[10] += var38->unknown_14_[2].unknown_1_0_;
                var35[11] += var38->unknown_14_[2].unknown_2_0_;
                var35[12] += var38->unknown_14_[2].unknown_3_0_;
                var35[13] += var38->unknown_14_[3].unknown_0_0_;
                var35[14] += var38->unknown_14_[3].unknown_1_0_;
                var35[15] += var38->unknown_14_[3].unknown_2_0_;
                var35[16] += var38->unknown_14_[3].unknown_3_0_;
                var35[17] += var38->unknown_14_[4].unknown_0_0_;
                var35[18] += var38->unknown_14_[4].unknown_1_0_;
                var35[19] += var38->unknown_14_[4].unknown_2_0_;
                var35[20] += var38->unknown_14_[4].unknown_3_0_;
            }
        }
        struct Struct_02083e28 var39;
        memset(&var39, 100, 0x16);
        for (int var40 = 0; var40 < 0x16; var40++) {
            if (var35[var40] < 0) var35[var40] = 0;
            var39.unknown_0_[var40] = var35[var40];
        }
        inline_02083e28(arg0->unknown_7c_, var39);
        inline_02083e28(arg0->unknown_21_, var39);
    } else {
        *arg1->unknown_c_ = var9;
        *arg1->unknown_14_ = var11;
        *arg1->unknown_18_ = var12;
        *arg1->unknown_1c_ = var3;
        *arg1->unknown_20_ = var1;
        *arg1->unknown_24_ = var6;
        *arg1->unknown_28_ = var5;
        *arg1->unknown_2c_ = var7;
        int var41 = var0;
        int var42 = var2;
        for (int var43 = 0; var43 < 11; var43++) {
            struct Struct_0208358c_2* var44 = var16[var43];
            if (var44 != NULL && var44->unknown_18_ > 0 && var44->unknown_0_ != NULL) {
                var41 += var44->unknown_0_->unknown_8_.unknown_0_0_;
                var42 += var44->unknown_0_->unknown_8_.unknown_1_2_;
            }
        }
        unsigned char var45 = 0x21;
        if (var16[8]->unknown_18_ > 0) var45 = var16[8]->unknown_8_4_;
        signed char var46 = var45;
        var41 += func_02085cd0((unsigned char*)arg0, var46);
        if (arg1->unknown_34_ == 0) {
            var8 += func_02085f1c((unsigned char*)arg0, var46);
        }
        struct Struct_0208358c_2* var47;
        if (arg1->unknown_34_ != 0 && (var47 = var16[9]) != NULL && var47->unknown_18_ > 0) {
            struct Struct_0208358c_2 var48 = arg0->unknown_194_[9];
            func_020836e4(&arg0->unknown_194_[9], var47);
            var10 += func_02085b88((unsigned char*)arg0);
            func_020836e4(&arg0->unknown_194_[9], &var48);
        }
        if (var41 > 999) var41 = 999;
        if (var42 > 999) var42 = 999;
        if (var8 > 999) var8 = 999;
        if (var41 < 0) var41 = 0;
        *arg1->unknown_4_ = var41;
        if (var42 < 0) var42 = 0;
        *arg1->unknown_8_ = var42;
        if (var8 < 0) var8 = 0;
        *arg1->unknown_30_ = var8;
        *arg1->unknown_10_ = var10;
    }
}
