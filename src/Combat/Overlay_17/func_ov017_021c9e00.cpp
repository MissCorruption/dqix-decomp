#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c9e00 {
    unsigned char unknown_0_0_ : 3;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 1;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    int unknown_c_;
};

struct Struct_ov017_021c9e00_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021c9e00 unknown_4_;
};

// USA: func_ov017_021c9e00
extern "C" ARM void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3) {
    void* var0 = func_0202ae24();
    GameState* var1 = GameState::GetInstance();

    int var2 = (arg0 >= 0) && (arg0 <= 3);
    if (!var2) {
        return;
    }

    GameObject* var3 = func_0200ff1c(var1, arg0);
    if (var3 == NULL) {
        return;
    }

    struct Struct_ov017_021c9e00_2 var4;
    struct Struct_ov017_021c9e00* var5 = &var4.unknown_4_;
    var4.unknown_0_ = 4;
    var5->unknown_0_0_ = arg0;
    var5->unknown_2_ = *(unsigned short*)(*(char**)((char*)var3 + 0x130) + 4);
    var5->unknown_6_ = *(unsigned short*)(*(char**)((char*)var3 + 0x130) + 6);
    var5->unknown_4_ = *(unsigned short*)(*(char**)((char*)var3 + 0x134) + 0x30);
    var5->unknown_8_ = *(unsigned short*)(*(char**)((char*)var3 + 0x134) + 0x32);
    var5->unknown_1_ = *(unsigned char*)(*(char**)((char*)var3 + 0x130) + 8);
    var5->unknown_c_ = *(int*)(*(char**)((char*)var3 + 0x130));
    var5->unknown_0_3_ = arg1;
    var5->unknown_0_4_ = arg2;
    var5->unknown_0_5_ = arg3;

    func_0205e330(var0, &var4, 0);
}
