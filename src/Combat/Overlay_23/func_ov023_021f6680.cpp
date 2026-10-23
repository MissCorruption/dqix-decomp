#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void);
extern "C" int func_ov023_021f809c(void*, void*);

// USA: func_ov023_021f6680
extern "C" ARM int func_ov023_021f6680(void* arg0, int arg1) {
    void* var0 = func_ov011_021849c8(arg0);
    void* var1 = func_ov023_021f6880(var0, arg1);
    if (var1 == NULL) return (int)var1;
    int var2 = func_ov023_021f6f10();
    if (var2 != 6) return var2;
    return func_ov023_021f809c(var1, arg0);
}
