#include <globaldefs.h>
#include "NitroSDK/Cache.h"

struct Struct_020d2a48 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned int unknown_c_[5];
    struct {
        short unknown_0_[16];
        unsigned int unknown_20_;
    } unknown_20_[16];
    short unknown_260_[16];
};

// USA: func_020d2a48
extern "C" ARM void func_020d2a48(void* arg0) {
    Struct_020d2a48* var0 = (Struct_020d2a48*)arg0;
    int var1, var2;

    var0->unknown_4_ = 0;
    var0->unknown_8_ = 0;
    var0->unknown_a_ = 0;
    var0->unknown_0_ = 0;

    for (var1 = 0; var1 < 16; var1++) {
        var0->unknown_20_[var1].unknown_20_ = 0;
        for (var2 = 0; var2 < 16; var2++) {
            var0->unknown_20_[var1].unknown_0_[var2] = -1;
        }
    }

    for (var2 = 0; var2 < 16; var2++) {
        var0->unknown_260_[var2] = -1;
    }

    CleanInvalidateCacheRange(var0, sizeof(Struct_020d2a48));
}
