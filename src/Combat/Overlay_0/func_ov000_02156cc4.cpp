#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_02000c9c_29 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    unsigned char* unknown_150_;
};

struct Struct_ov000_02156cc4 {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 10;
    unsigned int unknown_5_2_ : 22;
};

struct Struct_02085ab8 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 29;
    unsigned int unknown_b_5_ : 1;
    unsigned int unknown_b_6_ : 2;
    char unknown_c_[0x14 - 0xc];
    unsigned int unknown_14_0_ : 21;
    unsigned int unknown_16_5_ : 7;
    unsigned int unknown_17_4_ : 4;
};

extern "C" unsigned char* func_02053c6c(unsigned char* arg0);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" float func_02084e78(void* arg0);
extern "C" int func_02085ab8(unsigned char* arg0, Struct_02085ab8* arg1);
float CalculateCritRate(int deftness, float accessoryBonus, float bookBonus, float skillBonus, unsigned char hitCount);
extern "C" float func_020748f8(float arg0, unsigned int arg1);
extern "C" float func_ov000_02155a04(GameObject* arg0);

static inline unsigned char* inline_ov000_02156cc4(GameObject* arg0) {
    return ((Struct_02000c9c_29*)arg0)->unknown_150_;
}

static inline int inline_ov000_02156cc4_2(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov000_02156cc4
extern "C" ARM int func_ov000_02156cc4(struct Random* arg0, int arg1, Struct_02085ab8* arg2, int arg3) {
    if (arg2->unknown_b_5_) {
        return 1;
    }
    GameState* var0 = GameState::GetInstance();
    float var1;
    if (inline_ov000_02156cc4_2(arg1)) {
        GameObject* var2 = func_0200ff1c(var0, arg1);
        unsigned char* var3 = func_02053c6c((unsigned char*)var2);
        int var4 = ((Struct_ov000_02156cc4*)var3)->unknown_4_0_;
        float var5 = func_02084e78(var3);
        float var6 = func_02085ab8(var3, arg2);
        var1 = CalculateCritRate(var4, var5, var6, arg2->unknown_16_5_ / 100.0f, (unsigned char)arg3);
        if (func_02083b00(inline_ov000_02156cc4(var2), 0x11d)) {
            if (func_ov000_02155a04(var2) < 0.25f) {
                var1 *= 2.0f;
            }
        }
    } else {
        var1 = func_020748f8(arg2->unknown_16_5_ / 100.0f, (unsigned char)arg3);
    }
    var1 = 100.0f * var1;
    return NextRandomMax(arg0, 10000) < (int)var1;
}
