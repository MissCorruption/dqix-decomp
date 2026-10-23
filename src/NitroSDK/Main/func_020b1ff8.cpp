#include <globaldefs.h>

// USA: func_020b1ff8
extern "C" ARM void func_020b1ff8(unsigned short* arg0, int arg1, int arg2, int arg3, unsigned int arg4, unsigned int arg5) {
    unsigned short var0 = (unsigned short)(arg5 << 12);
    int var1;
    int var2 = 0;
    if (arg2 > 0) {
        do {
            unsigned short* var3 = arg0;
            var1 = 0;
            if (arg1 > 0) {
                do {
                    unsigned short var4 = (unsigned short)(arg4 | var0);
                    arg4++;
                    *var3++ = var4;
                    var1++;
                } while (var1 < arg1);
            }
            var2++;
            arg0 += arg3;
        } while (var2 < arg2);
    }
}
