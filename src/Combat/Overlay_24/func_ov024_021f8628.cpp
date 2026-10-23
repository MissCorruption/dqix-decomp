#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02053dc0;
struct Struct_ov024_021f8628_2 {
    short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};
extern "C" struct Struct_ov024_021f8628_2* func_02053dc0(struct Struct_02053dc0* arg0);

extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);

struct Struct_02010088_2 { char unknown_0_[0x14]; int unknown_14_; };
struct Struct_02010088 { char unknown_0_[0x138]; struct Struct_02010088_2* unknown_138_; };
extern "C" int func_02010088(struct Struct_02010088* arg0);

extern "C" float func_ov024_021db358(GameObject* arg0);

struct Struct_ov024_021f8628 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
    char unknown_2_[4];
    unsigned char unknown_6_[8];
    unsigned char unknown_e_0_ : 4;
    char unknown_f_[9];
};

// USA: func_ov024_021f8628
extern "C" ARM int func_ov024_021f8628(char** arg0, void* arg1, struct Struct_02053dc0* arg2, unsigned short* arg3) {
    struct Struct_ov024_021f8628_2* var0 = func_02053dc0(arg2);
    if (!var0) return 0;

    int var1 = 0;
    float var2 = 1.1f;
    int var3 = 0;
    int var4 = 0;
    struct Struct_ov024_021f8628* var5 = (struct Struct_ov024_021f8628*)(*arg0 + 0x81b0);
    for (int var6 = 0; var6 < var5->unknown_1_4_; var6++) {
        for (int var7 = 0; var7 < var5[var6].unknown_e_0_; var7++) {
            GameObject* var8 = func_ov000_021536f8((int)*arg0, (short)(var5[var6].unknown_6_[var7] + 0xc0));
            if (var8 == 0) continue;
            if (func_02010088((struct Struct_02010088*)var8)) continue;
            if (func_ov024_021db358(var8) < var2) {
                var2 = func_ov024_021db358(var8);
                var3 = var6;
                var1 = var5[var6].unknown_6_[var7] + 0xc0;
                var4 = 1;
            }
        }
    }
    if (!var4) return 0;

    var0->unknown_0_ = 1;
    var0->unknown_2_ = var1;
    var0->unknown_3_ = var3;
    *arg3 = 1;
    return 1;
}
