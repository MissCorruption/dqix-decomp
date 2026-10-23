#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif


struct Struct_020657c8 {
    unsigned char unknown_0_[IS_JPN ? 0x789 : 0x95b];
    unsigned char unknown_95b_;
};

struct Struct_020657c8_2 {
    unsigned char unknown_0_[IS_JPN ? 0x870 : 0x9a0];
    int unknown_9a0_;
    int unknown_9a4_;
    int unknown_9a8_;
    int unknown_9ac_;
    int unknown_9b0_;
    unsigned char unknown_9b4_[0x1000 - (IS_JPN ? 0x884 : 0x9b4)];
    struct Struct_020657c8 unknown_1000_;
};

// USA: func_020657c8
extern "C" ARM int func_020657c8(struct Struct_020657c8_2* arg0, int arg1) {
    unsigned char var0 = arg0->unknown_1000_.unknown_95b_;
    int var1 = 0;
    if (var0 & 4) {
        if (arg0->unknown_9a0_ == 0) {
            if (var0 & 8) {
                arg0->unknown_9b0_ = arg0->unknown_9b0_ + (IS_JPN ? 1 : arg1) * 0x8444;
                if (arg0->unknown_9b0_ >= 0x1f0000) {
                    arg0->unknown_9b0_ = 0x1f0000;
                    arg0->unknown_9ac_ = 0;
                    arg0->unknown_1000_.unknown_95b_ &= ~8;
                    arg0->unknown_1000_.unknown_95b_ |= 0x10;
                }
            } else if (var0 & 0x10) {
                arg0->unknown_9ac_ = arg0->unknown_9ac_ + arg1;
                if (arg0->unknown_9a8_ <= arg0->unknown_9ac_) {
                    arg0->unknown_9ac_ = arg0->unknown_9a8_;
                    arg0->unknown_1000_.unknown_95b_ &= ~0x10;
                    arg0->unknown_1000_.unknown_95b_ |= 0x20;
                }
            } else if (var0 & 0x20) {
                #if defined(jpn)
                arg1 = arg0->unknown_9b0_ - 0x44;
                arg1 -= 0x8400;
                arg0->unknown_9b0_ = arg1;
#else
                arg0->unknown_9b0_ = arg0->unknown_9b0_ - arg1 * 0x8444;
#endif
                if (arg0->unknown_9b0_ <= 0) {
                    arg0->unknown_9b0_ = 0;
                    arg0->unknown_1000_.unknown_95b_ = arg0->unknown_1000_.unknown_95b_ & ~0x20;
                }
            }
            var1 = 1;
        }
    }
    return var1;
}