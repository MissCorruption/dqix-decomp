#include <globaldefs.h>

extern "C" int func_0205b734(void* arg0, int arg1, int arg2, short arg3, short arg4, int arg5);

struct Struct_020e23c0_2 {
    char unknown_0_[4];
    void* unknown_4_;
};
struct Struct_020e23c0 {
    char unknown_0_[4];
    struct Struct_020e23c0_2* unknown_4_;
};

// USA: func_020e23c0
extern "C" ARM int func_020e23c0(struct Struct_020e23c0* arg0, int arg1, int arg2, int arg3, short arg4, short arg5) {
    return func_0205b734(arg0->unknown_4_->unknown_4_, arg2, arg3, arg4, arg5, arg1);
}
