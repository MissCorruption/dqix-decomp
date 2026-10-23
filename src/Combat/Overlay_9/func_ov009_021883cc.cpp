// USA: func_ov009_021883cc
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "Resource/CharacterCreationUI.h"
#include "NitroSDK/ColorEffects.h"

extern "C" int func_0200fb8c(int*);
struct Entry_0205d6a0;
extern "C" void func_0205d6a0(Entry_0205d6a0*, int);
#if defined(jpn)
extern "C" void func_ov009_021867bc(unsigned char*, int);
#else
extern "C" void func_ov009_021855dc(unsigned char*, int);
#endif

extern "C" ARM void func_ov009_021883cc(unsigned char* storage) {
    CharacterCreationUI* editor = (CharacterCreationUI*)storage;
    GameResources* resources = (GameResources*)func_0200fb8c((int*)GameState::GetInstance());
    unsigned char step = editor->step;
    if (step == 0) {
        SetBrightness(resources, -16, 15);
        ++editor->step;
        return;
    }
    if (step != 1 || IsBrightnessTransitionActive(resources))
        return;
    func_0205d6a0((Entry_0205d6a0*)&editor->windows[0], 1);
    func_0205d6a0((Entry_0205d6a0*)&editor->windows[1], 1);
    ColorEffect_ConfigureBrightnessAdjust(0x04001050, 1, 0);
#if defined(jpn)
    func_ov009_021867bc(storage, 12);
#else
    func_ov009_021855dc(storage, 12);
#endif
}
