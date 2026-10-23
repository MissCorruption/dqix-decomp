#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov023_021d94e4_4
{
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
};

struct Struct_ov023_021d94e4
{
    int unknown_0_;
    unsigned short unknown_4_0_ : 7;
    unsigned short unknown_4_7_ : 9;
    short unknown_6_;
    Struct_ov023_021d94e4_4 unknown_8_[3];
};

struct Struct_ov023_021d94e4_2
{
#if defined(jpn)
    char unknown_0_[0x7b8];
#else
    char unknown1_0_[0x850];
#endif

    Struct_ov023_021d94e4_4 unknown_850_[13][3];
};

struct Struct_ov023_021d94e4_3
{
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
#if defined(jpn)
    char unknown_8_[0xc];
#else
    char unknown1_8_[0x30];
#endif

    Struct_ov023_021d94e4_2 unknown_38_;
};

struct Struct_0201099c_3;

struct Struct_ov023_021d94e4_5
{
    struct Struct_0201099c_3* unknown_0_;
    char unknown_4_[0xec - 4];
    int unknown_ec_;
    Struct_ov023_021d94e4 unknown_f0_;
    Struct_ov023_021d94e4 unknown_104_;
    unsigned char unknown_118_;
    unsigned char unknown_119_;
    unsigned char unknown_11a_;
    unsigned char unknown_11b_;
    unsigned char unknown_11c_;
    signed char unknown_11d_;
    unsigned char unknown_11e_;
    Struct_ov023_021d94e4_3* unknown_120_;
};

struct Struct_02046574_2;
struct Struct_020465c0;

extern "C" void* func_020421a0();
extern "C" Struct_ov023_021d94e4_3* func_ov023_021d994c(void* arg0, int arg1);
extern "C" int func_02085fb4(unsigned char* arg0);
extern "C" int func_02086020(unsigned char* arg0);
extern "C" int func_0208608c(unsigned char* arg0);
extern "C" int func_020860f8(unsigned char* arg0);
extern "C" int func_02086164(unsigned char* arg0);
extern "C" int func_020861d0(unsigned char* arg0);
extern "C" int func_0208623c(unsigned char* arg0);
extern "C" int func_020862a8(unsigned char* arg0);
extern "C" int func_02086314(unsigned char* arg0);
extern "C" const char* func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" void func_02041a90(char* arg0, int arg1, int arg2);
extern "C" void func_02041fac(char* arg0, int arg1, int arg2);
extern "C" void __clear(void* arg0, unsigned long arg1);
extern "C" void func_02046380(void* arg0);
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);
extern "C" void func_020465d8(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" void func_02046608(void* arg0, int, const char* arg2, char* arg3, int, int, int);
extern "C" void func_02042058(char* arg0, const char* arg1);

#if defined(jpn)
extern "C" void func_020474a8(void*,int,const char*,char*);
#endif
// USA: func_ov023_021d94e4
extern "C" ARM void func_ov023_021d94e4(Struct_ov023_021d94e4_5* arg0, char* arg1, unsigned char arg2)
{
    if (arg1 == NULL || arg0->unknown_ec_ == -1)
        return;
    GameState::GetInstance();
    void* var0 = func_020421a0();
    if (arg0->unknown_120_ == NULL)
        return;
    Struct_ov023_021d94e4_3* var1 = func_ov023_021d994c(arg0, arg0->unknown_ec_);
    if (var1 == NULL)
        return;
    Struct_ov023_021d94e4_4* var2 = var1->unknown_38_.unknown_850_[var1->unknown_1_];
    unsigned char* var3 = (unsigned char*)&var1->unknown_38_;
    short var4[9][2];
    var4[0][0] = func_02085fb4(var3) + arg0->unknown_f0_.unknown_8_[0].unknown_0_0_ + var2[0].unknown_0_0_;
    var4[1][0] = func_02086020(var3) + arg0->unknown_f0_.unknown_8_[0].unknown_1_2_ + var2[0].unknown_1_2_;
    var4[2][0] = func_0208608c(var3) + arg0->unknown_f0_.unknown_8_[0].unknown_2_4_ + var2[0].unknown_2_4_;
    var4[3][0] = func_020860f8(var3) + arg0->unknown_f0_.unknown_8_[1].unknown_0_0_ + var2[1].unknown_0_0_;
    var4[4][0] = func_02086164(var3) + arg0->unknown_f0_.unknown_8_[1].unknown_1_2_ + var2[1].unknown_1_2_;
    var4[5][0] = func_020861d0(var3) + arg0->unknown_f0_.unknown_8_[1].unknown_2_4_ + var2[1].unknown_2_4_;
    var4[6][0] = func_0208623c(var3) + arg0->unknown_f0_.unknown_8_[2].unknown_0_0_ + var2[2].unknown_0_0_;
    var4[7][0] = func_020862a8(var3) + arg0->unknown_f0_.unknown_8_[2].unknown_1_2_ + var2[2].unknown_1_2_;
    var4[8][0] = func_02086314(var3) + arg0->unknown_f0_.unknown_8_[2].unknown_2_4_ + var2[2].unknown_2_4_;
    var4[0][1] = var4[0][0] + arg0->unknown_104_.unknown_8_[0].unknown_0_0_;
    var4[1][1] = var4[1][0] + arg0->unknown_104_.unknown_8_[0].unknown_1_2_;
    var4[2][1] = var4[2][0] + arg0->unknown_104_.unknown_8_[0].unknown_2_4_;
    var4[3][1] = var4[3][0] + arg0->unknown_104_.unknown_8_[1].unknown_0_0_;
    var4[4][1] = var4[4][0] + arg0->unknown_104_.unknown_8_[1].unknown_1_2_;
    var4[5][1] = var4[5][0] + arg0->unknown_104_.unknown_8_[1].unknown_2_4_;
    var4[6][1] = var4[6][0] + arg0->unknown_104_.unknown_8_[2].unknown_0_0_;
    var4[7][1] = var4[7][0] + arg0->unknown_104_.unknown_8_[2].unknown_1_2_;
    var4[8][1] = var4[8][0] + arg0->unknown_104_.unknown_8_[2].unknown_2_4_;
    for (int var5 = 0; var5 < 9; var5++)
    {
        if (var5 == 7)
        {
            if (var4[var5][0] <= 0)
                var4[var5][0] = 1;
            if (var4[var5][1] <= 0)
                var4[var5][1] = 1;
        }
        else
        {
            if (var4[var5][0] < 0)
                var4[var5][0] = 0;
            if (var4[var5][1] < 0)
                var4[var5][1] = 0;
        }
        if (var4[var5][0] > 999)
            var4[var5][0] = 999;
        if (var4[var5][1] > 999)
            var4[var5][1] = 999;
    }
#if defined(jpn)
    const char* var6 = func_020e0434(arg0->unknown_0_, 0x7602);
    func_02042058(arg1, var6);
    for (int var7 = 0; var7 < 9; var7++) {
        if (arg2 != 0) {
            func_02041a90(arg1, 10, var7 * 15 + 0x15);
            char var8[0x100] = {0};
    func_02046380(var0);
    func_02046574((Struct_02046574_2*)var0, 0, (char*)func_020e0434(arg0->unknown_0_, (short)(var7 + 0x760c)));
    short var9 = var4[var7][0];
    func_020465c0((Struct_020465c0*)var0, 0, var9);
    func_020465d8((unsigned char*)var0, 0, 1);
    func_020465f0((unsigned char*)var0, 0, 3);
    short var10 = var4[var7][1];
    func_020465c0((Struct_020465c0*)var0, 1, var10);
    func_020465d8((unsigned char*)var0, 1, 1);
    func_020465f0((unsigned char*)var0, 1, 3);
    int var11 = 15;
    if (var10 > var9)
        var11 = 5;
            func_020465c0((Struct_020465c0*)var0, 2, var11);
            func_020465d8((unsigned char*)var0, 2, 1);
            func_020465f0((unsigned char*)var0, 2, 0);
            func_020474a8(var0,12,func_020e0434(arg0->unknown_0_,0x7603),var8);
            func_02042058(arg1, var8);
            arg2--;
        }
    }

#else
    const char* var12 = func_020e0434(arg0->unknown_0_, 0x7602);
    func_02041a90(arg1, (0xd0 - func_020420e8(var12, 0)) >> 1, 1);
    func_02041fac(arg1, (int)var12, 0x10);
    int var13;
    const char* var14 = func_020e0434(arg0->unknown_0_, 0x7603);
    var13 = arg2 - 1;
    if (var13 < 0)
        return;
    func_02041a90(arg1, 10, var13 * 15 + 0x15);
    char var15[0x100] = {0};
    char var16[0x100] = {0};
    func_02046380(var0);
    func_02046574((Struct_02046574_2*)var0, 0, (char*)func_020e0434(arg0->unknown_0_, (short)(var13 + 0x760c)));
    short var17 = var4[var13][0];
    func_020465c0((Struct_020465c0*)var0, 0, var17);
    func_020465d8((unsigned char*)var0, 0, 1);
    func_020465f0((unsigned char*)var0, 0, 3);
    short var18 = var4[var13][1];
    func_020465c0((Struct_020465c0*)var0, 1, var18);
    func_020465d8((unsigned char*)var0, 1, 1);
    func_020465f0((unsigned char*)var0, 1, 3);
    int var19 = 15;
    if (var18 > var17)
        var19 = 5;
    sprintf(var16, var14, var19);
    func_02046608(var0, 12, var16, var15, 0xe3, 0, 1);
    func_02042058(arg1, var15);

#endif
}
