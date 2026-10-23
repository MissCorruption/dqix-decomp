#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215767c_8 {
    char unknown_0_[0x20];
    short unknown_20_;
};

struct Struct_ov000_0215440c_2 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_;
    unsigned char unknown_b_;
    char unknown_c_[0x28 - 0xc];
};

struct Struct_ov000_0215440c;
struct Struct_02010088;

struct Struct_ov000_0215767c_2 {
    char unknown_0_[0x6d30];
    Struct_ov000_0215440c_2 unknown_6d30_[1];
    char unknown_6d58_[0x8e09 - 0x6d58];
    unsigned char unknown_8e09_;
    char unknown_8e0a_[0x8e10 - 0x8e0a];
    unsigned char unknown_8e10_;
    char unknown_8e11_[0x8e24 - 0x8e11];
    int unknown_8e24_;
};

extern "C" void* memcpy(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void* func_ov000_0215e9d8(void* arg0);
extern "C" void func_ov000_02160030(void* arg0);
extern "C" Struct_ov000_0215767c_8* func_ov000_02160094(Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" void* func_ov000_021600f8(Struct_ov000_0215440c* arg0, int arg1);
extern "C" int func_02010088(Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);

// USA: func_ov000_0215b198
extern "C" ARM void func_ov000_0215b198(Struct_ov000_0215767c_2* arg0) {
    int var0;
    for (var0 = arg0->unknown_8e09_; var0 < arg0->unknown_8e10_; var0++) {
        void* var1 = func_ov000_0215e9d8(arg0);
        if (var1 == 0) {
            return;
        }
        func_ov000_02160030(var1);
        Struct_ov000_0215440c_2* var2 = &arg0->unknown_6d30_[var0];
        Struct_ov000_0215767c_8* var3 = func_ov000_02160094(var2, 0);
        if (var3 == 0) {
            continue;
        }
        if (func_ov000_021600f8((Struct_ov000_0215440c*)var2, 0) == 0) {
            continue;
        }
        int var4 = var3->unknown_20_;
        GameState* var5 = GameState::GetInstance();
        GameObject* var6 = var5->GetCombatantByIndex(var4);
        if (var6 == 0) {
            continue;
        }
        var2->unknown_b_ |= 4;
        if (func_02010088((Struct_02010088*)var6)) {
            continue;
        }
        if (func_ov000_02153c0c(var6)) {
            continue;
        }
        memcpy(var1, var2, sizeof(Struct_ov000_0215440c_2));
        arg0->unknown_8e24_++;
    }
    arg0->unknown_8e09_ = arg0->unknown_8e10_;
}
