#include <globaldefs.h>

struct Struct_02033f44 {
    char unknown_0_[0xe0];
    unsigned char unknown_e0_0_ : 6;
    unsigned char unknown_e0_6_ : 1;
    unsigned char unknown_e0_7_ : 1;
    char unknown_e1_[3];
    int unknown_e4_;
};

// USA: func_02033f44
extern "C" ARM int* func_02033f44(struct Struct_02033f44* arg0) {
    return arg0->unknown_e0_6_ ? &arg0->unknown_e4_ : 0;
}
