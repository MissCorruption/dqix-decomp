#include <globaldefs.h>

struct Struct_02033ec8 {
    char unknown_0_[0xc6];
    short unknown_c6_;
};

// USA: func_02033ec8
extern "C" ARM int func_02033ec8(struct Struct_02033ec8* arg0) {
    return arg0->unknown_c6_ == 0;
}
