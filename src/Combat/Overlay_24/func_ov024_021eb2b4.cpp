#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_ov000_0215e9fc(int arg0, short* arg1, int arg2, int arg3);

struct Struct_ov024_021eb2b4 { char unknown_0_[0x10]; int unknown_10_; };
struct Struct_ov024_021fe6d8 { short unknown_0_[4]; };
extern struct Struct_ov024_021fe6d8 data_ov024_021fe6d8;
struct Struct_ov024_021eb2b4_2 { unsigned char unknown_0_0_:3; unsigned char unknown_0_3_:1; unsigned char unknown_0_4_:4; };

// USA: func_ov024_021eb2b4
extern "C" ARM int func_ov024_021eb2b4(struct Struct_ov024_021eb2b4* arg0) {
    int var0 = 0;
    struct Struct_ov024_021fe6d8 var1 = data_ov024_021fe6d8;
    int var2 = func_ov000_0215e9fc(arg0->unknown_10_, var1.unknown_0_, 4, 1);
    for (int var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = GetCombatantByID(arg0->unknown_10_, var1.unknown_0_[var3]);
        struct Struct_ov024_021eb2b4_2* var5 = (struct Struct_ov024_021eb2b4_2*)((char*)var4->currentStats_ + 0x3b);
        if (var5->unknown_0_3_) var0++;
    }
    return var0;
}
