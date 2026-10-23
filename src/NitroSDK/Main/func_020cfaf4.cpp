#include <globaldefs.h>

struct Struct_020cfaf4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_020cfaf4
extern "C" ARM void func_020cfaf4(struct Struct_020cfaf4* arg0, int arg1) {
    if (arg1 < 0) arg1 = 0;
    if (arg1 > 86399) arg1 = 86399;
    arg0->unknown_8_ = arg1 % 60;
    arg1 /= 60;
    arg0->unknown_4_ = arg1 % 60;
    arg1 /= 60;
    arg0->unknown_0_ = arg1;
}
