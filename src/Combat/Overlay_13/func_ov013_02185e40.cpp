#include <globaldefs.h>

#if defined(jpn)
#define func_ov013_02185e40 func_ov013_02186f4c
#endif
#include "GameState/GameState.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
#if defined(jpn)
extern "C" void func_02046380(void*);
extern "C" unsigned int strlen(const char*);
extern "C" int func_02042638(char*, const char*, int);
extern char data_ov013_02188d4c[];
#else
extern "C" void func_02046380(void);
#endif

struct Struct_ov013_021846a0_2 {
    char unknown_0_[0x1e];
    short unknown_1e_;
#if defined(jpn)
    char unknown_20_[0x5ac - 0x20];
#else
    char unknown1_20_[0x620 - 0x20];
#endif
    char unknown_620_[0x18];
#if defined(jpn)
    char unknown_5c4_[0x62c - 0x5c4];
#else
    char unknown_638_[0x6a4 - 0x638];
#endif
    const char* unknown_6a4_;
    unsigned char unknown_6a8_;
    unsigned char unknown_6a9_[5];
    char unknown_6ae_[2];
    int unknown_6b0_;
    unsigned char unknown_6b4_;
    char unknown_6b5_[3];
    int unknown_6b8_;
    unsigned char unknown_6bc_;
    unsigned char unknown_6bd_;
    unsigned short unknown_6be_;
    unsigned short unknown_6c0_;
    unsigned short unknown_6c2_;
    unsigned short unknown_6c4_;
    unsigned short unknown_6c6_;
    unsigned short unknown_6c8_;
    unsigned short unknown_6ca_;
};

struct Struct_0201099c_3;
extern "C" ARM int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" ARM int func_02041a5c(char* arg0, int arg1);
extern "C" ARM int func_02041a28(char* arg0, int arg1);
extern "C" ARM int func_02041acc(char* arg0, int arg1);
extern "C" ARM int func_02041e70(char* arg0, int arg1);
extern "C" ARM int func_02042058(char* arg0, const char* arg1);
extern "C" ARM int func_020e51cc(int arg0);
extern "C" ARM int func_02041fac(char* arg0, int arg1, int arg2);
extern "C" void* func_020421a0(void);

struct Struct_020465c0;
extern "C" ARM void func_020465d8(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" ARM void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" ARM void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);

extern char data_ov013_02187e3c;
extern char data_ov013_02187e3f;
extern char data_ov013_02187e44;
extern char data_ov013_02187e45;
extern short data_ov013_02187dac[];

// USA: func_ov013_02185e40
extern "C" ARM void func_ov013_02185e40(Struct_ov013_021846a0_2* arg0, char* arg1) {
    if (arg1 == 0) return;

    GameState::GetInstance();

    short var0 = 0x190;
    short var1 = 0x1f4;
#if defined(jpn)
    int var2 = strlen(arg0->unknown_6a4_) + 6;
    int var3;
    int var4;
    int var5;
    int var6 = arg0->unknown_6b8_;
    var3 = 0;
    var4 = 2;
    if (arg0->unknown_6b4_ != 0) {
        var4 = 0;
        var2++;
        var3 = 1;
    }
    var5 = 5;
    if (var6 == 0xa) var5 = 0xd;
    int var7 = 0x31 - (int)(((float)var2 / 4.0f) * 10.0f);
    int var8 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, (short)(var6 + 0x12c));
    int var9 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, (short)(arg0->unknown_6a8_ + 0xc8));
    sprintf(arg1, data_ov013_02188d4c, var7, arg0->unknown_6a4_, var9, var3, var5, var8, var4, arg0->unknown_6b0_);
#else
    char var10[0x200];
    __clear(var10, 0x200);

    int var11 = func_020420e8((void*)arg0->unknown_6a4_, 0);
    if (arg0->unknown_6b8_ != 0) {
        int var12 = (short)(arg0->unknown_6b8_ + 0x12c);
        int var13 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, var12);
        int var14 = 5;
        if (arg0->unknown_6b8_ == 0xa) var14 = 0xd;

        func_02041a5c(var10, 4);
        func_02042058(var10, arg0->unknown_6a4_);
        func_02041acc(var10, 0x10);
        func_02041e70(var10, var14);
        func_02042058(var10, (const char*)var13);
        func_02041acc(var10, 4);
        func_02041e70(var10, 0xf);
        int var15 = func_020e51cc(0x3f3);
        func_02042058(var10, (const char*)var15);

        char var16[0x10];
        __clear(var16, 0x10);
        sprintf(var16, &data_ov013_02187e3c, arg0->unknown_6b0_);
        func_02042058(var10, var16);
    } else {
        func_02041a5c(var10, 4);
        func_02042058(var10, arg0->unknown_6a4_);
        func_02041acc(var10, 0x12);
        int var17 = func_020e51cc(0x3f3);
        func_02042058(var10, (const char*)var17);

        char var18[0x10];
        __clear(var18, 0x10);
        sprintf(var18, &data_ov013_02187e3c, arg0->unknown_6b0_);
        func_02042058(var10, var18);
    }

    char var19[0x100];
    __clear(var19, 0x100);
    int var20 = func_020e51cc(0x3f3);
    sprintf(var19, &data_ov013_02187e3f, var20, arg0->unknown_6b0_);
    int var21 = func_020420e8(var19, 0);

    int var22 = var11 + 0x12 + var21;
    if (arg0->unknown_6b8_ != 0) var22 += 9;
    var22 = 0x78 - var22;

    arg0->unknown_1e_ = (short)(var11 + (var22 >> 1) + 1);
    func_02041a28(arg1, var22 >> 1);

    func_02042058(arg1, var10);
#endif
#if defined(jpn)
    func_02042638(arg1, &data_ov013_02187e44, 0x10);
#else
    func_02041fac(arg1, (int)&data_ov013_02187e44, 0x10);
#endif

    void* var23 = func_020421a0();
#if defined(jpn)
    func_02046380(var23);
#else
    func_02046380();
#endif

    int var24[7] = {
        arg0->unknown_6be_, arg0->unknown_6c0_, arg0->unknown_6c2_, arg0->unknown_6c4_,
        arg0->unknown_6c6_, arg0->unknown_6c8_, arg0->unknown_6ca_
    };

    for (int var25 = 0; var25 < 7; var25++) {
        func_020465d8((unsigned char*)var23, var25, 1);
        func_020465f0((unsigned char*)var23, var25, 3);
        func_020465c0((struct Struct_020465c0*)var23, var25, var24[var25]);
    }

    for (int var26 = 0; var26 < 5; var26++) {
        int var27 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, var0++);
        func_02042058(arg1, (const char*)var27);

        short var28 = data_ov013_02187dac[var26];
        func_02041a28(arg1, var28);

        int var29 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, var1++);
        func_02042058(arg1, (const char*)var29);

        if (var26 != 4) {
            func_02042058(arg1, &data_ov013_02187e45);
        }
    }
}
