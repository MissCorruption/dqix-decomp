#include <globaldefs.h>

struct Struct_02000c9c_13 {
#if defined(jpn)
    char unknown1_0_[0x6176];
#else
    char unknown_0_[0x63D6];
#endif
    unsigned char unknown_63d6_;
};

// USA: func_020115b4
extern "C" ARM void func_020115b4(struct Struct_02000c9c_13* arg0, unsigned char arg1) {
    arg0->unknown_63d6_ = arg1;
}
