#if defined(jpn)

#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_ov012_0218adac func_ov012_0218bba0
#endif
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov008_02188f5c {
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
    char unknown_4_[0x78];
};

struct Struct_ov012_0218adac_2 {
    char unknown_0_[LOW_REGION(0x543c, 0x569c)];
    Struct_ov008_02188f5c unknown_569c_;
};

struct Struct_ov012_02185ab8 {
    char unknown_0_[LOW_REGION(0xd0c, 0xd28)];
#if defined(jpn)
    char unknown_d28_[0x608];
    char unknown_1314_[0x1344 - 0x1314];
#else
    char unknown_d28_[0x60c];
    unsigned char unknown_1334_;
    char unknown_1335_[0x1374 - 0x1335];
#endif
    char* unknown_1374_;
    char unknown_1378_[LOW_REGION(0x1408 - 0x1348, 0x13b0 - 0x1378)];
    const char* unknown_13b0_;
    void* unknown_13b4_;
    unsigned int unknown_13b8_;
    char* unknown_13bc_;
    char unknown_13c0_[LOW_REGION(0x1458 - 0x1418, 0x1400 - 0x13c0)];
    char unknown_1400_[0x40];
    char unknown_1440_[0x40];
#if !defined(jpn)
    char unknown_1480_[0x14bd - 0x1480];
    unsigned char unknown_14bd_;
#endif
};

extern "C" void func_ov023_021e6594(Struct_ov012_02185ab8* arg0);
extern "C" void func_ov023_021e66ac(void* arg0);

class Struct_ov002_021650d4;
class Struct_ov012_0218adac;
extern "C" void func_ov023_021e7bc4(Struct_ov002_021650d4* arg0, unsigned int arg1, int arg2);
extern "C" void func_ov023_021e7c58(Struct_ov012_0218adac* arg0, unsigned int arg1, int arg2);

#if !defined(jpn)
extern "C" int func_ov012_0218ae74(Struct_ov012_02185ab8* arg0, const Struct_ov008_02188f5c* arg1);
#endif

#if defined(jpn)
extern "C" void func_02042428(char*, int);
extern "C" int func_02099304(const Struct_ov008_02188f5c*, const char*, const void*, unsigned int, char*, unsigned int, unsigned char, const char*, const char*);
#endif

// USA: func_ov012_0218adac
#if defined(jpn)
extern "C" ARM void func_ov012_0218adac(Struct_ov012_02185ab8* arg0, int arg1, int arg2) {
#else
extern "C" ARM void func_ov012_0218adac(Struct_ov012_02185ab8* arg0, int arg1, int arg2, int arg3) {
#endif
    GameState* var0 = GameState::GetInstance();
    func_ov023_021e6594(arg0);

    Struct_ov008_02188f5c var1;
    const Struct_ov008_02188f5c* var2;

    if (arg2 == -1) {
        var2 = &((Struct_ov012_0218adac_2*)var0)->unknown_569c_;
    } else {
        memcpy(&var1, &((Struct_ov012_0218adac_2*)var0)->unknown_569c_, sizeof(var1));
        var1.unknown_2_5_ = arg2;
        var2 = &var1;
    }

#if defined(jpn)
    memset(arg0->unknown_1374_, 0, 0x800);
    func_02042428(arg0->unknown_1374_, 12);
    char* var3 = arg0->unknown_1374_;
    unsigned int var4 = strlen(var3);
    func_02099304(var2, arg0->unknown_13b0_, arg0->unknown_13b4_, arg0->unknown_13b8_, var3 + var4, 0x800 - var4, 0, arg0->unknown_1440_, arg0->unknown_1400_);
    memset(arg0->unknown_13bc_, 0, 0xf2);
    const char* var5 = arg0->unknown_1374_;
    memcpy(arg0->unknown_13bc_, var5, strlen(var5));
    {
#else
    if (arg3 == 0) {
        arg0->unknown_14bd_ = 0;
        arg0->unknown_1334_ = 0;
    }

    int var6 = func_ov012_0218ae74(arg0, var2);

    if (var6 != 0 || arg3 == 0) {
#endif
        if (arg1 != 0) {
            func_ov023_021e7bc4((Struct_ov002_021650d4*)arg0->unknown_d28_, 2, 0);
        } else {
            func_ov023_021e7c58((Struct_ov012_0218adac*)arg0->unknown_d28_, 2, 0);
        }
    }

    func_ov023_021e66ac(arg0);
}
