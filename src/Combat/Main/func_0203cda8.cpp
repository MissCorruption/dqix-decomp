#include <globaldefs.h>

struct Struct_0203cda8 {
    char unknown_0_[0x60];
    int unknown_60_;
    int unknown_64_;
};

// USA: func_0203cda8
extern "C" ARM void func_0203cda8(struct Struct_0203cda8* arg0, int arg1) {
    arg0->unknown_60_ = arg1;
    if ((unsigned int)(arg1 & 0xff) >= (unsigned int)-128) {
        arg0->unknown_60_ = (arg1 & ~0xff) + 0x100;
    } else {
        arg0->unknown_60_ = arg1 & ~0xff;
    }
    arg0->unknown_64_ = arg0->unknown_60_;
}
