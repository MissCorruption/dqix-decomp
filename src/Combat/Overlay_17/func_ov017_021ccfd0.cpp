#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
struct Struct_02083a50;
extern "C" int func_02083a50(struct Struct_02083a50* arg0, short* arg1, int arg2);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021ccfd0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_0_ : 3;
    unsigned char unknown_4_3_ : 3;
    unsigned char unknown_4_6_ : 2;
    unsigned char unknown_5_;
    short unknown_6_[7];
};

// USA: func_ov017_021ccfd0
extern "C" ARM void func_ov017_021ccfd0(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg0);
    if (!var1) {
        return;
    }
    int var2 = func_02053c6c((unsigned char*)var1);
    if (!var2) {
        return;
    }

    unsigned short var3[288];
    void* var4;
    int var5;
    int var6;
    int var7;

    var7 = (unsigned short)func_02083a50((struct Struct_02083a50*)var2, (short*)var3, 0x11f);
    var4 = func_0202ae24();
    var5 = 0;
    var6 = 0;
    struct Struct_ov017_021ccfd0 var8;
    var8.unknown_0_ = 0x10;
    var8.unknown_4_0_ = (unsigned char)arg0;

    while (var5 < var7) {
        int var9 = 0;
        for (; var9 < 7; var9++) {
            if (var7 <= var5 + var9) {
                break;
            }
            var8.unknown_6_[var9] = var3[var6 * 7 + var9];
        }
        var8.unknown_4_3_ = var9;
        func_0205e330(var4, &var8, 0);
        var5 += var8.unknown_4_3_;
        var6++;
    }
}
