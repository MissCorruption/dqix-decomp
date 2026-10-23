#if defined(jpn)
#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02072a68_2;
struct Struct_0205c508;
struct Struct_020465c0;
struct Struct_ov012_02189af4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct Struct_ov012_02189af4_2 {
    unsigned char unknown_0_[0x54];
    Struct_ov012_02189af4 unknown_54_;
    Struct_ov012_02189af4* inline_ov012_02189af4_3() { return &unknown_54_; }
};

extern "C" void func_02041c08(char*, int, int, int, int, int);
extern "C" int func_02041ea4(char*, int);
extern "C" void* func_020421a0();
extern "C" void func_0205c508(Struct_0205c508*, int*, int*);
extern "C" int func_02042058(char*, const char*);
extern "C" const char* func_02072a68(Struct_02072a68_2*, int);
extern "C" int func_02041b70(char*, int, const char*);
extern "C" int func_02041a28(char*, int);
extern "C" void func_02046380(void*);
extern "C" void func_020465c0(Struct_020465c0*, int, int);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
extern "C" void func_020465d8(unsigned char*, int, unsigned char);
extern "C" void func_02042428(char*, int);
extern "C" void func_0202ae18();

extern "C" ARM void func_ov012_02189af4(char* arg0, char* arg1, int arg2) {
    if (!arg1) return;
    int var0 = *(int*)(arg0 + 0x1434) & 15;
    if (arg2)
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    func_02041ea4(arg1, var0);
    void* var1 = func_020421a0();
    int var2;
    int var3;
    int var4;
    Struct_ov012_02189af4* var5 = ((Struct_ov012_02189af4_2*)(arg0 + 0x90))->inline_ov012_02189af4_3();
    int var6 = var5->unknown_14_;
    int var7 = var5->unknown_4_;
    int var8, var9;
    func_0205c508((Struct_0205c508*)var5, &var8, &var9);
    var3 = var8 + (var9 + 1 - var8) / 2;
    for (var2 = var8; var2 < var3; ++var2) {
        if (var2 != var8)
            func_02042058(arg1, *(const char**)(arg0 + 0x1348));
        func_02041b70(arg1, var2 & 15, func_02072a68((Struct_02072a68_2*)(arg0 + 0x1314), (short)(var2 + 0x2774)));
        var4 = var2 + (var9 + 1 - var8) / 2;
        if (var4 < 47) {
            func_02041a28(arg1, 0x56);
            func_02041b70(arg1, var4 & 15, func_02072a68((Struct_02072a68_2*)(arg0 + 0x1314), (short)(var4 + 0x2774)));
        }
    }
    func_02046380(var1);
    func_020465c0((Struct_020465c0*)var1, 0, var6 + 1);
    func_020465c0((Struct_020465c0*)var1, 1, var7);
    func_020465f0((unsigned char*)var1, 0, 2);
    func_020465f0((unsigned char*)var1, 1, 2);
    func_020465d8((unsigned char*)var1, 0, 1);
    func_020465d8((unsigned char*)var1, 1, 0);
    func_02042428(arg1, 8);
    func_02042058(arg1, func_02072a68((Struct_02072a68_2*)(arg0 + 0x1314), 0x6a));
}

#else
#include <globaldefs.h>

struct Struct_0205c508;
struct Struct_02072a68_2;

struct Struct_ov012_02189af4_3
{
    int unknown_0_;
    int unknown_4_;
    int unknown_8_[6];
};

struct Struct_01ff91ac_14
{
    char unknown_0_[0x54];
    Struct_ov012_02189af4_3 unknown_54_;
    char unknown_74_[0x1290 - 0x74];

    Struct_ov012_02189af4_3* inline_ov012_02189af4() { return &unknown_54_; }
};

struct Struct_ov012_02189af4_4
{
    char unknown_0_[0xac];
    Struct_01ff91ac_14 unknown_ac_;
    char unknown_133c_[0x1378 - 0x133c];
    const char* unknown_1378_;
    char unknown_137c_[0x13d8 - 0x137c];
    int unknown_13d8_[6];

    Struct_01ff91ac_14* inline_ov012_02189af4_2() { return &unknown_ac_; }
};

extern "C" void func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_02041ea4(char* arg0, int arg1);
extern "C" void* func_020421a0();
extern "C" void func_0205c508(Struct_0205c508* arg0, int* arg1, int* arg2);
extern "C" void func_02042058(char* arg0, const char* arg1);
extern "C" const char* func_02072a68(Struct_02072a68_2* arg0, int arg1);
extern "C" void func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" void func_02041a28(char* arg0, int arg1);
extern "C" void func_ov012_021842a0(Struct_ov012_02189af4_4* arg0, int arg1, int arg2, int arg3);

// USA: func_ov012_02189af4
extern "C" ARM void func_ov012_02189af4(Struct_ov012_02189af4_4* arg0, char* arg1, int arg2)
{
    if (arg1 == 0)
        return;

    int var10 = arg0->unknown_13d8_[1] & 0xf;
    if (arg2)
        func_02041c08(arg1, var10, 8, 5, 5, 5);
    func_02041ea4(arg1, var10);
    func_020421a0();
    Struct_ov012_02189af4_3* var11 = arg0->inline_ov012_02189af4_2()->inline_ov012_02189af4();
    int var12 = var11->unknown_8_[3];
    int var13 = var11->unknown_4_;
    int var14;
    int var15;
    func_0205c508((Struct_0205c508*)var11, &var14, &var15);
    int var16 = var14 + (var15 + 1 - var14) / 2;
    for (int var17 = var14; var17 < var16; var17++)
    {
        if (var17 != var14)
            func_02042058(arg1, arg0->unknown_1378_);
        func_02041b70(arg1, var17 & 0xf, func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, (short)(var17 + 0x2846)));
        int var18 = var17 + (var15 + 1 - var14) / 2;
        if (var18 < 0xc0)
        {
            func_02041a28(arg1, 0x56);
            func_02041b70(arg1, var18 & 0xf, func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, (short)(var18 + 0x2846)));
        }
    }
    func_ov012_021842a0(arg0, 3, var12, var13);
}

#endif
