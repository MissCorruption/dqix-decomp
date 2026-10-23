#include <globaldefs.h>

struct Struct_020d507c {
    unsigned char unknown_0_[0x4];
    unsigned short unknown_4_;
    unsigned char unknown_6_[0x12];
    unsigned short unknown_18_;
    unsigned char unknown_1a_[0x18];
    unsigned short unknown_32_;
};

// USA: func_020d5158
extern "C" ARM int func_020d5158(struct Struct_020d507c* arg0) {
    if (arg0->unknown_4_ > 0x70) return 0;
    if (arg0->unknown_18_ < 0xa || arg0->unknown_18_ > 0x3e8) return 0;
    if (arg0->unknown_32_ < 1) goto ret0;
    if (arg0->unknown_32_ <= 0xe) goto ret1;
ret0:
    return 0;
ret1:
    return 1;
}
