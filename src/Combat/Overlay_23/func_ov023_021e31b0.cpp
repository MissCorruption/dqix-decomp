#include <globaldefs.h>

struct Struct_ov017_021a1284_7 {
    #if defined(jpn)
    char unknown1_0_[0x4e4];
#else
    char unknown_0_[0x4e8];
#endif
    int unknown_4e8_;
    int unknown_4ec_[4];
};

// USA: func_ov023_021e31b0
extern "C" ARM void func_ov023_021e31b0(struct Struct_ov017_021a1284_7* arg0, unsigned char* arg1, int arg2) {
    int var0;
    if (arg1 == NULL || arg2 == 0) return;
    arg0->unknown_4e8_ = arg2;
    for (var0 = 0; var0 < 4; var0++) {
        arg0->unknown_4ec_[var0] = arg1[var0];
    }
}
