#include <globaldefs.h>

struct Struct_020213fc {
#if defined(jpn)
    char unknown1_0_[0x91a];
#else
    char unknown_0_[0x9c6];
#endif
    unsigned char unknown_9c6_;
};

// USA: func_020213fc
extern "C" ARM void func_020213fc(struct Struct_020213fc* arg0, int arg1) {
    arg0->unknown_9c6_ = (arg1 != 0) ? 1 : 0;
}
