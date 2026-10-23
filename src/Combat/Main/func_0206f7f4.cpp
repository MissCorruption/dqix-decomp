#include <globaldefs.h>

struct Struct_0206f7f4 {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_[1];
};

// USA: func_0206f7f4
extern "C" ARM int func_0206f7f4(struct Struct_0206f7f4 *arg0, int arg1) {
    if (arg1 < 0 || arg0->unknown_4_ <= arg1) {
        return -1;
    }
    return arg0->unknown_8_[arg1];
}
