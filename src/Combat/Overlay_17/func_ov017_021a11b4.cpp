#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov017_0218f064_6;
struct Struct_ov017_021a11b4 {
    short unknown_0_;
    unsigned short unknown_2_;
};

// USA: func_ov017_021a11b4
extern "C" ARM void* func_ov017_021a11b4(Struct_ov017_0218f064_6* arg0) {
    GameResources* var0 = (GameResources*)arg0;
    for (int var1 = 0; var1 < 4; ++var1) {
        Struct_ov017_021a11b4* var2 = (Struct_ov017_021a11b4*)var0->substruct_array_12c8[var1].unknown_0_;
        if (var2->unknown_0_ < 0) return &var0->substruct_array_12c8[var1];
    }
    return NULL;
}
