#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x1e4
#else
#define REGION_OFFSET_0 0x1a4
#endif


struct Struct_ov000_02171968 { char unknown_0_[REGION_OFFSET_0]; int unknown_1a4_[0x93]; };

// USA: func_ov000_021719c0
extern "C" ARM short func_ov000_021719c0(struct Struct_ov000_02171968* arg0) {
    short var0 = 0;
    int var1;
    for (var1 = 0; var1 < 0x93; var1++) {
        if (arg0->unknown_1a4_[var1] != 0) var0++;
    }
    return var0;
}
