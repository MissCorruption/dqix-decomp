#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_021564cc_336 = 0x144, Enum_ov000_021564cc_2384 = 0x8b8 };
#else
enum { Enum_ov000_021564cc_336 = 0x150, Enum_ov000_021564cc_2384 = 0x950 };
#endif
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern unsigned char data_ov000_02182ac5[];

struct Struct_ov000_021564cc {
    char unknown_0_[Enum_ov000_021564cc_2384];
    int unknown_950_;
};

// USA: func_ov000_021564cc
extern "C" ARM int func_ov000_021564cc(struct Random* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1 = (arg1 >= 0 && arg1 <= 3);
    if (!var1) return 0;
    GameObject* var2 = func_0200ff1c(var0, arg1);
    if (var2 == NULL) return 0;
    unsigned char* var3 = *(unsigned char**)((char*)var2 + Enum_ov000_021564cc_336);
    if (!func_02083b00(var3, 0xd0)) return 0;
    struct Struct_ov000_021564cc* var4 = *(struct Struct_ov000_021564cc**)((char*)var2 + Enum_ov000_021564cc_336);
    int var5 = var4->unknown_950_;
    int var6 = data_ov000_02182ac5[var5];
    int var7 = NextRandomMax(arg0, var6);
    return (var7 == 1);
}
