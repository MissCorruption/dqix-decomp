#include <globaldefs.h>

struct Struct_0208978c {
    unsigned char unknown_0_[0x32];
    short unknown_32_;
    short unknown_34_;
};

// USA: func_0208978c
extern "C" ARM void func_0208978c(struct Struct_0208978c* arg0, short arg1) {
    arg0->unknown_34_ = arg0->unknown_32_;
    arg0->unknown_32_ = arg1;
}
