#include <globaldefs.h>

extern "C" int sprintf(int, int);

struct Struct_020e46d8 {
    int unknown_0_;
    int unknown_4_;
};

// USA: func_020e46d8
extern "C" ARM int func_020e46d8(int arg0, struct Struct_020e46d8* arg1) {
    if (arg1->unknown_0_ != 0) {
        return arg0 + sprintf(arg0, arg1->unknown_0_);
    }
    return arg0;
}
