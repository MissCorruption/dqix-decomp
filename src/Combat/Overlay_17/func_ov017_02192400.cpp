#if defined(jpn)
enum { Enum_ov017_02192400_17500 = 0x41ac };
#else
enum { Enum_ov017_02192400_17500 = 0x445c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov017_021923e0(void* arg0, unsigned int arg1);

struct Struct_ov017_021d619e {
    short unknown_0_[8];
};
struct Struct_ov017_021d6186 {
    signed char unknown_0_[8];
};
extern Struct_ov017_021d619e data_ov017_021d619e;
extern Struct_ov017_021d6186 data_ov017_021d6186;

// USA: func_ov017_02192400
extern "C" ARM void func_ov017_02192400(unsigned char* arg0, int arg1) {
    int var0;
    if (arg1 >= 0 && arg1 <= 3) {
        var0 = 1;
    } else {
        var0 = 0;
    }
    if (!var0) {
        return;
    }

    GameState* var1 = GameState::GetInstance();
    Struct_ov017_021d619e var2 = data_ov017_021d619e;
    var2.unknown_0_[0] = arg1;
    var2.unknown_0_[1] = arg1 * 0xc + 0x13;
    var2.unknown_0_[2] = arg1 * 0xc + 0x14;
    var2.unknown_0_[3] = arg1 * 0xc + 0x15;
    var2.unknown_0_[4] = arg1 * 0xc + 0x1b;
    var2.unknown_0_[5] = arg1 * 0xc + 0x1c;
    var2.unknown_0_[6] = arg1 * 0xc + 0x1d;
    signed char* var3 = (signed char*)(arg0 + Enum_ov017_02192400_17500) + arg1 * 11;

    Struct_ov017_021d6186 var4 = data_ov017_021d6186;
    var4.unknown_0_[0] = var3[0];
    var4.unknown_0_[1] = var3[1];
    var4.unknown_0_[2] = var3[2];
    var4.unknown_0_[3] = var3[3];
    var4.unknown_0_[4] = var3[7];
    var4.unknown_0_[5] = var3[8];
    var4.unknown_0_[6] = var3[9];

    int var5;
    for (var5 = 0; var2.unknown_0_[var5] > -1; var5++) {
        GameObject* var6 = var1->GetGameObjectByIndex(var2.unknown_0_[var5]);
        if (var6 && var4.unknown_0_[var5] >= 0) {
            func_ov017_021923e0(var6, var4.unknown_0_[var5]);
        }
    }
}
