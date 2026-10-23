#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020de6c8(void* arg0, void* arg1, void* arg2);
extern "C" int func_020df374(void* arg0, void* arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);

struct Struct_020dea64 {
    unsigned short unknown_0_;
    char unknown_2_[0x14 - 2];
    unsigned char unknown_14_;
};

// USA: func_020dea64
extern "C" ARM int func_020dea64(Struct_020dea64* arg0, void* arg1, void* arg2, void* arg3, void* arg4, short arg5) {
    memset(arg0, 0, 0x14);
    if (arg1 == 0 || arg2 == 0 || arg3 == 0 || arg4 == 0 || arg5 == 0) {
        return 0;
    }
    char var0[0x14];
    func_020de6c8(var0, arg2, arg3);
    int var1 = func_020df374(arg1, arg0, var0, arg4, arg5, 0, 0);
    unsigned char var2;
    if (var1 != 0 && arg0->unknown_0_ > 1) {
        var2 = 1;
    } else {
        var2 = 0;
    }
    arg0->unknown_14_ = var2;
    return var1;
}
