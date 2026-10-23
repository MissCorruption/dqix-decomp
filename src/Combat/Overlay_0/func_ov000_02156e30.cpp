#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_02000c9c_30 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    unsigned char* unknown_150_;
};

struct Struct_ov000_02156e30 {
    char unknown_0_[0x2cc];
    short unknown_2cc_;
};

struct Struct_ov000_02156e30_2 {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    char unknown_8_[0x10 - 8];
    unsigned int unknown_10_;
};

extern "C" Struct_ov000_02156e30* func_02053c6c(unsigned char* arg0);
extern "C" int func_02085154(unsigned char* arg0);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_ov000_02155f9c(struct Random* arg0, int arg1, int arg2);
extern "C" float func_ov000_02156118(struct Random* arg0, int arg1);

static inline unsigned char* inline_ov000_02156cc4(GameObject* arg0) {
    return ((Struct_02000c9c_30*)arg0)->unknown_150_;
}

static inline int inline_ov000_02156cc4_2(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov000_02156e30
extern "C" ARM int func_ov000_02156e30(struct Random* arg0, int arg1, int arg2, Struct_ov000_02156e30_2* arg3) {
    GameState* var0 = GameState::GetInstance();
    if (!(arg3->unknown_10_ & 0x40)) {
        return 0;
    }
    if (func_ov000_02155f9c(arg0, arg2, 0) != 0) {
        return 0;
    }
    if (inline_ov000_02156cc4_2(arg1)) {
        GameObject* var1 = func_0200ff1c(var0, arg1);
        if (var1 != NULL && (arg3->unknown_10_ & 0x80000)) {
            if (func_02085154(inline_ov000_02156cc4(var1))) {
                return 0;
            }
        }
    }
    if (GameState::GetInstance()->GetCombatantByIndex(arg2) == NULL) {
        return 0;
    }
    float var2 = func_ov000_02156118(arg0, arg2);
    if (inline_ov000_02156cc4_2(arg2) && (arg3->unknown_4_0_ == 0xf4 || arg3->unknown_4_0_ == 0xf5)) {
        GameObject* var3 = func_0200ff1c(GameState::GetInstance(), arg2);
        Struct_ov000_02156e30* var4 = func_02053c6c((unsigned char*)var3);
        if (var3 != NULL && var4 != NULL && var4->unknown_2cc_ > 0) {
            if (func_02083b00(inline_ov000_02156cc4(var3), 0x28)) {
                var2 = 100.0f;
            }
        }
    }
    return NextRandomMax(arg0, 100) < var2;
}
