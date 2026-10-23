#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
struct Struct_020839dc;
extern "C" int func_020839dc(struct Struct_020839dc* arg0, unsigned char* arg1, int arg2);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021ccdac {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_0_ : 3;
    unsigned char unknown_4_3_ : 4;
    unsigned char unknown_4_7_ : 1;
    unsigned char unknown_5_[15];
};

// USA: func_ov017_021ccdac
extern "C" ARM void func_ov017_021ccdac(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg0);
    if (!var1) return;
    int var2 = func_02053c6c((unsigned char*)var1);
    if (!var2) return;

    unsigned char var3[0x44];
    void* var4;
    int var5;
    int var6;
    int var7;

    var7 = func_020839dc((struct Struct_020839dc*)var2, var3, 0x42);
    var7 = var7 & 0xff;

    var4 = func_0202ae24();
    struct Struct_ov017_021ccdac var8;
    var8.unknown_0_ = 0xf;
    var8.unknown_4_0_ = arg0;

    var5 = 0;
    var6 = 0;
    while (var5 < var7) {
        int var9;
        for (var9 = 0; var9 < 0xf; var9++) {
            if (var7 <= var5 + var9) break;
            var8.unknown_5_[var9] = var3[var6 * 15 + var9];
        }
        var8.unknown_4_3_ = var9;
        func_0205e330(var4, &var8, 0);
        var5 += var8.unknown_4_3_;
        var6++;
    }
}
