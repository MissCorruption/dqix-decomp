#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" int func_020965c0(Struct_0208cb08*, int);
#endif

// USA: func_02094b34
extern "C" ARM void func_02094b34(Struct_0208cb08* arg0, int arg1, int arg2, unsigned char arg3,
                               const volatile unsigned char arg4) {
#if defined(jpn)
    if (arg0->unknown_34_ >= 0) return;
    volatile int var0[2];
    var0[1] = arg2;
    var0[0] = arg1;
    unsigned char var1 = arg4;
    if (func_020965c0(arg0, arg1)) {
        var0[0] = -1;
        arg3 = 1;
    }
    if (func_020965c0(arg0, var0[1])) {
        var0[1] = -1;
        var1 = 1;
    }
    for (unsigned char var2 = 0; var2 < 2; ++var2) {
        if (var0[0] < 0) {
            var0[0] = var0[1];
            arg3 = var1;
            var0[1] = -1;
            var1 = 1;
        }
    }
    if (var0[0] < 0 && var0[1] < 0) return;
    func_02094ab0(arg0);
    arg0->unknown_34_ = var0[0];
    arg0->unknown_38_ = var0[1];
    arg0->unknown_56_ = 0;
    arg0->unknown_57_ = 0;
    arg0->unknown_61_ = arg3;
    arg0->unknown_62_ = var1;
#endif
}
