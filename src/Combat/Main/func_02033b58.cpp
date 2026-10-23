#include <globaldefs.h>

struct Struct_02033b58 {
    char unknown_0_[0xbe];
    unsigned char unknown_be_;
    unsigned char unknown_bf_;
};

// USA: func_02033b58
extern "C" ARM void func_02033b58(struct Struct_02033b58* arg0, unsigned char arg1) {
    arg0->unknown_bf_ = arg0->unknown_be_;
    arg0->unknown_be_ = arg1;
}
