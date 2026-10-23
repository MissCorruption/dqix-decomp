#include <globaldefs.h>

struct Struct_02052df8_2 {
    char unknown_0_[0x488];
    short unknown_488_[1];
};
struct Struct_02052df8 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    struct Struct_02052df8_2* unknown_150_;
};

// USA: func_02052df8
extern "C" ARM int func_02052df8(struct Struct_02052df8* arg0, int arg1) {
    struct Struct_02052df8_2* var0 = arg0->unknown_150_;
    return var0 ? var0->unknown_488_[arg1] : -1;
}
