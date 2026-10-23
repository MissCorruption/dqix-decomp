#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d0d58 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    int unknown_4_;
    unsigned char unknown_8_[12];
};

// USA: func_ov017_021d0d58
extern "C" ARM void func_ov017_021d0d58(void) {
    Struct_ov017_021d0d58 var0;
    void* var1 = func_0202ae24();
    char* var2 = (char*)func_02010828(GameState::GetInstance());
    var0.unknown_0_ = 0x17;
    var0.unknown_4_ = *(int*)(var2 + 0x2000 + 0xc94);
    func_0205e330(var1, &var0, 0);
}
