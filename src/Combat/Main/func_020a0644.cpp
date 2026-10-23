#include <globaldefs.h>

#if defined(jpn)
#define func_020a0644 func_020a23bc
#endif

struct Struct_020a0644 {
    char unknown_0_[0x24];
    unsigned int unknown_24_0_ : 16;
    unsigned int unknown_26_0_ : 16;
};

// USA: func_020a0644
extern "C" ARM void func_020a0644(struct Struct_020a0644* arg0, unsigned int arg1) {
    unsigned int var0 = arg0->unknown_26_0_ + arg1;
    if (var0 > 0xffff) {
        var0 = 0xffff;
    }
    arg0->unknown_26_0_ = var0;
}
