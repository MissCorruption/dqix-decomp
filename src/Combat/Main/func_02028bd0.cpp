#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02028bd0_790 = 0x312 };
#else
enum { Enum_02028bd0_790 = 0x316 };
#endif

struct Struct_020fdd44 {
    unsigned short unknown_0_;
    char unknown_2_[Enum_02028bd0_790];
};

// USA: func_02028bd0
extern "C" ARM struct Struct_020fdd44* func_02028bd0(struct Struct_020fdd44* arg0, int arg1) {
    int var0;
    if (arg1 < 0) {
        return 0;
    }
    for (var0 = 0; var0 < 4; var0++) {
        if (arg1 == arg0[var0].unknown_0_) {
            return &arg0[var0];
        }
    }
    return 0;
}
