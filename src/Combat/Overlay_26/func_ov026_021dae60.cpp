#include <globaldefs.h>

struct Struct_ov026_021dae60 {
    char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x4c - 4];
#else
    char unknown1_50_[0x448 - 0x4c - 4];
#endif
};

struct Struct_ov026_021d8ba0_4 {
    char unknown_0_[0x958];
    struct Struct_ov026_021dae60 unknown_958_[4];
};

// USA: func_ov026_021dae60
extern "C" ARM void* func_ov026_021dae60(struct Struct_ov026_021d8ba0_4* arg0, int arg1) {
    int var0 = (arg1 >= 0 && arg1 <= 3);
    if (!var0) {
        goto fail;
    }
    for (int var1 = 0; var1 < 4; var1++) {
        if (arg0->unknown_958_[var1].unknown_4c_ == arg1) {
            return &arg0->unknown_958_[var1];
        }
    }
fail:
    return NULL;
}
