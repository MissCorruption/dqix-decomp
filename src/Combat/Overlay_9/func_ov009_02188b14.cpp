// USA: func_ov009_02188b14
#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

struct Struct_ov009_0218a9bc {
    signed char unknown_0_[10];
};
#if defined(jpn)
extern Struct_ov009_0218a9bc data_ov009_0218b998;
#else
extern Struct_ov009_0218a9bc data_ov009_0218a9bc;
#endif

extern "C" ARM int func_ov009_02188b14(void* arg0, int arg1, int arg2) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
#if defined(jpn)
    Struct_ov009_0218a9bc var1 = data_ov009_0218b998;
#else
    Struct_ov009_0218a9bc var1 = data_ov009_0218a9bc;
#endif
    if (arg1 == 5) {
        if (var0->unknown_da3_) {
            var1.unknown_0_[0] = 1;
            var1.unknown_0_[1] = 0;
        } else {
            var1.unknown_0_[0] = 4;
            var1.unknown_0_[1] = 0;
            var1.unknown_0_[2] = 1;
            var1.unknown_0_[3] = 2;
            var1.unknown_0_[4] = 3;
        }
        return var1.unknown_0_[arg2];
    }
    if (arg1 == 3) {
        if (var0->unknown_da3_) {
            var1.unknown_0_[0] = 6;
            var1.unknown_0_[1] = 0;
            var1.unknown_0_[2] = 1;
            var1.unknown_0_[3] = 2;
            var1.unknown_0_[4] = 3;
            var1.unknown_0_[5] = 4;
            var1.unknown_0_[6] = 5;
        }
        return var1.unknown_0_[arg2];
    }
    return arg2;
}
