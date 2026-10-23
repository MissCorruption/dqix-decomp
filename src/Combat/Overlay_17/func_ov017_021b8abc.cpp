#include <globaldefs.h>

#include "Combat/BufferedScriptResult.h"

struct Struct_ov017_021b7284 {
    short unknown_0_[3];
    unsigned char unknown_6_[2];
    unsigned char unknown_8_[3];
};

// USA: func_ov017_021b8abc
extern "C" ARM int func_ov017_021b8abc(int arg0, Struct_ov017_021b7284* arg1) {
    Struct_02074060 var0;
    if (arg0 <= -1) {
        goto fail;
    }
    if (!func_02074114(&var0, arg0)) {
        goto fail;
    }
    for (int var1 = 0; var1 < 3; var1++) {
        arg1->unknown_0_[var1] = var0.unknown_2_[var1];
        arg1->unknown_8_[var1] = (unsigned char)var0.unknown_8_[var1];
    }
    return 1;
fail:
    return 0;
}
