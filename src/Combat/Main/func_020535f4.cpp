#include <globaldefs.h>

struct Struct_020535f4 {
#if defined(jpn)
    char unknown1_0_[0x178];
#else
    char unknown_0_[0x184];
#endif
    unsigned char unknown_184_;
};

// USA: func_020535f4
extern "C" ARM void func_020535f4(struct Struct_020535f4* arg0) {
    arg0->unknown_184_++;
}
