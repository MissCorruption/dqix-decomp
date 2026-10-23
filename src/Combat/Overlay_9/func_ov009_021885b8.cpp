// KEEP-NAME
// USA: func_ov009_021885b8
#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

extern "C" int func_ov023_021e5974(void*, void*, int, int, int);

struct Struct_ov009_02184a18;
struct Struct_ov009_021885b8 {
    unsigned char unknown_0_[0x568];
    short unknown_568_;
};

extern "C" ARM void func_ov009_021885b8(Struct_ov009_02184a18* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    if (var0->unknown_d9c_ & 2) {
        void* var1 = var0->unknown_7fc_;
        Struct_ov009_021885b8* var2 = (Struct_ov009_021885b8*)var0->unknown_d88_;
        func_ov023_021e5974(var1, var2, var2->unknown_568_, 0, 0);
        var0->unknown_d9c_ = (var0->unknown_d9c_ | 4) & ~2;
    }
}
