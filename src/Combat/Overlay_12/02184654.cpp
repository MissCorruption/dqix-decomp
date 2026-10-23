#if defined(jpn)
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov012_02184654 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 4;
    unsigned int unknown_3_1_ : 1;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
    unsigned int unknown_4_0_ : 9;
    int unknown_5_1_ : 10;
    int unknown_6_3_ : 11;
    int unknown_7_6_ : 1;
    unsigned int unknown_7_7_ : 1;
    signed char unknown_8_[116];
};
struct Struct_ov012_02184654_8 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 3;
    unsigned char unknown_0_4_ : 4;
};
struct Struct_ov012_02184654_9 {
    short unknown_0_[10];
    Struct_ov012_02184654_8 unknown_14_;
};
struct Struct_02072a68_2;
struct Struct_0201099c_3;
extern "C" void* func_0202ae18();
extern "C" unsigned char* func_02053c6c(unsigned char*);
extern "C" int func_02098f20(int, int, int);
extern "C" void* func_02072a68(Struct_02072a68_2*, int);
extern "C" int func_020e0434(Struct_0201099c_3*, int);
extern "C" void func_ov023_021e66ac(void*);

static inline Struct_ov012_02184654* inline_ov012_02184654(GameState* arg0) {
    return (Struct_ov012_02184654*)((char*)arg0 + 0x543c);
}

// USA: func_ov012_02184654
extern "C" ARM void func_ov012_02184654(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov012_02184654* var1 = inline_ov012_02184654(var0);
    signed char var2[3];
    memcpy(var2, func_02072a68((Struct_02072a68_2*)(arg0 + 0x1314), 113), 3);
    func_0202ae18();
    unsigned char* var3 = 0;
    GameObject* var4 = var0->GetProtagonist();
    if (var4)
        var3 = func_02053c6c((unsigned char*)var4);
    if (!var3) return;
    *(void**)(arg0 + 0x1408) = var3 + 0x3c;

    if (!var1->unknown_3_2_) {
        var1->unknown_0_0_ = 2000;
        var1->unknown_1_4_ = 1;
        var1->unknown_2_0_ = 1;
        var1->unknown_3_7_ = 1;
        Struct_ov012_02184654_9* var5 = (Struct_ov012_02184654_9*)(var3 + 0x488);
        var1->unknown_3_1_ = var5->unknown_14_.unknown_0_0_;
        var1->unknown_2_5_ = var5->unknown_14_.unknown_0_0_;
        var1->unknown_5_1_ = 300;
        char* var6 = *(char**)((char*)var4 + 0x144);
        var1->unknown_6_3_ = *(int*)(var6 + 0x8b8) + 700;
        int var7;
        signed char* var8 = var1->unknown_8_;
        for (var7 = 0; var7 < 57; var7++, var8 += 2) {
            memcpy(var8, var2, 2);
        }
        var1->unknown_3_2_ = 1;
    }
    var1->unknown_4_0_ = func_02098f20(var1->unknown_0_0_, var1->unknown_1_4_, var1->unknown_2_0_);
    signed char* var9 = var1->unknown_8_;
    while (*(unsigned char*)(arg0 + 0x1375) < 114) {
        if (var9[0] == var2[0] && var9[1] == var2[1]) break;
        *(unsigned char*)(arg0 + 0x1375) += 2;
        var9 += 2;
    }
    const char* var10 = (const char*)func_02072a68((Struct_02072a68_2*)(arg0 + 0x1314), (short)(var1->unknown_5_1_ + 10000));
    memcpy(arg0 + 0x1498, var10, strlen(var10));
    if (var1->unknown_6_3_ < 700)
        var10 = (const char*)func_020e0434((Struct_0201099c_3*)(arg0 + 0x131c), (short)var1->unknown_6_3_);
    else
        var10 = (const char*)func_02072a68((Struct_02072a68_2*)(arg0 + 0x1314), (short)(var1->unknown_6_3_ + 20000));
    memcpy(arg0 + 0x1458, var10, strlen(var10));
    func_ov023_021e66ac(arg0);
}
#else
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov012_02184654_2
{
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 4;
    unsigned int unknown_3_1_ : 1;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
    unsigned int unknown_4_0_ : 9;
    int unknown_5_1_ : 10;
    int unknown_6_3_ : 11;
    int unknown_7_6_ : 1;
    unsigned int unknown_7_7_ : 1;
};

struct Struct_01ff8b48_4
{
    char unknown_0_[0x5400];
    Struct_ov012_02184654_2 unknown_5400_;
};

struct Struct_01ff8b48_5
{
    char unknown_0_[0x29c];
    Struct_01ff8b48_4 unknown_29c_;
};

struct Struct_ov012_02184654_3
{
    char unknown_0_[0x14];
    unsigned char unknown_14_0_ : 1;
    unsigned char unknown_14_1_ : 3;
    unsigned char unknown_14_4_ : 4;
    char unknown_15_[0x488 - 0x15];
};

struct Struct_ov012_02184654_4
{
    Struct_ov012_02184654_3 unknown_0_[2];
};

struct Struct_ov012_02184654_5
{
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
    char unknown_49d_[0x950 - 0x49d];
    int unknown_950_;
};

struct Struct_ov012_02184654_6
{
    char unknown_0_[0x150];
    Struct_ov012_02184654_5* unknown_150_;
};

struct Struct_02072a68_2;
struct Struct_0201099c_3;

struct Struct_ov012_02184654_7
{
    char unknown_0_[0x133c];
    char unknown_133c_[8];
    char unknown_1344_[0x13b0 - 0x1344];
    void* unknown_13b0_;
    char unknown_13b4_[0x1400 - 0x13b4];
    char unknown_1400_[0x40];
    char unknown_1440_[0x40];
};

extern "C" void* func_0202ae18();
extern "C" unsigned char* func_02053c6c(unsigned char* arg0);
extern "C" int func_02098f20(int arg0, int arg1, int arg2);
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" void func_ov023_021e66ac(Struct_ov012_02184654_7* arg0);

static inline Struct_ov012_02184654_2* inline_ov012_02184654(GameState* arg0)
{
    return &((Struct_01ff8b48_5*)arg0)->unknown_29c_.unknown_5400_;
}

static inline Struct_ov012_02184654_3* inline_ov012_02184654_2(Struct_ov012_02184654_4* arg0, int arg1)
{
    return (Struct_ov012_02184654_3*)(void*)arg0->unknown_0_ + arg1;
}

// USA: func_ov012_02184654
extern "C" ARM void func_ov012_02184654(Struct_ov012_02184654_7* arg0)
{
    GameState* var11 = GameState::GetInstance();
    Struct_ov012_02184654_2* var12 = inline_ov012_02184654(var11);
    func_0202ae18();
    Struct_ov012_02184654_4* var13 = 0;
    Struct_ov012_02184654_6* var14 = (Struct_ov012_02184654_6*)var11->GetProtagonist();
    if (var14 != 0)
        var13 = (Struct_ov012_02184654_4*)func_02053c6c((unsigned char*)var14);
    if (var13 == 0)
        return;

    arg0->unknown_13b0_ = (char*)var13 + 0x3c;

    void* var15;
    if (!var12->unknown_3_2_)
    {
        var12->unknown_0_0_ = 2000;
        var12->unknown_1_4_ = 1;
        var12->unknown_2_0_ = 1;
        var12->unknown_3_7_ = 1;
        Struct_ov012_02184654_3* var16 = inline_ov012_02184654_2(var13, 1);
        int var17 = 0x50dc;
        var12->unknown_3_1_ = var16->unknown_14_0_;
        var12->unknown_2_5_ = var16->unknown_14_0_;
        var12->unknown_5_1_ = 300;
        Struct_ov012_02184654_5* var18 = var14->unknown_150_;
        if (var18->unknown_49c_0_ == 1)
            var17 += 0x32;
        var12->unknown_6_3_ = var17 + var18->unknown_950_ - 0x4e20;
        memset((char*)var12 + 8, 0, 0x74);
        var12->unknown_3_2_ = 1;
    }

    var12->unknown_4_0_ = func_02098f20(var12->unknown_0_0_, var12->unknown_1_4_, var12->unknown_2_0_);

    var15 = func_02072a68((struct Struct_02072a68_2*)arg0->unknown_133c_, (short)(var12->unknown_5_1_ + 10000));
    memcpy(arg0->unknown_1440_, var15, strlen((char*)var15));

    if (var12->unknown_6_3_ < 700)
        var15 = (void*)func_020e0434((struct Struct_0201099c_3*)arg0->unknown_1344_, (short)var12->unknown_6_3_);
    else
        var15 = func_02072a68((struct Struct_02072a68_2*)arg0->unknown_133c_, (short)(var12->unknown_6_3_ + 20000));
    memcpy(arg0->unknown_1400_, var15, strlen((char*)var15));

    func_ov023_021e66ac(arg0);
}
#endif
