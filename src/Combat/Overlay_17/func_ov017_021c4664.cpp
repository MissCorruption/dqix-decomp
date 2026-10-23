#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c4664 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    float unknown_c_;
};

struct Struct_ov017_021c4664_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021c4664 unknown_4_;
};

// USA: func_ov017_021c4664
extern "C" ARM void func_ov017_021c4664(int arg0, Vector3i arg1, short arg2) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae24();
    Struct_ov017_021c4664_2 var2;
    Struct_ov017_021c4664* var3 = &var2.unknown_4_;
    var2.unknown_0_ = 0x36;
    var3->unknown_0_ = arg0;
    var3->unknown_2_ = arg1.x >> 10;
    var3->unknown_4_ = arg1.y >> 10;
    var3->unknown_6_ = arg1.z >> 10;
    var3->unknown_8_ = arg2;
    var3->unknown_c_ = var0->GetDayTimer();
    func_0205e330(var1, &var2, 0);
}
