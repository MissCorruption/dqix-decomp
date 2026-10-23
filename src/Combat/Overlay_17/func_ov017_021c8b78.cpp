#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c8b78 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned char unknown_6_[14];
};

// USA: func_ov017_021c8b78
extern "C" ARM void func_ov017_021c8b78(unsigned short arg0) {
    GameState::GetInstance();
    void* var0 = func_0202ae24();

    Struct_ov017_021c8b78 var1;
    var1.unknown_0_ = 0x7a;
    var1.unknown_4_ = arg0;
    func_0205e330(var0, &var1, 0);
}
