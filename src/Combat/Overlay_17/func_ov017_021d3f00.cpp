#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
struct Struct_0202b2f0;
extern "C" int func_0202c578(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void* func_0202ae24(void);
extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d3f00 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_0_ : 4;
    unsigned char unknown_2_4_ : 4;
    unsigned char unknown_3_;
    int unknown_4_;
};

struct Struct_ov017_021d3f00_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021d3f00 unknown_4_;
    unsigned char unknown_c_[8];
};

// USA: func_ov017_021d3f00
extern "C" ARM void func_ov017_021d3f00(Struct_02037d10* arg0, unsigned char arg1, unsigned char arg2) {
    if (!arg0) return;
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    if (func_0202c578((struct Struct_0202b2f0*)var1, 0)) return;
    void* var2 = func_0202ae24();

    struct Struct_ov017_021d3f00_2 var3;
    struct Struct_ov017_021d3f00* var4 = &var3.unknown_4_;
    var3.unknown_0_ = 0x3b;
    var4->unknown_0_ = arg0->unknown_1_;
    var4->unknown_1_ = arg0->unknown_3_;
    var4->unknown_2_0_ = arg1;
    var4->unknown_2_4_ = arg2;
    var4->unknown_4_ = arg0->unknown_48_;
    var4->unknown_3_ = func_020100b0(var0);
    func_0205e330(var2, &var3, 0);
}
