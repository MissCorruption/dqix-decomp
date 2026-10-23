#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"

struct Struct_ov025_021e5c68 {
    char unknown_0_[0x70];
    Vector3fix unknown_70_;
};

struct Struct_ov025_021e5c68_2 {
    char unknown_0_[8];
    Vector3fix unknown_8_;
    unsigned char unknown_14_;
};

struct Struct_ov025_021e5c68_3 {
    char unknown_0_[0xe];
    short unknown_e_;
};

extern "C" void func_0202e694(void* arg0, int* arg1);
struct Struct_ov000_0215440c;
extern "C" Struct_ov025_021e5c68_3* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" char* func_ov000_02160130();

// USA: func_ov025_021e5c68
extern "C" ARM int func_ov025_021e5c68(Struct_ov025_021e5c68_2* arg0, void* arg1) {
#if defined(jpn)
 enum {Enum_ov025_021e5c68_28629=0x71c5};
#else
 enum {Enum_ov025_021e5c68_28629=0x6fd5};
#endif
    GameState* var0 = GameState::GetInstance();
    Struct_ov025_021e5c68* var1 = (Struct_ov025_021e5c68*)func_020100bc(var0);
    if (arg0->unknown_14_ == 0) {
        if (var1 != 0) func_0202e694(var1, (int*)&arg0->unknown_8_);
    } else if (arg0->unknown_14_ == 2) {
        fix32_t var2 = 1;
        Struct_ov025_021e5c68_3* var3 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, 0);
        if (var3 != 0) {
            GameObject* var4 = var0->GetCombatantByIndex(var3->unknown_e_);
            if (var4 != 0) var2 = var4->obj3D_.GetHeight();
        }
        float var5 = 1.0f;
        if (var2 >= 0x24cc) {
            var5 = 1.0f + ((var2 / 4096.0f - 2.3f) * 0.6f) / 1.7f;
            if (var5 >= 1.6f) var5 = 1.6f;
        }
        arg0->unknown_8_.z = (int)(4096.0f * ((arg0->unknown_8_.z / 4096.0f) * var5));
        if (var1 != 0) func_0202e694(var1, (int*)&arg0->unknown_8_);
    } else {
        if (var1 != 0) {
            Vector3fix var6 = var1->unknown_70_;
            Vector3fix var7 = arg0->unknown_8_;
            var6.x = var6.x + var7.x;
            var6.y = var6.y + var7.y;
            var6.z = var6.z + var7.z;
            func_0202e694(var1, (int*)&var6);
        }
    }
    char* var8 = func_ov000_02160130();
    if (var8 != 0) var8[Enum_ov025_021e5c68_28629] = 1;
    return 1;
}
