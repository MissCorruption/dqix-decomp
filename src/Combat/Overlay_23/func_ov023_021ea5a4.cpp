#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" unsigned char func_020114ec(char* arg0, void* arg1);
extern "C" GameObject* func_0200ff1c(GameState*, int);
extern "C" void func_ov017_021d6134(void*, int);

struct Struct_ov023_021ea5a4 { char unknown_0_[4]; unsigned short unknown_4_; };
struct Struct_ov023_021ea5a4_2 { unsigned short unknown_0_; char unknown_2_[0x130 - 2]; struct Struct_ov023_021ea5a4* unknown_130_; };

// USA: func_ov023_021ea5a4
extern "C" ARM int func_ov023_021ea5a4(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1[4];
    __clear(var1, 4);
    int var2 = func_020114ec((char*)var0, var1);
    int var3 = 0;
    for (int var4 = 0; var4 < var2; var4++) {
        struct Struct_ov023_021ea5a4_2* var5 = (struct Struct_ov023_021ea5a4_2*)func_0200ff1c(var0, var1[var4]);
        if (var5 == NULL) continue;
        if (var5->unknown_0_ & 0x1000) continue;
        int var6 = var5->unknown_130_->unknown_4_;
        if (var6 > 0) var3++;
    }
    func_ov017_021d6134(arg0, var3);
    return 1;
}
