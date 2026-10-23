#include <globaldefs.h>

typedef unsigned short Type_020b0a1c;

extern "C" void func_020b1ff8(void *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

// USA: func_020b1f48
extern "C" ARM void func_020b1f48(void *arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
    if (arg5 <= 32) {
        void *var0 = (Type_020b0a1c *)arg0 + (arg5 * arg4 + arg3);
        func_020b1ff8(var0, arg1, arg2, arg5, arg6, arg7);
    } else {
        const int var1 = arg3 + arg1;
        const int var2 = arg4 + arg2;
        const Type_020b0a1c var3 = (Type_020b0a1c)(arg7 << 12);
        Type_020b0a1c *const var4 = (Type_020b0a1c *)arg0;
        int var5, var6;

        for (var6 = arg4; var6 < var2; ++var6) {
            const int var7 = (var6 < 32) ? var6 : var6 + 32;
            Type_020b0a1c *var8 = var4 + var7 * 32;

            for (var5 = arg3; var5 < var1; ++var5) {
                const int var9 = (var5 < 32) ? var5 : var5 + 32 * 31;
                *(var8 + var9) = (Type_020b0a1c)(var3 | arg6++);
            }
        }
    }
}
