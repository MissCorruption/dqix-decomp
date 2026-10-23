#include <globaldefs.h>
#include <GameState/GameState.h>
#include "Combat/CombatantDisplay.h"
#include "NitroSDK/Matrix.h"
#include "Resource/GameResources.h"

extern "C" int func_02027bd0(int);
extern "C" void func_0202756c(void*, int, int, int, unsigned char, unsigned char, unsigned short, unsigned char, int, int);
#if defined(jpn)
#define data_020e7034 data_020e78d5
#endif
extern unsigned char data_020e7034[];

// USA: func_0201fdd0
extern "C" ARM void func_0201fdd0(Struct_020fdc60_2* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, unsigned int arg11) {
    int var0;
    int var1;
    void* var2;
    int var3;
    int var4;
    int var5;
    int var6;
    unsigned short var7;
    GameState* var8 = GameState::GetInstance();
    var2 = GetGameResources()->unknown_ptr_36d0;
    if (!var8->GetPartyMemberByIndex(arg2)) return;
    var5 = arg5;
    var6 = arg6;
    var1 = 0;
    var0 = arg3;
    var7 = data_020e7034[func_02027bd0(arg2)];
    do {
        var3 = arg11 * 12;
        var4 = arg2 * 3 + 20;
        int var9 = var0 % 10;
        var0 /= 10;
        int var10 = (int)(arg0->unknown_10_ + (float)var6);
        int var11 = var1 + var4;
        var11 += var3;
        func_0202756c(var2, (var5 + ((arg1 << 6) - (var1 << 3))) << 12, var10 << 12, (var9 + 13) & 0xff, var11 & 0xff, 0, var7, 255, 4096, 4096);
        ++var1;
    } while (var0 > 0);
    if (arg3 <= 0) return;
    fix32_t var12 = fix32_Divide(arg3 << 12, arg4 << 12);
    fix32_t var13 = fix32_Divide(0x31000, 0x20000);
    fix32_t var14 = FIX32_MULTIPLY(var12, var13);
    if (var14 < 40) var14 = 40;
    fix32_t var15 = (arg7 + (arg1 << 6)) << 12;
    fix32_t var16 = (int)(4096.0f * (arg0->unknown_10_ + (float)arg8));
    func_0202756c(var2, var15, var16, arg9 & 0xff, (arg2 + 44 + arg11 * 8) & 0xff, 0, 6, (arg2 + arg11 * 4) & 0xff, var14, 4096);
    func_0202756c(var2, var15, var16, arg10 & 0xff, (arg2 + 48 + arg11 * 8) & 0xff, 0, 6, 255, 4096, 4096);
}
