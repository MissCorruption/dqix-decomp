#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov008_0218aa24_6 {
    char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 4;
    unsigned int unknown_c_4_ : 4;
    unsigned int unknown_d_0_ : 7;
    unsigned int unknown_d_7_ : 17;
    char unknown_10_[0x2e - 0x10];
    unsigned char unknown_2e_0_ : 1;
    unsigned char unknown_2e_1_ : 7;
    char unknown_2f_[0x4e - 0x2f];
    unsigned char unknown_4e_0_ : 1;
    unsigned char unknown_4e_1_ : 4;
    unsigned char unknown_4e_5_ : 3;
    unsigned char unknown_4f_;
};

struct Struct_ov008_0218aa24_4 {
    unsigned char unknown_0_0_ : 8;
};

struct Struct_ov008_0218aa24_5 {
    char unknown_0_[0x16c];
    unsigned short unknown_16c_[(0x186 - 0x16c) / 2];
    Struct_ov008_0218aa24_4 unknown_186_[0x49c - 0x186];
    unsigned char unknown_49c_0_ : 1;
    unsigned char unknown_49c_1_ : 7;
#if defined(jpn)
    char unknown_49d_[0x8b8 - 0x49d];
#else
    char unknown1_49d_[0x950 - 0x49d];
#endif
    int unknown_950_;
};

struct Struct_ov008_0218aa24_7 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    Struct_ov008_0218aa24_5* unknown_150_;
};

struct Struct_ov008_0218aa24 {
    char unknown_0_[0x56a];
    unsigned char unknown_56a_;
};

struct Struct_ov008_0218aa24_2 {
    char unknown_0_[0x115];
    signed char unknown_115_;
    char unknown_116_[0x13d - 0x116];
    signed char unknown_13d_;
};

struct Struct_ov008_0218aa24_3 {
    char unknown_0_[0x18];
    char unknown_18_[0xb8 - 0x18];
    short unknown_b8_;
    short unknown_ba_;
    short unknown_bc_;
    short unknown_be_;
    short unknown_c0_;
    short unknown_c2_;
    short unknown_c4_;
    short unknown_c6_;
    char unknown_c8_;
    unsigned char unknown_c9_;
    char unknown_ca_[0xcd - 0xca];
    unsigned char unknown_cd_;
    char unknown_ce_[0x1f8 - 0xce];
    Struct_ov008_0218aa24_2* unknown_1f8_;
    char unknown_1fc_[0x278 - 0x1fc];
    char unknown_278_[0x2a0 - 0x278];
    char* unknown_2a0_;
#if defined(jpn)
    char unknown_2a4_[0xdf2 - 0x2a4];
    char unknown_df2_[0xe18 - 0xdf2];
#else
    char unknown1_2a4_[0xdf6 - 0x2a4];
    char unknown_df6_[0xe1c - 0xdf6];
#endif
    unsigned int unknown_e1c_0_ : 12;
    unsigned int unknown_e1d_4_ : 4;
    unsigned int unknown_e1e_0_ : 5;
    unsigned int unknown_e1e_5_ : 11;
#if defined(jpn)
    char unknown_e1c_[0xeb1 - 0xe1c];
    signed char unknown_eb1_;
    char unknown_eb2_[0xeb4 - 0xeb2];
#else
    char unknown_e20_[0xeb9 - 0xe20];
    signed char unknown_eb9_;
    char unknown_eba_[0xebc - 0xeba];
#endif
    Struct_ov008_0218aa24_6* unknown_ebc_;
};

struct Struct_02072a68_2;
struct Struct_0205de24_2;
struct Struct_0205d81c;

extern char data_ov008_0218b590[];

extern "C" void* func_020421a0();
extern "C" void __clear(void* arg0, unsigned int arg1);
extern "C" void func_02046380(void* arg0);
struct Struct_02046574_2;
extern "C" void func_02046574(Struct_02046574_2*, int, char*);
struct Struct_020465c0;
extern "C" void func_020465c0(Struct_020465c0*, int, int);
extern "C" char* func_02072a68(Struct_02072a68_2*, int);
extern "C" void func_02046608(void* arg0, int arg1, char* arg2, char* arg3, int arg4, int arg5, int arg6);
extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" void func_0205de24(Struct_0205de24_2*, unsigned char, unsigned char);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" Struct_ov008_0218aa24* func_02053c6c(unsigned char*);
extern "C" void func_ov008_0218b240(Struct_ov008_0218aa24_3* arg0);
extern "C" void func_02042764(const void* arg0, char* arg1, int arg2);
extern "C" void* func_0205d81c(Struct_0205d81c*, int);
extern "C" int func_02041a90(char* arg0, int arg1, int arg2);
extern "C" void func_02042058(char* arg0, const char* arg1);
extern "C" void func_02041cf4(char* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_02041e70(char* arg0, int arg1);
extern "C" void func_020465d8(unsigned char*, int, unsigned char);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" void func_020474a8(void* arg0, int arg1, const char* arg2, char* arg3);
extern "C" int func_ov008_0218bb28(Struct_ov008_0218aa24_3* arg0, const char* arg1);
extern "C" unsigned int strlen(const char* arg0);
extern "C" int func_02041a28(char* arg0, int arg1);

// USA: func_ov008_0218aa24
extern "C" ARM void func_ov008_0218aa24(Struct_ov008_0218aa24_3* arg0) {
    char var0[0x80];

    void* var1 = func_020421a0();
    GameState* var2 = GameState::GetInstance();
    func_0205de24((Struct_0205de24_2*)arg0->unknown_18_, 0, 2);
    arg0->unknown_c9_ = 0;
    arg0->unknown_bc_ = 0x15;
    arg0->unknown_be_ = 0;
    arg0->unknown_c0_ = 8;
    arg0->unknown_c2_ = 3;
    arg0->unknown_b8_ = 11;
    arg0->unknown_ba_ = 7;
    arg0->unknown_c4_ = 10;
    arg0->unknown_c6_ = 12;
    arg0->unknown_cd_ = 1;
    memset(arg0->unknown_2a0_, 0, 0x800);

    int var3;
    int var4;
    unsigned char var5;
    unsigned char var6;
    const char* var7;
    if (arg0->unknown_ebc_ == 0) {
        int var8 = 0;
        Struct_ov008_0218aa24_7* var9 = (Struct_ov008_0218aa24_7*)var2->GetPartyMemberByIndex(arg0->unknown_eb1_);
        Struct_ov008_0218aa24* var10 = 0;
        if (var9 == 0) {
            var8 = 1;
        } else {
            var10 = func_02053c6c((unsigned char*)var9);
            if (var10 == 0) var8 = 1;
        }
        if (var8) {
            func_ov008_0218b240(arg0);
            return;
        }
        Struct_ov008_0218aa24_5* var11 = var9->unknown_150_;
        var3 = var11->unknown_950_;
        var5 = var11->unknown_186_[var3].unknown_0_0_;
        var4 = var11->unknown_16c_[var3];
        var7 = arg0->unknown_df2_;
        var6 = var10->unknown_56a_;
    } else {
        Struct_ov008_0218aa24_6* var12 = arg0->unknown_ebc_;
        var3 = var12->unknown_c_0_;
        var4 = var12->unknown_d_0_;
        var5 = var12->unknown_4e_1_;
        var6 = var12->unknown_4f_;
        var7 = (const char*)var12;
    }
    func_0205d81c((Struct_0205d81c*)arg0->unknown_18_, 0);
    func_02041a90(arg0->unknown_2a0_, func_ov008_0218bb28(arg0, var7), 3);
    func_02042058(arg0->unknown_2a0_, var7);
    func_02041cf4(arg0->unknown_2a0_, 0x7fff, 2, 0x56, 0xf);

    char* var13 = func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, (short)var3);
    int var14 = func_ov008_0218bb28(arg0, var13);
    if (var5 != 0) var14 -= 5;
    func_02041a90(arg0->unknown_2a0_, var14, 0x12);
    func_02042058(arg0->unknown_2a0_, var13);
    if (var5 != 0) {
        if (var5 >= 10) {
            var5 = 10;
            func_02041e70(arg0->unknown_2a0_, 0xd);
        } else {
            func_02041e70(arg0->unknown_2a0_, 5);
        }
        int var15 = var14 + strlen(var13) / 2 * 10;
        var13 = func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, (short)(var5 + 0x12c));
        func_02041a90(arg0->unknown_2a0_, var15, 0x11);
        func_02042058(arg0->unknown_2a0_, var13);
        func_02041e70(arg0->unknown_2a0_, 0xf);
    }

    func_02046380(var1);
    func_020465c0((Struct_020465c0*)var1, 0, var4);
    func_020465d8((unsigned char*)var1, 0, 0);
    func_020465f0((unsigned char*)var1, 0, 3);
    func_020474a8(var1, 10, func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, 0x1f6), var0);
    func_02041a90(arg0->unknown_2a0_, 0x1f, 0x1b);
    func_02042058(arg0->unknown_2a0_, var0);
    func_02041cf4(arg0->unknown_2a0_, 0x7fff, 2, 0x56, 0x28);
    memset(var0, 0, 0x80);
    func_020465c0((Struct_020465c0*)var1, 1, arg0->unknown_e1d_4_);
    func_020465d8((unsigned char*)var1, 1, 1);
    func_020465f0((unsigned char*)var1, 1, 2);
    func_020465c0((Struct_020465c0*)var1, 2, arg0->unknown_e1e_0_);
    func_020465d8((unsigned char*)var1, 2, 1);
    func_020465f0((unsigned char*)var1, 2, 2);
    func_020474a8(var1, 10, func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, 0x1f8), var0);
    func_02041a28(arg0->unknown_2a0_, 12);
    func_02042058(arg0->unknown_2a0_, var0);
    func_0205d304(arg0->unknown_18_, arg0->unknown_2a0_, 0, 0, 0, 1, 0);
    arg0->unknown_1f8_->unknown_115_ = (signed char)var6;
    arg0->unknown_1f8_->unknown_13d_ = (signed char)var6;
}
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);

// USA: func_ov008_0218aa24
extern "C" ARM void func_ov008_0218aa24(Struct_ov008_0218aa24_3* arg0) {
    char var16[0x80];
    char var17[0x40];
    char var18[0x30];

    void* var19 = func_020421a0();
    GameState* var20 = GameState::GetInstance();
    __clear(var17, 0x40);
    func_02046380(var19);
    func_02046574((Struct_02046574_2*)var19, 0, data_ov008_0218b590);
    func_020465c0((Struct_020465c0*)var19, 2, 0x21);
    func_02046608(var19, 10, func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, 0x1f8), var17, 0x100, 0, 0);
    int var21 = (func_020420e8(var17, 0) + 0x17) & ~7;
    if (var21 < 0x58) var21 = 0x58;
    func_0205de24((Struct_0205de24_2*)arg0->unknown_18_, 0, 2);
    arg0->unknown_c9_ = 0;
    arg0->unknown_bc_ = 0x20 - (var21 >> 3);
    arg0->unknown_be_ = 0;
    arg0->unknown_c0_ = 8;
    arg0->unknown_c2_ = 3;
    arg0->unknown_b8_ = var21 >> 3;
    arg0->unknown_ba_ = 7;
    arg0->unknown_c4_ = 10;
    arg0->unknown_c6_ = 12;
    arg0->unknown_cd_ = 1;
    memset(arg0->unknown_2a0_, 0, 0x960);
    __clear(var18, 0x30);

    int var22;
    unsigned char var23;
    int var24;
    unsigned char var25;
    int var26;
    const void* var27;
    if (arg0->unknown_ebc_ == 0) {
        int var28 = 0;
        Struct_ov008_0218aa24_7* var29 = (Struct_ov008_0218aa24_7*)var20->GetPartyMemberByIndex(arg0->unknown_eb9_);
        Struct_ov008_0218aa24* var30 = 0;
        if (var29 == 0) {
            var28 = 1;
        } else {
            var30 = func_02053c6c((unsigned char*)var29);
            if (var30 == 0) var28 = 1;
        }
        if (var28) {
            func_ov008_0218b240(arg0);
            return;
        }
        Struct_ov008_0218aa24_5* var31 = var29->unknown_150_;
        var22 = var31->unknown_950_;
        var25 = var31->unknown_186_[var22].unknown_0_0_;
        var26 = var31->unknown_16c_[var22];
        var27 = arg0->unknown_df6_;
        var24 = var31->unknown_49c_0_;
        var23 = var30->unknown_56a_;
    } else {
        Struct_ov008_0218aa24_6* var32 = arg0->unknown_ebc_;
        var22 = var32->unknown_c_0_;
        var26 = var32->unknown_d_0_;
        var24 = var32->unknown_2e_0_;
        var25 = var32->unknown_4e_1_;
        var23 = var32->unknown_4f_;
        var27 = var32;
    }
    func_02042764(var27, var18, 1);
    func_0205d81c((Struct_0205d81c*)arg0->unknown_18_, 0);
    func_02041a90(arg0->unknown_2a0_, (var21 - func_020420e8(var18, 0)) / 2, 3);
    func_02042058(arg0->unknown_2a0_, var18);
    func_02041cf4(arg0->unknown_2a0_, 0x7fff, 2, var21 - 2, 0xf);

    char* var33;
    if (var24) {
        var33 = func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, (short)(var22 + 0x46));
    } else {
        var33 = func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, (short)var22);
    }
    int var34 = (var21 - func_020420e8(var33, 0)) / 2;
    if (var25 != 0) var34 -= 5;
    func_02041a90(arg0->unknown_2a0_, var34, 0x12);
    func_02042058(arg0->unknown_2a0_, var33);
    if (var25 != 0) {
        if (var25 >= 10) {
            var25 = 10;
            func_02041e70(arg0->unknown_2a0_, 0xd);
        } else {
            func_02041e70(arg0->unknown_2a0_, 5);
        }
        int var35 = var34 + func_020420e8(var33, 0);
        var33 = func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, (short)(var25 + 0x12c));
        func_02041a90(arg0->unknown_2a0_, var35 + 2, 0x12);
        func_02042058(arg0->unknown_2a0_, var33);
        func_02041e70(arg0->unknown_2a0_, 0xf);
    }

    func_02046380(var19);
    func_020465c0((Struct_020465c0*)var19, 0, var26);
    func_020465d8((unsigned char*)var19, 0, 0);
    func_020465f0((unsigned char*)var19, 0, 3);
    func_02046608(var19, 10, func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, 0x1f6), var16, 0x100, 0, 0);
    func_02041a90(arg0->unknown_2a0_, (var21 >> 1) - 13, 0x1e);
    func_02042058(arg0->unknown_2a0_, var16);
    func_02041cf4(arg0->unknown_2a0_, 0x7fff, 2, var21 - 2, 0x28);
    memset(var16, 0, 0x80);
    func_02046574((Struct_02046574_2*)var19, 0, func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, (short)(arg0->unknown_e1d_4_ + 0x1f9)));
    func_020465c0((Struct_020465c0*)var19, 2, arg0->unknown_e1e_0_);
    func_02046608(var19, 10, func_02072a68((Struct_02072a68_2*)arg0->unknown_278_, 0x1f8), var16, 0x100, 0, 0);
    func_02041a90(arg0->unknown_2a0_, 12, 0x2a);
    func_02042058(arg0->unknown_2a0_, var16);
    func_0205d304(arg0->unknown_18_, arg0->unknown_2a0_, 0, 0, 0, 1, 0, 0);
    arg0->unknown_1f8_->unknown_115_ = (signed char)var23;
    arg0->unknown_1f8_->unknown_13d_ = (signed char)var23;
}
#endif
