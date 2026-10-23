#include <globaldefs.h>

struct Struct_02096f80 {
    char unknown_0_[12];
    int unknown_c_;
};

// USA: func_02096f80
extern "C" ARM int func_02096f80(Struct_02096f80 *arg0, char *arg1, int arg2) {
    int var0 = 1;
    int var1 = (int)(arg1 - (char *)0);
    if (var1 != -1) {
        if (arg0->unknown_c_ != 0) {
            var0 = 0;
        }
    }
    if (var0 == 0) {
        return arg0->unknown_c_ + var1;
    }
    return arg2;
}
