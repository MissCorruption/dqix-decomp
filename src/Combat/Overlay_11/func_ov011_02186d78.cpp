#include <globaldefs.h>

extern "C" void* func_ov017_021b2164(void);

struct Struct_ov011_02186d78 {
    char unknown_0_[0x1cc];
    unsigned char unknown_1cc_;
};

// USA: func_ov011_02186d78
extern "C" ARM int func_ov011_02186d78(void) {
    Struct_ov011_02186d78* var0 = (Struct_ov011_02186d78*)func_ov017_021b2164();
    var0->unknown_1cc_ = 1;
    return 1;
}
