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

extern "C" ARM void func_ov012_0218a5f0(char* arg0, char* arg1, int arg2) {
    if (!arg1) return;
    int var0 = *(int*)(arg0 + 0x1444) % 10;
    if (arg2)
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    func_02041ea4(arg1, var0);
    void* var1 = func_020421a0();
    int var2;
    Struct_ov012_02189af4* var3 = ((Struct_ov012_02189af4_2*)(arg0 + 0x90))->inline_ov012_02189af4_3();
    int var4 = var3->unknown_14_;
    int var5 = var3->unknown_4_;
    int var6, var7;
    func_0205c508((Struct_0205c508*)var3, &var6, &var7);
    func_0202ae18();
    GameState::GetInstance();
    for (var2 = var6; var2 < var7; ++var2) {
        if (var2 != var6)
            func_02042058(arg1, *(const char**)(arg0 + 0x1348));
        if (var2 == 0) {
            const char* var8 = func_02072a68((Struct_02072a68_2*)(arg0 + 0x1314), 0x50dc);
            func_02041b70(arg1, var2 % 10, var8);
        } else {
            const char* var9 = func_02072a68((Struct_02072a68_2*)(arg0 + 0x1314), (short)(0x5140 + var2 - 1));
            func_02041b70(arg1, var2 % 10, var9);
        }
    }
    func_02046380(var1);
    func_020465c0((Struct_020465c0*)var1, 0, var4 + 1);
    func_020465c0((Struct_020465c0*)var1, 1, var5);
    func_020465f0((unsigned char*)var1, 0, 2);
    func_020465f0((unsigned char*)var1, 1, 2);
    func_020465d8((unsigned char*)var1, 0, 1);
    func_020465d8((unsigned char*)var1, 1, 0);
    func_02042428(arg1, 8);
    func_02042058(arg1, func_02072a68((Struct_02072a68_2*)(arg0 + 0x1314), 0x6b));
}

#else
#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0205c508;
struct Struct_02072a68_2;

struct Struct_ov012_0218a5f0
{
    int unknown_0_;
    int unknown_4_;
    int unknown_8_[6];
};

struct Struct_01ff91ac_16
{
    char unknown_0_[0x54];
    Struct_ov012_0218a5f0 unknown_54_;
    char unknown_74_[0x1290 - 0x74];

    Struct_ov012_0218a5f0* inline_ov012_0218a5f0() { return &unknown_54_; }
};

struct Struct_ov012_0218a5f0_2
{
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

struct Struct_ov012_0218a5f0_3
{
    char unknown_0_[0x150];
    Struct_ov012_0218a5f0_2* unknown_150_;
};

struct Struct_ov012_0218a5f0_4
{
    char unknown_0_[0xac];
    Struct_01ff91ac_16 unknown_ac_;
    char unknown_133c_[0x1378 - 0x133c];
    const char* unknown_1378_;
    char unknown_137c_[0x13d8 - 0x137c];
    int unknown_13d8_[6];

    Struct_01ff91ac_16* inline_ov012_0218a5f0_2() { return &unknown_ac_; }
};

extern "C" void func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_02041ea4(char* arg0, int arg1);
extern "C" void* func_020421a0();
extern "C" void func_0205c508(Struct_0205c508* arg0, int* arg1, int* arg2);
extern "C" void func_0202ae18();
extern "C" void func_02042058(char* arg0, const char* arg1);
extern "C" const char* func_02072a68(Struct_02072a68_2* arg0, int arg1);
extern "C" void func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" void __clear(void* arg0, unsigned long arg1);
extern "C" void func_0206819c(const char* arg0, char* arg1, int arg2);
extern "C" void func_ov012_021842a0(Struct_ov012_0218a5f0_4* arg0, int arg1, int arg2, int arg3);

// USA: func_ov012_0218a5f0
extern "C" ARM void func_ov012_0218a5f0(Struct_ov012_0218a5f0_4* arg0, char* arg1, int arg2)
{
    if (arg1 == 0)
        return;

    int var10 = arg0->unknown_13d8_[5] % 10;
    if (arg2)
        func_02041c08(arg1, var10, 8, 5, 5, 5);
    func_02041ea4(arg1, var10);
    func_020421a0();
    Struct_ov012_0218a5f0_3* var11;
    int var12;
    Struct_ov012_0218a5f0* var13 = arg0->inline_ov012_0218a5f0_2()->inline_ov012_0218a5f0();
    int var14 = var13->unknown_8_[3];
    int var15 = var13->unknown_4_;
    int var16;
    int var17;
    func_0205c508((Struct_0205c508*)var13, &var16, &var17);
    func_0202ae18();
    var11 = (Struct_ov012_0218a5f0_3*)GameState::GetInstance()->GetProtagonist();
    int var18 = 0x50dc;
    for (var12 = var16; var12 < var17; var12++)
    {
        if (var12 != var16)
            func_02042058(arg1, arg0->unknown_1378_);
        if (var12 == 0)
        {
            int var19 = var18;
            if (var11->unknown_150_->unknown_49c_0_ == 1)
                var19 = 0x510e;
            const char* var20 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, (short)var19);
            func_02041b70(arg1, var12 % 10, var20);
        }
        else
        {
            int var21 = 0x5140;
            if (var11->unknown_150_->unknown_49c_0_ == 1)
                var21 = 0x51a4;
            const char* var22 = func_02072a68((Struct_02072a68_2*)arg0->unknown_133c_, (short)(var21 + var12 - 1));
            char var23[0x80];
            __clear(var23, sizeof(var23));
            func_0206819c(var22, var23, 0);
            func_02041b70(arg1, var12 % 10, var23);
        }
    }
    func_ov012_021842a0(arg0, 11, var14, var15);
}

#endif
