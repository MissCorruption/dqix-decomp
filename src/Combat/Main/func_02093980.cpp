#include <globaldefs.h>

struct Struct_02093980 {
#if defined(jpn)
    char unknown_0_[11];
    unsigned char unknown_b_;
#else
    char unknown_0_[48];
#endif
    short unknown_30_;
    signed char unknown_32_;
    unsigned char unknown_33_;
};

#include "std_library_functions.h"

// USA: func_02093980
extern "C" ARM void func_02093980(char* arg0) {
    Struct_02093980* var0 = reinterpret_cast<Struct_02093980*>(arg0);
    memset(var0->unknown_0_, 0, sizeof(var0->unknown_0_));
    var0->unknown_30_ = -1;
    var0->unknown_32_ = -1;
    var0->unknown_33_ = 0;
}
