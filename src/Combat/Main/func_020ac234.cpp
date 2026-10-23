#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020ac234_15040 = 0x3880 };
#else
enum { Enum_020ac234_15040 = 0x3ac0 };
#endif
#include "GameState/GameState.h"

struct Struct_020ac234 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 1;
    unsigned short unknown_2_1_ : 1;
    unsigned short unknown_2_2_ : 14;
};

// USA: func_020ac234
extern "C" ARM int func_020ac234(struct Struct_020ac234* arg0) {
    char* var0 = (char*)GameState::GetInstance() + Enum_020ac234_15040 + 0x4000;
    unsigned short* var1 = (unsigned short*)(var0 + 4);
    int var2;
    for (var2 = 0; var2 < 0x1d7; var2++) {
        struct Struct_020ac234* var3 = &arg0[var2];
        var3->unknown_0_ = (var1[var2] & 0xfffc) >> 2;
        var3->unknown_2_0_ = (var1[var2] & 2) >> 1;
        var3->unknown_2_1_ = var1[var2] & 1;
    }
    return 1;
}
