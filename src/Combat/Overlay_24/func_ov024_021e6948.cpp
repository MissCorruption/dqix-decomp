#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021e6948_3 {
    char unknown_0_[0x21];
    unsigned char unknown_21_;
};

struct Struct_ov024_021e6948 {
    char unknown_0_[0x138];
    struct Struct_ov024_021e6948_3* unknown_138_;
};

struct Struct_02000c9c_76;

struct Struct_ov024_021e6948_2 {
    char unknown_0_[0x10];
    struct Struct_02000c9c_76* unknown_10_;
};

struct Struct_ov024_021e6948* GetCombatantByID(int, int);
extern "C" float func_02074938(int arg0);
struct GameObject;
extern "C" int func_ov024_021e67b0(GameObject*);
struct GameState;
extern "C" void* func_02010828(GameState*);
struct Struct_02048150;
extern "C" int func_02086ef0(Struct_02048150*, int);
extern "C" void func_ov000_0215a8d4(unsigned char*, int);
extern "C" int func_ov000_02156068(struct Struct_02000c9c_76* arg0, int arg1, int arg2, int arg3);
struct Random;
int NextRandomMax(Random*, int);
struct Struct_ov024_021dd028_5;
extern "C" int func_ov024_021dd260(Struct_ov024_021dd028_5*);

// USA: func_ov024_021e6948
extern "C" ARM int func_ov024_021e6948(struct Struct_ov024_021e6948_2* arg0, int arg1, int arg2, int arg3) {
    float var0 = (float)arg2 * (float)arg3 / 8.0f;
    struct Struct_ov024_021e6948* var1 = GetCombatantByID((int)arg0->unknown_10_, arg1);
    if (var1) {
        if (var1->unknown_138_->unknown_21_ <= 3) {
            var0 = var0 * func_02074938((signed char)var1->unknown_138_->unknown_21_);
        }
        if (func_ov024_021e67b0((GameObject*)var1)) {
            var0 = var0 * func_02074938(1);
        }
        if (func_02086ef0((Struct_02048150*)(func_02010828((GameState*)GameState::GetInstance())), arg1) &&
            var1 && var1->unknown_138_->unknown_21_ == 1) {
            func_ov000_0215a8d4((unsigned char*)arg0->unknown_10_, 0);
        }
    }
    if (var0 > 0 && func_ov000_02156068(arg0->unknown_10_, arg1, 0, 1)) {
        var0 = NextRandomMax((Random*)arg0->unknown_10_, 2);
    }
    if (func_ov024_021dd260((Struct_ov024_021dd028_5*)var1)) {
        var0 = 0.5f * var0;
    }
    return var0;
}
