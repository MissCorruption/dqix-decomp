#include <globaldefs.h>

extern "C" int func_ov023_021f6f10(void*);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);

// USA: func_ov004_02156f6c
extern "C" ARM void* func_ov004_02156f6c(void* arg0, int arg1) {
    void* var0 = func_ov011_021849c8(arg0);
    void* var1 = func_ov023_021f6880(var0, arg1);
    if (var1) {
        if (func_ov023_021f6f10(var1) == 6) {
            return var1;
        }
    }
    return 0;
}
