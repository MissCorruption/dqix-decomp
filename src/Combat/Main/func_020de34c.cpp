#include <globaldefs.h>

struct Struct_020de34c {
    int unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_0_ : 4;
};

// USA: func_020de34c
extern "C" ARM int func_020de34c(struct Struct_020de34c* arg0, int arg1, int arg2) {
    return arg1 <= (int)arg0->unknown_8_0_ && (int)arg0->unknown_8_0_ <= arg2;
}
