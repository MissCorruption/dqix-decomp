#include <globaldefs.h>

struct Struct_ov024_021e8bf0 {
    unsigned char unknown_0_0_:1;
    unsigned char unknown_0_1_:1;
    unsigned char unknown_0_2_:1;
    unsigned char unknown_0_3_:1;
    unsigned char unknown_0_4_:1;
    unsigned char unknown_0_5_:1;
    unsigned char unknown_0_6_:1;
    unsigned char unknown_0_7_:1;
};

// USA: func_ov024_021e8bf0
extern "C" ARM void func_ov024_021e8bf0(void* arg0, char* arg1, short* arg2) {
    struct Struct_ov024_021e8bf0* var0 = (struct Struct_ov024_021e8bf0*)(arg1 + 0x1c);
    if (var0->unknown_0_2_ || var0->unknown_0_1_ || var0->unknown_0_3_ || var0->unknown_0_4_ || var0->unknown_0_5_ || var0->unknown_0_6_) {
        *arg2 = 0;
    }
}
