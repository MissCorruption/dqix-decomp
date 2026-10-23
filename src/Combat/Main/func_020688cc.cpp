#include <globaldefs.h>

struct Struct_020688cc {
    char unknown_0_[0x19d5];
    unsigned char unknown_19d5_;
};

// USA: func_020688cc
extern "C" ARM int func_020688cc(int arg0, struct Struct_020688cc* arg1) {
    return arg1->unknown_19d5_ == 0;
}
