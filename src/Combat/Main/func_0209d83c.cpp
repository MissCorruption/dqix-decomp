#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);

extern "C" int* func_02094d6c(void);
extern "C" void* func_0209dccc(void);

struct Struct_0205faf4_7;
extern "C" void* func_02096134(struct Struct_0205faf4_7* arg0, int arg1);

// USA: func_0209d83c
extern "C" ARM int func_0209d83c(void* arg0) {
    struct Struct_0205faf4_7* var0;
    void* var1;
    int var2;
    int var3;

    var0 = (struct Struct_0205faf4_7*)func_02094d6c();
    if (var0 == NULL) return 0;

    if (func_0209dccc() == NULL) return 0;

    var2 = func_ov017_021d60f4(arg0);
    var1 = func_02096134(var0, var2);
    if (var1 == NULL) return 0;

    var3 = func_ov017_021d60f4((char*)arg0 + 8);
    if (var3 > 0xffff) var3 = 0xffff;
    *(unsigned short*)((char*)var1 + 0xa) = (unsigned short)var3;
    return 1;
}
