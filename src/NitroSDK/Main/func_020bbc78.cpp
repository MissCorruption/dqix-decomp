#include <globaldefs.h>

extern "C" int func_020bb984(unsigned short* arg0);

struct Struct_020bb964 { int unknown_0_; unsigned int unknown_4_; };
extern "C" unsigned short func_020bb964(Struct_020bb964* arg0, unsigned int arg1);

struct Struct_020bbc78 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
};

// USA: func_020bbc78
extern "C" ARM int func_020bbc78(Struct_020bbc78* arg0) {
    if (func_020bb984((unsigned short*)arg0)) return 0;
    arg0->unknown_8_ = func_020bb964((Struct_020bb964*)arg0, arg0->unknown_8_);
    arg0->unknown_c_--;
    return 1;
}
