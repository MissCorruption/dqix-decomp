#include <globaldefs.h>

struct Struct_02061bd8 {
    unsigned char unknown_0_[0x56b];
    unsigned char unknown_56b_0_ : 4;
};

struct Struct_0205faf4_11 {
#if defined(jpn)
    unsigned char unknown_0_[0x144];
#else
    unsigned char unknown1_0_[0x150];
#endif
    struct Struct_02061bd8* unknown_150_;
};

// USA: func_02061bd8
extern "C" ARM int func_02061bd8(struct Struct_0205faf4_11* arg0) {
    struct Struct_02061bd8* var0 = arg0->unknown_150_;
    if (var0 != NULL) {
        return var0->unknown_56b_0_ != 0;
    }
    return 0;
}
