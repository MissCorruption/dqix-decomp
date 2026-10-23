#include <globaldefs.h>

typedef void (*Type_020bd444_3)(int, int, int, int);
extern "C" int func_020be09c(unsigned int arg0, Type_020bd444_3 arg1, void* arg2, unsigned int arg3, int arg4);

extern "C" void func_020be4a4(int, int, int, int);
extern "C" void* func_020bd444(void);
extern "C" int func_020bd8ac(unsigned int arg0);
extern "C" void func_020bd8d4(unsigned int arg0, int arg1);

// USA: func_020be280
extern "C" ARM int func_020be280(unsigned int arg0, int arg1, int arg2) {
    int var0 = func_020bd8ac(arg0);
    if (var0 == 0) {
        void* var1 = arg2 ? func_020bd444() : 0;
        var0 = func_020be09c(arg0, func_020be4a4, var1, arg0, arg1);
        if (arg2 && var0 != 0) {
            func_020bd8d4(arg0, var0);
        }
    }
    return var0;
}
