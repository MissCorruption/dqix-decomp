#include <globaldefs.h>

struct Struct_0208bf78_5;

struct Struct_0208dac4 {
    char unknown_0_[0x10];
    int unknown_10_;
    int unknown_14_;
};

extern "C" struct Struct_0208dac4* func_0208d994(struct Struct_0208bf78_5* arg0, int arg1);

// USA: func_0208dac4
extern "C" ARM int func_0208dac4(struct Struct_0208bf78_5* arg0, int arg1) {
    struct Struct_0208dac4* var0 = func_0208d994(arg0, arg1);
    return var0 ? var0->unknown_10_ : 0;
}
