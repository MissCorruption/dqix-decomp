#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02079e60_60 = 52 };
#else
enum { Enum_02079e60_60 = 60 };
#endif


typedef int (*Type_02079e2c)(void*);

struct Struct_02079e2c {
    unsigned int unknown_0_0_ : 12;
    char* unknown_4_;
};

// USA: func_02079e60
extern "C" ARM void* func_02079e60(struct Struct_02079e2c* arg0, int arg1, Type_02079e2c arg2) {
    char* var0 = arg0->unknown_4_;
    int var1;
    int var2, var3, var4, var5;
    if (var0 == 0 || arg2 == 0) {
        return 0;
    }
    var1 = arg0->unknown_0_0_;
    if (var1 == 0) {
        return 0;
    }
    var2 = 0;
    var3 = var1 - 1;
    while (var2 <= var3) {
        var4 = var2 + ((var3 - var2 + 1) >> 1);
        var5 = arg2(var0 + var4 * Enum_02079e60_60);
        if (var5 == arg1) {
            return var0 + var4 * Enum_02079e60_60;
        }
        if (var5 > arg1) {
            var3 = var4 - 1;
        } else {
            var2 = var4 + 1;
        }
    }
    return 0;
}
