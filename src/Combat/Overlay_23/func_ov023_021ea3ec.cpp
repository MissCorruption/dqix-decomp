#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" unsigned char func_02011494(char* arg0, void* arg1);
extern "C" void func_ov017_021d6134(void*, int);

struct Struct_ov023_021ea3ec { char unknown_0_[0x130]; unsigned short* unknown_130_; };

// USA: func_ov023_021ea3ec
extern "C" ARM int func_ov023_021ea3ec(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1[4];
    __clear(var1, 4);
    unsigned char var2 = func_02011494((char*)var0, var1);
    int var3 = 0;
    for (int var4 = 1; var4 < var2; var4++) {
        unsigned char var5 = var1[var4];
        struct Struct_ov023_021ea3ec* var6 = (struct Struct_ov023_021ea3ec*)func_0200ff1c(var0, var5);
        if (var6) {
            int var7 = *(unsigned short*)((char*)var6->unknown_130_ + 4);
            if (var7 <= 0) var3++;
        }
    }
    func_ov017_021d6134(arg0, var3);
    return 1;
}
