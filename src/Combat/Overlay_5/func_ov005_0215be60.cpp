#if defined(jpn)
#define R(j,u) (j)
extern const char data_ov012_0218bfd7[];
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_ov005_02153954
{
    char unknown_0_[R(0x1240, 0x1244)];
    char unknown_1244_[4];
};

extern "C" void func_ov023_021dcae0(void* arg0, int arg1);
extern "C" void func_ov005_021562b8(Struct_ov005_02153954* arg0);
extern "C" void func_ov005_0215730c(Struct_ov005_02153954* arg0);

// USA: func_ov005_0215be60
extern "C" ARM void func_ov005_0215be60(Struct_ov005_02153954* arg0)
{
    func_ov023_021dcae0(arg0->unknown_1244_, -1);
    int var0 = 0;
    if (g_touchInput.pressed_ || (g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) ||
        g_touchInput.released_ != 0)
    {
        func_ov005_021562b8(arg0);
        var0 = 1;
    }
    if (var0)
        return;
    func_ov005_0215730c(arg0);
}
