#include <globaldefs.h>

struct Struct_02000c9c_14 {
#if defined(jpn)
    char unknown1_0_[0x6176];
#else
    char unknown_0_[0x63D6];
#endif
    unsigned char unknown_63d6_;
};

// USA: func_020115c0
extern "C" ARM void func_020115c0(struct Struct_02000c9c_14* arg0) {
    arg0->unknown_63d6_ = 0;
}
