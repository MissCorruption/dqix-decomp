#include <globaldefs.h>

struct Struct_0201099c_15 {
    char unknown_0_[0x50];
    unsigned int unknown_50_;
    unsigned short unknown_54_;
};

// USA: func_02086598
extern "C" ARM void func_02086598(struct Struct_0201099c_15* arg0, int arg1) {
    arg0->unknown_54_ |= 1 << arg1;
    arg0->unknown_50_ = arg1;
}
