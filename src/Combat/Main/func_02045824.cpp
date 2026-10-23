#include <globaldefs.h>

struct Struct_02042c68_2 {
    char unknown_0_[0x186c];
    int unknown_186c_[4];
};

// USA: func_02045824
extern "C" ARM void func_02045824(struct Struct_02042c68_2* arg0, int arg1, int arg2) {
    int var0;
    if (arg2 == -1) {
        for (var0 = 0; var0 < 4; var0++) {
            arg0->unknown_186c_[var0] = arg1;
        }
    } else {
        arg0->unknown_186c_[arg2] = arg1;
    }
}
