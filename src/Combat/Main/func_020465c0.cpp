#include <globaldefs.h>

struct Struct_020465c0 {
#if defined(jpn)
    char unknown1_0_[0x780];
#else
    char unknown_0_[0x8b0];
#endif
    int unknown_8b0_[0x10];
};

// USA: func_020465c0
extern "C" ARM void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2) {
    if (arg1 < 0) {
        return;
    }
    if (arg1 < 0x10) {
        arg0->unknown_8b0_[arg1] = arg2;
    }
}
