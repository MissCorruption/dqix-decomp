#include <globaldefs.h>

struct Struct_020688fc {
    int unknown_0_;
    char unknown_4_[0xc];
    int unknown_10_;
};

// USA: func_020688fc
extern "C" ARM int func_020688fc(int arg0, struct Struct_020688fc* arg1) {
    int var0 = arg1->unknown_0_;
    int var1 = arg1->unknown_10_;
    if (var0 != 0 && var1 != 0) {
        return var0 != var1;
    }
    return 0;
}
