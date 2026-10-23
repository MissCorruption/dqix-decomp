#include <globaldefs.h>

struct Struct_ov031_0223ea84 {
    char unknown_0_[4];
    int unknown_4_;
    int unknown_8_;
    char unknown_c_[0xc];
    int unknown_18_;
};

// USA: func_ov031_022412e8
extern "C" ARM int func_ov031_022412e8(Struct_ov031_0223ea84* arg0, int* arg1) {
    if (arg0->unknown_8_ == 0 || arg0->unknown_4_ == 0) {
        return -1;
    }
    *arg1 = arg0->unknown_18_;
    return arg0->unknown_4_;
}
