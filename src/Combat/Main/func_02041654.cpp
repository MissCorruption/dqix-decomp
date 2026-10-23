#include <globaldefs.h>

struct Struct_02041654 {
    char unknown_0_[0x54];
    int unknown_54_;
#if defined(jpn)
    char unknown_58_[0x26c];
#else
    char unknown1_58_[0x278];
#endif
    unsigned short unknown_2d0_;
    char unknown_2d2_[0x2];
    int unknown_2d4_;
};

// USA: func_02041654
extern "C" ARM int func_02041654(struct Struct_02041654* arg0) {
    if (arg0->unknown_2d0_ & 0x2) {
        return arg0->unknown_2d4_;
    }
    return arg0->unknown_54_;
}
