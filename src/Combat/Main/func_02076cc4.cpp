#include <globaldefs.h>

struct Struct_02076cc4 {
    char unknown_0_[0x16c];
    int unknown_16c_;
};

// USA: func_02076cc4
extern "C" ARM void func_02076cc4(struct Struct_02076cc4* arg0, int arg1) {
    arg0->unknown_16c_ = arg1;
}
