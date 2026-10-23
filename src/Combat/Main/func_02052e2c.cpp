#include <globaldefs.h>

struct Struct_02052e2c_2 {
    char unknown_0_[0x488];
    short unknown_488_[1];
};
struct Struct_02052e2c {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    struct Struct_02052e2c_2* unknown_150_;
};

// USA: func_02052e2c
extern "C" ARM short* func_02052e2c(struct Struct_02052e2c* arg0) {
    struct Struct_02052e2c_2* var0 = arg0->unknown_150_;
    return var0 ? &var0->unknown_488_[0] : NULL;
}
