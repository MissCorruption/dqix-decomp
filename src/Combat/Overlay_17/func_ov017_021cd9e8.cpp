#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void func_ov017_021cf730(int arg0, int arg1);
extern "C" void func_ov017_021c4fa0(int arg0, int arg1);
struct Struct_02039df4;
extern "C" void func_ov017_021cdaa0(void);

struct Struct_ov017_021cd9e8 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_0_ : 4;
    unsigned char unknown_4_4_ : 4;
    unsigned char unknown_5_[3];
    int unknown_8_;
};

// USA: func_ov017_021cd9e8
extern "C" ARM void func_ov017_021cd9e8(int arg0, struct Struct_ov017_021cd9e8* arg1, GameState* arg2, int arg3, struct Struct_0202c1a4* arg4) {
    signed char var0 = func_0202c1a4(arg4);
    if (arg1->unknown_4_0_ != var0) return;

    if (arg1->unknown_8_ & 0x1) {
        func_ov017_021cdaa0();
    }
    if (arg1->unknown_8_ & 0x20) {
        func_ov017_021cf730((signed char)arg1->unknown_4_4_, 0);
    }

    int var1 = -1;
    if (arg1->unknown_8_ & 0x10) {
        signed char var2 = func_0202c1a4(arg4);
        GameObject* var3 = arg2->GetGameObjectByIndex(var2);
        if (var3 != NULL) {
            var1 = ((Object3D*)((struct Struct_02039df4*)var3))->GetField06();
        }
    }

    if (!(arg1->unknown_8_ & 0x4)) return;
    func_ov017_021c4fa0(arg1->unknown_4_4_, var1);
}
