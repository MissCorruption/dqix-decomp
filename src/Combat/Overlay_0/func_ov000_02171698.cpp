#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xdc
#else
#define REGION_OFFSET_0 0x9c
#endif


struct Struct_ov000_02171640 { char unknown_0_[REGION_OFFSET_0]; int unknown_9c_[0x42]; };

// USA: func_ov000_02171698
extern "C" ARM signed char func_ov000_02171698(struct Struct_ov000_02171640* arg0) {
    signed char var0 = 0;
    int var1;
    for (var1 = 0; var1 < 0x42; var1++) {
        if (arg0->unknown_9c_[var1] != 0) var0++;
    }
    return var0;
}
