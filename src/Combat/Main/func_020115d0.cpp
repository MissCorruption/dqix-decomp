#include <globaldefs.h>

struct Struct_020115d0 {
#if defined(jpn)
    char unknown1_0_[0x6178];
#else
    char unknown_0_[0x63D8];
#endif
    unsigned short unknown_63d8_;
};

// USA: func_020115d0
extern "C" ARM int func_020115d0(struct Struct_020115d0* arg0) {
    return arg0->unknown_63d8_ != 0;
}
