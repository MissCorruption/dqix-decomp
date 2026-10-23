#include <globaldefs.h>

struct Struct_02079840 {
    char unknown_0_[8];
    int unknown_8_;
};

// USA: func_02079840
extern "C" ARM int func_02079840(Struct_02079840 *arg0, char *arg1, int arg2) {
    int var0 = 1;
    int var1 = (int)(arg1 - (char *)0);
    if (var1 != -1) {
        if (arg0->unknown_8_ != 0) {
            var0 = 0;
        }
    }
    if (var0 == 0) {
        return arg0->unknown_8_ + var1;
    }
    return arg2;
}
