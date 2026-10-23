#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov001_0215ad2c(int arg0);
extern "C" void* func_0203cf4c(void);
extern "C" void* func_0203df78(void* arg0, int arg1);
extern "C" void func_0200fd48(GameState* arg0, int arg1);

struct Struct_ov001_02160d14 {
    unsigned char unknown_0_[0xd4];
    unsigned char unknown_d4_0_ : 1;
};

// USA: func_ov001_02160d14
extern "C" ARM int func_ov001_02160d14(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0203cf4c();
    int var2 = func_ov017_021d60f4(arg0);
    int var3 = func_ov001_0215ad2c(func_ov017_021d60f4(arg0 + 0x8));
    if (var3 < 0xa0 || var3 > 0xbf) return 0;
    void* var4 = func_0203df78(var1, var2);
    if (var4 == 0) return 0;
    struct Struct_ov001_02160d14* var5 = *(struct Struct_ov001_02160d14**)((char*)var4 + 0x18);
    if (var5 == 0) return 0;
    var5->unknown_d4_0_ = 0;
    func_0200fd48(var0, var3);
    return 1;
}
