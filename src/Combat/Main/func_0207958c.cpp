#include <globaldefs.h>

struct ClearField0x17dBits0x38Struct {
    unsigned char pad[0x17d];
    unsigned char flags;
};

// USA: func_0207958c
extern "C" ARM void func_0207958c(struct ClearField0x17dBits0x38Struct* s) {
    s->flags &= ~0x38;
}
