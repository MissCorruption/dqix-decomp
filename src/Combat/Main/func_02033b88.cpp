#include <globaldefs.h>

extern "C" int func_02033ce8(void* arg0, int arg1);

struct Struct_02010604 {
    char unknown_0_[0xbe];
    unsigned char unknown_be_;
    unsigned char unknown_bf_;
};

// USA: func_02033b88
extern "C" ARM int func_02033b88(struct Struct_02010604* arg0, int arg1) {
    arg0->unknown_bf_ = arg0->unknown_be_;
    arg0->unknown_be_ = (unsigned char)arg1;
    return func_02033ce8(arg0, arg1);
}
