// USA: func_ov009_021883cc
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "Resource/CharacterCreationUI.h"
#include "NitroSDK/ColorEffects.h"

extern "C" int func_0200fb8c(int*);
struct Struct_0205d6a0;
extern "C" void func_0205d6a0(Struct_0205d6a0*, int);
#if defined(jpn)
extern "C" void func_ov009_021867bc(unsigned char*, int);
#else
extern "C" void func_ov009_021855dc(unsigned char*, int);
#endif

extern "C" ARM void func_ov009_021883cc(unsigned char* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    GameResources* var1 = (GameResources*)func_0200fb8c((int*)GameState::GetInstance());
    unsigned char var2 = var0->unknown_c59_;
    if (var2 == 0) {
        SetBrightness(var1, -16, 15);
        ++var0->unknown_c59_;
        return;
    }
    if (var2 != 1 || IsBrightnessTransitionActive(var1))
        return;
    func_0205d6a0((Struct_0205d6a0*)&var0->unknown_1f8_[0], 1);
    func_0205d6a0((Struct_0205d6a0*)&var0->unknown_1f8_[1], 1);
    ColorEffect_ConfigureBrightnessAdjust(0x04001050, 1, 0);
#if defined(jpn)
    func_ov009_021867bc(arg0, 12);
#else
    func_ov009_021855dc(arg0, 12);
#endif
}
