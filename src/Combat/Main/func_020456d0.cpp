#include <globaldefs.h>

struct Struct_020456d0 {
    #if defined(jpn)
    char unknown1_0_[0x870];
#else
    char unknown_0_[0x9a0];
#endif
    int unknown_9a0_;
    #if defined(jpn)
    char unknown_874_[0x17de - 0x874];
#else
    char unknown_9a4_[0x19ae - 0x9a4];
#endif
    signed char unknown_19ae_;
    unsigned char unknown_19af_;
    #if defined(jpn)
    char unknown_17e0_[0x17fb - 0x17e0];
#else
    char unknown_19b0_[0x19ca - 0x19b0];
#endif
    unsigned char unknown_19ca_;
};

// USA: func_020456d0
extern "C" ARM void func_020456d0(struct Struct_020456d0* arg0) {
    if (arg0->unknown_9a0_ == 1 || arg0->unknown_9a0_ == 3 || arg0->unknown_9a0_ == 2) {
        if (arg0->unknown_19ca_ == 0) return;
        arg0->unknown_19ae_ = arg0->unknown_19ae_ + 1;
        arg0->unknown_19ae_ = arg0->unknown_19ae_ & 0x1f;
        arg0->unknown_19af_ = (arg0->unknown_19ae_ > 0xf) ? 1 : 0;
    } else {
        arg0->unknown_19ae_ = 0;
        arg0->unknown_19af_ = 0;
    }
}

