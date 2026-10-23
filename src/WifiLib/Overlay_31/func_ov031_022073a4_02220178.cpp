#include <globaldefs.h>


extern "C" ARM int func_ov031_022073a4(int arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov031_02220178
extern "C" THUMB int func_ov031_02220178(int arg0, int arg1, int arg2, int arg3, int arg4) {
    int var0 = func_ov031_022073a4(arg0, arg3, arg4, 0, arg1);
    if (var0 < 0) {
        var0 = -4;
    }
    return var0;
}
