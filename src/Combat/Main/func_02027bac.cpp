#include <globaldefs.h>

struct Struct_02027bac {
#if defined(jpn)
    unsigned char unknown1_0_[0x9cb];
#else
    unsigned char unknown_0_[0xa97];
#endif
    unsigned char unknown_a97_;
};

// USA: func_02027bac
extern "C" ARM void func_02027bac(struct Struct_02027bac* arg0, unsigned char arg1) {
    arg0->unknown_a97_ |= arg1;
}
