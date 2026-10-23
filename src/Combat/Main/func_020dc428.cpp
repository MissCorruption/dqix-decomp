#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020dc428_336 = 0x144 };
#else
enum { Enum_020dc428_336 = 0x150 };
#endif

#include "GameState/GameState.h"

extern "C" void func_020dc4d0(signed char* arg0, signed char* arg1);

struct Struct_020dc428 {
    unsigned char unknown_0_[0x56b];
    unsigned char unknown_56b_0_ : 4;
};
struct Struct_020dc428_2 {
    unsigned char unknown_0_[Enum_020dc428_336];
    struct Struct_020dc428* unknown_150_;
};

struct Struct_020dc428_3 {
    signed char unknown_0_;
    signed char unknown_1_[7];
};

// USA: func_020dc428
extern "C" ARM int func_020dc428(void) {
    struct Struct_020dc428_3 var0;
    func_020dc4d0(var0.unknown_1_, &var0.unknown_0_);

    signed char var1 = 0;
    GameState* var2 = GameState::GetInstance();
    for (int var3 = 0; var3 < var0.unknown_0_; var3++) {
        GameObject* var4 = func_0200ff1c(var2, var0.unknown_1_[var3]);
        if (var4 != 0) {
            int var5;
            struct Struct_020dc428* var6 = ((struct Struct_020dc428_2*)var4)->unknown_150_;
            if (var6 != 0) {
                var5 = var6->unknown_56b_0_ != 0;
            } else {
                var5 = 0;
            }
            if (var5) {
                var1 = (signed char)(var1 + 1);
            }
        }
    }
    var0.unknown_0_ = var0.unknown_0_ - var1;
    return var0.unknown_0_;
}
