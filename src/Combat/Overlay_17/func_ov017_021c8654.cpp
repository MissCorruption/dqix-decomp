#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void func_0202ae18(void);
extern "C" void* func_02010828(GameState* arg0);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);

struct Struct_ov017_021c8654 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    int unknown_4_[4];
};

// USA: func_ov017_021c8654
extern "C" ARM void func_ov017_021c8654(void) {
    GameState* var0 = GameState::GetInstance();
    func_0202ae18();
    void* var1 = func_0202ae24();
    struct Struct_ov017_021c8654 var2;
    var2.unknown_0_ = 0x77;
    int* var3 = var2.unknown_4_;
    for (int var4 = 0; var4 < 4; var4++) {
        var3[var4] = -1;
    }

    unsigned char* var5 = (unsigned char*)func_02010828(var0);
    for (int var6 = 0; var6 < var5[0xf7c]; var6++) {
        unsigned char* var7 = var5 + var6;
        unsigned char var8 = var7[0xf78];
        GameObject* var9 = func_0200ff58(var0, var8);
        if (var9 == NULL) {
            var3[var8] = *(int*)(var5 + 0xf6c);
        }
    }

    func_0205e330(var1, &var2, 0);
}
