#include <globaldefs.h>

struct Struct_020688e4 {
    char unknown_0_[0x19d6];
    unsigned char unknown_19d6_;
};

// USA: func_020688e4
extern "C" ARM int func_020688e4(int arg0, struct Struct_020688e4* arg1) {
    return arg1->unknown_19d6_ == 0;
}
