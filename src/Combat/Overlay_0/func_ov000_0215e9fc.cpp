#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"

struct Struct_02010088;
extern "C" unsigned char func_020114ec(char* arg0, void* arg1);
extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" int func_ov000_02153c0c(GameObject* arg0);
extern "C" int func_02010088(struct Struct_02010088* arg0);

struct Struct_ov000_0215e9fc {
    unsigned char unknown_0_[0x56b];
    unsigned char unknown_56b_0_ : 4;
};

struct Struct_ov000_0215e9fc_2 {
#if defined(jpn)
    unsigned char unknown_0_[0x144];
#else
    unsigned char unknown1_0_[0x150];
#endif
    struct Struct_ov000_0215e9fc* unknown_150_;
};

// USA: func_ov000_0215e9fc
extern "C" ARM int func_ov000_0215e9fc(char* arg0, short* arg1, int arg2, unsigned int arg3) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1[4];
    int var2 = func_020114ec((char*)var0, var1);
    int var3;
    int var4;
    int var5;
    int var6;
    GameObject* var7;
    int var8 = 0;
    var4 = arg3 & 1;
    var5 = 0;
    var3 = arg3 & 8;
    for (; var5 < var2; var5++) {
        var6 = var1[var5];
        if (func_ov000_0215fc60(arg0) != 0 && var6 != 0) continue;
        if (!func_020a35e0(*(unsigned char**)(arg0 + 0x8e18), var6)) continue;
        var7 = func_0200ff1c(var0, var6);
        if (var7 == NULL) continue;
        if (func_ov000_02153c0c(var7)) continue;
        if (var4 && func_02010088((struct Struct_02010088*)var7)) continue;
        if (var3) {
            int var9;
            struct Struct_ov000_0215e9fc* var10 = ((struct Struct_ov000_0215e9fc_2*)var7)->unknown_150_;
            if (var10 != NULL) {
                var9 = var10->unknown_56b_0_ != 0;
            } else {
                var9 = 0;
            }
            if (var9) continue;
        }
        arg1[var8] = var6;
        var8++;
        if (var8 == arg2) return var8;
    }
    return var8;
}
