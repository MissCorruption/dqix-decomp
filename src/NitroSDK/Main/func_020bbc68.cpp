#include <globaldefs.h>

struct Struct_020bbc68 {
    unsigned char unknown_0_[0x10];
};

struct Struct_020bbc68_2 {
    struct Struct_020bbc68* unknown_0_;  // 0x0
    char unknown_4_[0x04];              // 0x4..0x7
    unsigned short unknown_8_;        // 0x8
};

// USA: func_020bbc68
extern "C" ARM struct Struct_020bbc68* func_020bbc68(struct Struct_020bbc68_2* arg0) {
    return arg0->unknown_0_ + arg0->unknown_8_;
}
