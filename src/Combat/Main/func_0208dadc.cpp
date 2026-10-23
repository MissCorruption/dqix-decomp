#include <globaldefs.h>

struct Struct_0208bf78_5;

struct Struct_0208dadc {
    char unknown_0_[0x14];
    int unknown_14_;
};

extern "C" struct Struct_0208dadc* func_0208d994(struct Struct_0208bf78_5* arg0, int arg1);

// USA: func_0208dadc
extern "C" ARM int func_0208dadc(struct Struct_0208bf78_5* arg0, int arg1) {
    struct Struct_0208dadc* var0 = func_0208d994(arg0, arg1);
    return var0 ? var0->unknown_14_ : 0;
}
