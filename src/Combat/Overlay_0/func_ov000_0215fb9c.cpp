#include <globaldefs.h>

struct Struct_ov024_021fea1c { int unknown_0_; int unknown_4_; };
extern "C" int func_ov000_0215fb54(int arg0, int arg1, struct Struct_ov024_021fea1c* arg2);

// USA: func_ov000_0215fb9c
extern "C" ARM int func_ov000_0215fb9c(int arg0, short arg1) {
    struct Struct_ov024_021fea1c var0;
    int var1 = func_ov000_0215fb54(arg0, arg1, &var0);
    if (var1 > 0 || arg1 == 0xf2 || arg1 == 0x1da) {
        return 1;
    }
    return 0;
}
