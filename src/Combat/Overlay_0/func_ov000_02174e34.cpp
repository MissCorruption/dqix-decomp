#include <globaldefs.h>

extern "C" void* func_ov000_02161318(int, int);
extern "C" int func_ov000_02170c7c(void*);

// USA: func_ov000_02174e34
extern "C" ARM int func_ov000_02174e34(int arg0, int arg1) {
    void* var0 = func_ov000_02161318(arg0, arg1);
    if (!var0) return -1;
    return func_ov000_02170c7c(var0);
}
