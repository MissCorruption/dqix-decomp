#include <globaldefs.h>
void StoreValueIfPtrNotNull(int, int*);

extern "C" void func_020ce234(void);
extern "C" int func_020ce5b0(int, void(*)(void), int*);
extern void (*data_020f2298)(void);

// USA: func_020ce614
extern "C" ARM int func_020ce614(int arg0) {
    int var0;
    int var1 = func_020ce5b0(arg0, func_020ce234, &var0);
    if (var1 != 0) return var1;
    data_020f2298();
    return var0;
}
