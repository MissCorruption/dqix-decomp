#include "Combat/TryApplyElemFields.h"
#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_ov012_02185cf8 func_ov012_0218634c
#endif
#include "std_library_functions.h"
#include "Input/Input.h"

struct Struct_0205d5d0;
struct Struct_ov012_02185cf8
{
    char unknown_0_[LOW_REGION(0x90, 0xac)];
    char unknown_ac_[LOW_REGION(0x1340, 0x1370) - LOW_REGION(0x90, 0xac)];
    unsigned char unknown_1370_;
    unsigned char unknown_1371_;
    char unknown_1372_[2];
    char* unknown_1374_;
    char unknown_1378_[LOW_REGION(0x1360, 0x1398) - LOW_REGION(0x1348, 0x1378)];
    int unknown_1398_;
};

struct Struct_ov012_02185cf8_2
{
    char unknown_0_[0x30];
    int unknown_30_;
};

typedef void (Struct_ov012_02185cf8::*Type_ov012_02185cf8)(char* text, int hidden);

struct Struct_ov012_0218b108
{
    Type_ov012_02185cf8 unknown_0_[16];
};

extern "C" const Struct_ov012_0218b108 data_ov012_0218b108;
extern "C" Type_ov012_02185cf8 data_020e6d5c;

static inline Struct_ov012_02185cf8_2* inline_ov012_02185cf8(char* arg0)
{
    return (Struct_ov012_02185cf8_2*)(arg0 + 4);
}

static inline char* inline_ov012_02185cf8_2(Struct_ov012_02185cf8* arg0)
{
    return (char*)arg0 + LOW_REGION(0x90, 0xac);
}

// USA: func_ov012_02185cf8
extern "C" ARM void func_ov012_02185cf8(Struct_ov012_02185cf8* arg0)
{
    if (arg0->unknown_1398_ == 0)
        return;

    int var0 = 0;
    if (arg0->unknown_1398_ == 2)
    {
        if (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0 &&
            inline_ov012_02185cf8(inline_ov012_02185cf8_2(arg0))->unknown_30_ < 0)
            return;
        var0 = 1;
    }
    memset(arg0->unknown_1374_, 0, LOW_REGION(0x800, 0x960));
    Struct_ov012_0218b108 var1 = data_ov012_0218b108;
    Type_ov012_02185cf8 var2 = data_020e6d5c;
    var1.unknown_0_[0] = var2;
    var1.unknown_0_[15] = var2;
    if (var1.unknown_0_[arg0->unknown_1371_] != 0)
        (arg0->*var1.unknown_0_[arg0->unknown_1371_])(arg0->unknown_1374_, var0);
#if defined(jpn)
    func_0205d5d0((Struct_0205d5d0*)arg0->unknown_ac_, arg0->unknown_1371_, (int)arg0->unknown_1374_, 0);
#else
    func_0205d5d0((Struct_0205d5d0*)arg0->unknown_ac_, arg0->unknown_1371_, (int)arg0->unknown_1374_, 0, 0);
#endif
}
