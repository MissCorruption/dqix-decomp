#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);

struct Struct_ov000_0215ae80 {
    char unknown_0_[0x20];
    short unknown_20_;
};

struct Struct_ov000_0215440c_2;
struct Struct_ov000_0215440c;
extern "C" Struct_ov000_0215ae80* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" void* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1);

struct Struct_ov000_0215ae80_2 {
    char unknown_0_[0x28];
};

extern "C" void* func_ov000_0215e9d8(void* arg0);
extern "C" void func_ov000_02160030(void* arg0);

struct Struct_ov000_0215ae80_3 {
    char unknown_0_[0x7770];
    Struct_ov000_0215ae80_2 unknown_7770_[0x40];
    char unknown_8170_[0x8e0a - 0x8170];
    unsigned char unknown_8e0a_;
    char unknown_8e0b_[0x8e0f - 0x8e0b];
    unsigned char unknown_8e0f_;
    char unknown_8e10_[0x8e24 - 0x8e10];
    int unknown_8e24_;
};

// USA: func_ov000_0215ae80
extern "C" ARM void func_ov000_0215ae80(Struct_ov000_0215ae80_3* arg0) {
    int var0;
    for (var0 = arg0->unknown_8e0a_; var0 < arg0->unknown_8e0f_; var0++) {
        void* var1 = func_ov000_0215e9d8(arg0);
        if (var1 == NULL) return;
        func_ov000_02160030(var1);
        Struct_ov000_0215ae80_2* var2 = &arg0->unknown_7770_[var0];
        Struct_ov000_0215ae80* var3 = func_ov000_02160094((struct Struct_ov000_0215440c_2*)var2, 0);
        if (var3 != NULL && func_ov000_021600f8((struct Struct_ov000_0215440c*)var2, 0) != NULL) {
            short var4 = var3->unknown_20_;
            GameState* var5 = GameState::GetInstance();
            GameObject* var6 = var5->GetCombatantByIndex(var4);
            if (var6 == NULL) return;
            if (func_02010088((struct Struct_02010088*)var6)) return;
            if (func_ov000_02153c0c(var6)) return;
            memcpy(var1, var2, sizeof(Struct_ov000_0215ae80_2));
            arg0->unknown_8e24_++;
        }
    }
    arg0->unknown_8e0a_ = arg0->unknown_8e0f_;
}
