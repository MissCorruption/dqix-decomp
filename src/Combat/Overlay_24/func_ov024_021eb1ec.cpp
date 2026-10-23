#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);

struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);

struct Struct_ov024_021da670_8;
extern "C" int func_ov024_021da9c8(struct Struct_ov024_021da670_8* arg0);

struct Struct_ov024_021de124;
extern "C" int func_ov024_021de25c(struct Struct_ov024_021de124* arg0);

extern "C" int func_020882f8(unsigned char* arg0);
extern "C" unsigned short func_0202053c(void* arg0);

struct Struct_ov024_021eb1ec {
    char unknown_0_[0x3a];
    unsigned char unknown_3a_;
    unsigned char unknown_3b_0_:3;
    unsigned char unknown_3b_3_:1;
    unsigned char unknown_3b_4_:4;
};

// USA: func_ov024_021eb1ec
extern "C" ARM int func_ov024_021eb1ec(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg1);
    if (var1 == NULL) {
        return 0;
    }
    if (((struct Struct_ov024_021eb1ec*)var1->currentStats_)->unknown_3a_ != 0) {
        ((struct Struct_ov024_021eb1ec*)var1->currentStats_)->unknown_3a_ = 0;
        return 0;
    }
    if (func_0202053c(var1) < 10) {
        return 0;
    }
    if (func_ov024_021da9c8((struct Struct_ov024_021da670_8*)var1)) {
        return 0;
    }
    if (func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var1)) {
        return 0;
    }
    if (func_ov024_021de25c((struct Struct_ov024_021de124*)var1)) {
        return 0;
    }
    if (func_020882f8((unsigned char*)var1->currentStats_)) {
        return 0;
    }
    if (func_02010088((struct Struct_02010088*)var1)) {
        return 0;
    }
    return ((struct Struct_ov024_021eb1ec*)var1->currentStats_)->unknown_3b_3_ == 0;
}
