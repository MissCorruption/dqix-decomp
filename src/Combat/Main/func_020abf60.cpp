#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020abf60_30192 = 0x73b0 };
#else
enum { Enum_020abf60_30192 = 0x75f0 };
#endif
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);
struct Struct_02097430_2;
struct Struct_02097430 {
    unsigned char unknown_0_[0x1a];
    short unknown_1a_;
    unsigned char unknown_1c_[4];
};
extern "C" Struct_02097430* func_02097430(Struct_02097430_2* arg0, int arg1);

struct Struct_020abf60 {
    unsigned char unknown_0_[0x8c];
    unsigned char unknown_8c_[0x234];
};

struct Struct_020abe84_2 {
    unsigned char unknown_0_[Enum_020abf60_30192];
    unsigned int unknown_75f0_[308];
};

extern short data_020e90d4[21];

// USA: func_020abf60

extern "C" ARM int func_020abf60(void* arg0) {
    if (arg0 == 0) {
        return 0;
    }
    Struct_020abf60* var0 = static_cast<Struct_020abf60*>(func_0205ec34());
    if (func_0206dfb0((int)var0, var0->unknown_8c_, 0x796) == 0 ||
        func_0206dfb0((int)var0, var0->unknown_8c_, 0x1143) != 0) {
        return 0;
    }
    func_0206df6c(var0, var0->unknown_8c_, 0x1143, 1);
    unsigned int* var1 = reinterpret_cast<Struct_020abe84_2*>(GameState::GetInstance())->unknown_75f0_;
    short* var2 = data_020e90d4;
    int var3;
    for (var3 = 0; var3 < 0x15; var3++) {
        short var4 = *var2;
        var2++;
        short var5 = func_02097430(static_cast<Struct_02097430_2*>(arg0), var4)->unknown_1a_ - 1;
        var1[var5] |= 0x400;
    }
    return 1;
}
