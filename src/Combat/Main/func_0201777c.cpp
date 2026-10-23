#include <globaldefs.h>

struct Struct_0201777c {
    char unknown_0_[0x368];
};

struct Struct_02017098 {
#if defined(jpn)
    char unknown_0_[0x496];
#else
    char unknown1_0_[0x476];
#endif
    unsigned char unknown_476_;
    char unknown_477_[0x1];
    struct Struct_0201777c* unknown_478_;
};

// USA: func_0201777c
extern "C" ARM struct Struct_0201777c* func_0201777c(struct Struct_02017098* arg0, int arg1) {
    struct Struct_0201777c* var0;
    if (arg1 < 0 || arg0->unknown_476_ <= arg1) {
        var0 = 0;
    } else {
        var0 = &arg0->unknown_478_[arg1];
    }
    return var0;
}
