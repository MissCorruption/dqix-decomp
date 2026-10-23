#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021ccc34 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned char unknown_4_0_ : 3;
    unsigned char unknown_4_3_ : 1;
    unsigned char unknown_4_4_ : 4;
    unsigned char unknown_5_[15];
};

struct Struct_ov017_021ccc34_2 {
    char unknown_0_[0x464];
    unsigned char unknown_464_;
};

// USA: func_ov017_021ccc34
extern "C" ARM void func_ov017_021ccc34(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg0);
    if (!var1) return;
    int var2 = func_02053c6c((unsigned char*)var1);
    if (!var2) return;

    void* var3 = func_0202ae24();
    struct Struct_ov017_021ccc34 var4;
    unsigned char var5 = (unsigned char)arg0;
    var4.unknown_0_ = 0xe;
    var4.unknown_4_0_ = var5;
    var4.unknown_4_3_ = 0;
    int var6;
    for (var6 = 0; var6 < 15; var6++) {
        var4.unknown_5_[var6] = *(unsigned char*)((char*)var2 + 0x464 + var6);
    }
    func_0205e330(var3, &var4, 0);

    var4.unknown_4_3_ = 1;
    for (var6 = 0; var6 < 12; var6++) {
        struct Struct_ov017_021ccc34_2* var7 = (struct Struct_ov017_021ccc34_2*)((char*)var2 + (var6 + 15));
        var4.unknown_5_[var6] = var7->unknown_464_;
    }
    func_0205e330(var3, &var4, 0);
}
