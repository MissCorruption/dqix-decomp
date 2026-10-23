#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_020854e8(unsigned char* arg0);
extern "C" short func_ov000_0215a1d4(void* arg0, int arg1, int arg2, short* arg3);
extern "C" void func_ov000_0215acb8(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov024_021e556c {
    unsigned int unknown_0_0_ : 8;
    unsigned int unknown_1_0_ : 2;
    unsigned int unknown_1_2_ : 22;
};

struct Struct_ov024_021e556c_2 {
    unsigned int unknown_0_0_ : 5;
    unsigned int unknown_0_5_ : 7;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 16;
};

struct Struct_ov024_021e556c_3 {
    char unknown_0_[8];
    struct Struct_ov024_021e556c unknown_8_;
    char unknown_c_[4];
    unsigned int unknown_10_;
    char unknown_14_[4];
    struct Struct_ov024_021e556c_2 unknown_18_;
};

struct Struct_ov024_021e556c_4 {
    char unknown_0_[0x10];
    void* unknown_10_;
    char unknown_14_[0x75 - 0x14];
    unsigned char unknown_75_;
};

struct Struct_ov024_021e556c_5 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    unsigned char* unknown_150_;
};

// USA: func_ov024_021e556c
extern "C" ARM void func_ov024_021e556c(struct Struct_ov024_021e556c_4* arg0, int arg1, int arg2, struct Struct_ov024_021e556c_3* arg3, int arg4) {
    GameState* var0 = GameState::GetInstance();
    if (GetCombatantByID((int)arg0->unknown_10_, arg2) == 0) return;
    if (!(arg3->unknown_10_ & 1)) return;
    if (arg3->unknown_8_.unknown_1_0_ != 1) return;
    int var1 = (arg2 >= 0 && arg2 <= 3) ? 1 : 0;
    if (!var1) return;
    int var2 = (arg1 >= 0 && arg1 <= 3) ? 1 : 0;
    if (var2) return;
    if (arg3->unknown_8_.unknown_0_0_ == 0) return;
    if (arg3->unknown_18_.unknown_0_5_ == 1) {
        if (arg4 <= 0) return;
    }
    if (arg3->unknown_18_.unknown_1_4_ != 2) return;
    if (arg0->unknown_75_ == 0) return;
    struct Struct_ov024_021e556c_5* var3 = (struct Struct_ov024_021e556c_5*)func_0200ff1c(var0, arg2);
    if (var3 == 0) return;
    if (func_02010088((struct Struct_02010088*)var3)) return;
    if (!func_020854e8(var3->unknown_150_)) return;
    short var4 = 0;
    short var5 = func_ov000_0215a1d4(arg0->unknown_10_, arg2, arg3->unknown_8_.unknown_0_0_, &var4);
    func_ov000_0215acb8(arg0->unknown_10_, arg2, var4, var5);
}
