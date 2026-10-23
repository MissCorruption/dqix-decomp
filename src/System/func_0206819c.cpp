#include <globaldefs.h>

#include "std_library_functions.h"

struct Struct_0204254c {
    int unknown_0_;
    char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 1;
    signed char unknown_5_7_ : 1;
    char unknown_6_[2];
};

extern "C" Struct_0204254c *func_0204254c(int arg0, int arg1);
extern "C" void func_02067f5c(signed char *arg0, int arg1);

// USA: func_0206819c
extern "C" ARM void func_0206819c(const char *arg0, char *arg1, int arg2) {
    if (arg0 == NULL) return;
    sprintf(arg1, arg0);
    if (*arg0 == 0) return;
    Struct_0204254c *var0 = func_0204254c(reinterpret_cast<int>(arg0), arg2);
    if (var0 == NULL || !var0->unknown_5_7_) return;
    func_02067f5c(reinterpret_cast<signed char *>(arg1), var0->unknown_5_0_);
}
