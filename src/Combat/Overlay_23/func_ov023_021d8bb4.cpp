#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov023_021d8bb4 {
    virtual int inline_ov023_021d8bb4();
    char unknown_4_[0x11a - 4];
    unsigned char unknown_11a_;
    unsigned char unknown_11b_;
};

typedef int (Struct_ov023_021d8bb4::*Type_ov023_021d8bb4)();

struct Struct_ov023_021fd510 {
    unsigned int unknown_0_[8];
};

extern "C" void func_0205d0e0(void* arg0, int arg1);
extern Struct_ov023_021fd510 data_ov023_021fd510;
extern Type_ov023_021d8bb4 data_020e6d5c;

// USA: func_ov023_021d8bb4
extern "C" ARM int func_ov023_021d8bb4(Struct_ov023_021d8bb4* arg0) {
    int var0 = GameState::GetInstance()->GetTickCount();
    if (!var0) var0 = 1;
    if (arg0->unknown_11b_ == 0xff) {
        func_0205d0e0((char*)arg0 + 0x20, var0);
    }
    Struct_ov023_021fd510 var1 = data_ov023_021fd510;
    *(Type_ov023_021d8bb4*)&var1.unknown_0_[6] = data_020e6d5c;
    Type_ov023_021d8bb4* var2 = (Type_ov023_021d8bb4*)&var1;
    if (var2[arg0->unknown_11a_] == 0) return 0;
    (arg0->*var2[arg0->unknown_11a_])();
    return 0;
}
