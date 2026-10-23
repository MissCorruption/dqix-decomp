#include <globaldefs.h>

extern "C" int sprintf(int, int);

struct Struct_020e4798 {
    int unknown_0_;
    int unknown_4_;
};

// USA: func_020e4798
extern "C" ARM int func_020e4798(int arg0, struct Struct_020e4798* arg1) {
    if (arg1->unknown_4_ != 0) {
        return arg0 + sprintf(arg0, arg1->unknown_4_);
    }
    return arg0;
}
