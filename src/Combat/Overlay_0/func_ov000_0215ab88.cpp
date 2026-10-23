#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215767c_8 {
    char unknown_0_[0x20];
    short unknown_20_;
};

struct Struct_ov000_0215ab88_2 {
    char unknown_0_[0xc];
    short unknown_c_;
};

struct Struct_ov000_0215440c_2 {
    char unknown_0_[0x28];
};

struct Struct_ov000_0215440c;
struct Struct_02010088;

struct Struct_ov000_0215ab88 {
    char unknown_0_[0x138];
    unsigned char* unknown_138_;
    char unknown_13c_[0x181 - 0x13c];
    unsigned char unknown_181_;
};

struct Struct_ov000_0215767c_2 {
    char unknown_0_[0x6060];
    Struct_ov000_0215440c_2 unknown_6060_[1];
    char unknown_6088_[0x8e08 - 0x6088];
    unsigned char unknown_8e08_;
    char unknown_8e09_[0x8e0b - 0x8e09];
    unsigned char unknown_8e0b_;
    char unknown_8e0c_[0x8e24 - 0x8e0c];
    int unknown_8e24_;
};

extern "C" void* memcpy(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void* func_ov000_0215e9d8(void* arg0);
extern "C" void func_ov000_02160030(void* arg0);
extern "C" Struct_ov000_0215767c_8* func_ov000_02160094(Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" Struct_ov000_0215ab88_2* func_ov000_021600f8(Struct_ov000_0215440c* arg0, int arg1);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" int func_02010088(Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);
extern "C" void func_02088e64(unsigned char* arg0);

static inline GameObject* inline_ov000_0215ab88(int arg0) {
    GameState* var0 = GameState::GetInstance();
    return func_0200fea4(var0, arg0);
}

static inline GameObject* inline_ov000_02153aa4(int arg0) {
    GameState* var0 = GameState::GetInstance();
    return var0->GetCombatantByIndex(arg0);
}

// USA: func_ov000_0215ab88
extern "C" ARM void func_ov000_0215ab88(Struct_ov000_0215767c_2* arg0) {
    int var0;
    void* var1;
    Struct_ov000_0215440c_2* var2;
    Struct_ov000_0215767c_8* var3;
    Struct_ov000_0215ab88_2* var4;
    GameObject* var5;
    GameObject* var6;
    for (var0 = arg0->unknown_8e08_; var0 < arg0->unknown_8e0b_; var0++) {
        var1 = func_ov000_0215e9d8(arg0);
        if (var1 == 0) {
            return;
        }
        func_ov000_02160030(var1);
        var2 = &arg0->unknown_6060_[var0];
        var3 = func_ov000_02160094(var2, 0);
        if (var3 == 0) {
            continue;
        }
        var4 = func_ov000_021600f8((Struct_ov000_0215440c*)var2, 0);
        if (var4 == 0) {
            continue;
        }
        var5 = inline_ov000_0215ab88(var3->unknown_20_);
        if (var5 == 0) {
            continue;
        }
        ((Struct_ov000_0215ab88*)var5)->unknown_181_ = 0;
        if (func_02010088((Struct_02010088*)var5)) {
            continue;
        }
        if (func_ov000_02153c0c(var5)) {
            continue;
        }
        var6 = inline_ov000_02153aa4(var4->unknown_c_);
        if (var6 == 0 || func_02010088((Struct_02010088*)var6) || func_ov000_02153c0c(var6)) {
            func_02088e64(((Struct_ov000_0215ab88*)var5)->unknown_138_);
            continue;
        }
        memcpy(var1, var2, sizeof(Struct_ov000_0215440c_2));
        arg0->unknown_8e24_++;
    }
    arg0->unknown_8e08_ = arg0->unknown_8e0b_;
}
