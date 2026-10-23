#include <globaldefs.h>
#include "Graphics/VRAMStaging.h"
#if defined(jpn)
#define data_020ee950 data_020eea14
#endif

struct Struct_020e1288;
extern "C" int func_020e1288(struct Struct_020e1288* arg0);

extern VRAMSubregion data_020ee950[];

struct Struct_020e23f4 { unsigned char unknown_0_0_ : 1; };

struct Struct_020e23f4_2 {
    char unknown_0_[0x30];
    int unknown_30_;
    int unknown_34_;
    char unknown_38_[0x6];
    unsigned char unknown_3e_;
    unsigned char unknown_3f_;
};

struct Struct_020e23f4_3 {
    unsigned char* unknown_0_;
    struct Struct_020e23f4_2* unknown_4_;
};

// USA: func_020e23f4
extern "C" ARM void func_020e23f4(struct Struct_020e23f4_3* arg0) {
    struct Struct_020e23f4_2* var0 = arg0->unknown_4_;
    if (var0 == 0 || arg0->unknown_0_ == 0) return;
    ((struct Struct_020e23f4*)&var0->unknown_3f_)->unknown_0_0_ = 1;
    var0 = arg0->unknown_4_;
    int var1 = var0->unknown_30_;
    int var2 = func_020e1288((struct Struct_020e1288*)var0);
    StageMemoryToVRAM(
        data_020ee950[var0->unknown_3e_],
        arg0->unknown_0_ + var1,
        var1,
        var0->unknown_34_ + var2,
        true, false);
}
