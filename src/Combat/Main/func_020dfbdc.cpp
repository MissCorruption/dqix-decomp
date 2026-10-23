#include <globaldefs.h>

extern "C" int func_020dfbfc(void* arg0, int arg1, int arg2);

struct Struct_020dfbdc {
    int unknown_0_;
    int unknown_4_;
};

// USA: func_020dfbdc
extern "C" ARM int func_020dfbdc(void* arg0, struct Struct_020dfbdc* arg1) {
    arg1->unknown_4_ = func_020dfbfc(arg0, arg1->unknown_4_, 0);
    return 1;
}
