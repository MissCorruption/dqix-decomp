#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);

struct Struct_02109bf4_8 {
    unsigned char unknown_0_[0xc8];
    unsigned char unknown_c8_0_ : 1;
    unsigned char unknown_c8_1_ : 1;
    unsigned char unknown_c8_2_ : 1;
    unsigned char unknown_c8_3_ : 1;
};
extern struct Struct_02109bf4_8 data_02109bf4;

// USA: func_ov001_02163ab4
extern "C" ARM int func_ov001_02163ab4(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    data_02109bf4.unknown_c8_2_ = (var0 == 0);
    return 1;
}
