#include <globaldefs.h>

struct Struct_020beed8 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };
struct Struct_020bc180_2 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };

extern "C" void func_020c01ec(struct Struct_020beed8* arg0);
extern "C" void func_020c0204(struct Struct_020bc180_2* arg0, int arg1, int arg2);

struct Struct_020bc4f8 {
    unsigned char unknown_0_[0x1c];   /* 0x00 */
    Struct_020beed8 unknown_1c_;         /* 0x1c */
    unsigned char unknown_2c_;         /* 0x2c */
    unsigned char unknown_2d_;           /* 0x2d */
    unsigned char unknown_2e_;           /* 0x2e */
    unsigned char unknown_2f_;           /* 0x2f */
    unsigned char unknown_30_[4];      /* 0x30 */
    unsigned short unknown_34_;          /* 0x34 */
    unsigned char unknown_36_[8];      /* 0x36 */
    unsigned short unknown_3e_;          /* 0x3e */
    unsigned char unknown_40_;           /* 0x40 */
    unsigned char unknown_41_;           /* 0x41 */
};

// USA: func_020bc610
extern "C" ARM void func_020bc610(struct Struct_020bc4f8* arg0) {
    arg0->unknown_2e_ = 0;
    arg0->unknown_2d_ = 0;
    arg0->unknown_2f_ = 0;
    arg0->unknown_34_ = 0;
    arg0->unknown_3e_ = 0;
    arg0->unknown_40_ = 0x7f;
    arg0->unknown_41_ = 0x7f;
    func_020c01ec(&arg0->unknown_1c_);
    func_020c0204((struct Struct_020bc180_2*)&arg0->unknown_1c_, 0x7f00, 1);
}
