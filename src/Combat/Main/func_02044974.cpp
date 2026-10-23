#include <globaldefs.h>

struct Struct_0204483c {
    unsigned char* unknown_0_;
};

// USA: func_02044974
extern "C" ARM void func_02044974(struct Struct_0204483c* arg0, int arg1) {
    unsigned short var0 = arg1;
    unsigned char* var1 = arg0->unknown_0_;
    arg0->unknown_0_ = var1 + 1;
    *var1 = var0;
    var1 = arg0->unknown_0_;
    arg0->unknown_0_ = var1 + 1;
    *var1 = var0 >> 8;
}
