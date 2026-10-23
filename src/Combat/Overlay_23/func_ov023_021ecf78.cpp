#include <globaldefs.h>
#include "GameState/GameState.h"


struct Struct_0205a254;
struct Struct_0205a330;
extern "C" void func_0205a42c(struct Struct_0205a254* arg0, int arg1, int arg2);
extern "C" void func_0205a370(struct Struct_0205a254* arg0, int arg1);
extern "C" void func_0205a330(struct Struct_0205a330* arg0, int arg1);
extern "C" void func_0205ae8c(void* arg0);

struct Struct_ov023_021ecf78 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    char unknown_8_[0x15 - 8];
    unsigned char unknown_15_;
};
extern "C" struct Struct_ov023_021ecf78* func_0205a3d0(struct Struct_0205a254* arg0, int arg1);

struct Struct_ov023_021ecf78_2 {
    char unknown_0_[0x424];
    void* unknown_424_;
    char unknown_428_[0x42c - 0x428];
    struct Struct_0205a254* unknown_42c_;
    char unknown_430_[0x438 - 0x430];
    unsigned short unknown_438_;
    char unknown_43a_[0x448 - 0x43a];
    short unknown_448_;
};

// USA: func_ov023_021ecf78
extern "C" ARM void func_ov023_021ecf78(struct Struct_ov023_021ecf78_2* arg0) {
    if ((arg0->unknown_438_ & 0x80) == 0) {
        return;
    }

    GameState* var0 = GameState::GetInstance();
    func_0205a42c(arg0->unknown_42c_, 0, 0x40);
    func_0205a370(arg0->unknown_42c_, 0);

    struct Struct_ov023_021ecf78* var1 = func_0205a3d0(arg0->unknown_42c_, 0);
    if (var1 != NULL) {
        var1->unknown_15_ |= 8;
    }

    unsigned int var2 = var0->GetTickCount();
    func_0205a330((struct Struct_0205a330*)arg0->unknown_42c_, var2);

    short var3 = arg0->unknown_448_;
    struct Struct_ov023_021ecf78* var4 = func_0205a3d0(arg0->unknown_42c_, 0);
    if (var4 != NULL) {
        var4->unknown_4_ = var3;
        var4->unknown_6_ = 0x24;
    }

    func_0205ae8c(arg0->unknown_424_);
}
