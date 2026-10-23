#include <globaldefs.h>
extern "C" void* func_02094d6c(void);

extern "C" int func_ov017_021d60f4(void*);
struct Struct_0205faf4_7;
struct Struct_0205faf4_8;
extern "C" struct Struct_0205faf4_8* func_02096134(struct Struct_0205faf4_7*, int);

// USA: func_0209d260
extern "C" ARM int func_0209d260(void* arg0) {
    void* var0 = func_02094d6c();
    if (var0 == NULL) return 0;
    unsigned int* var1 = (unsigned int*)func_02096134((struct Struct_0205faf4_7*)var0, func_ov017_021d60f4(arg0));
    if (var1 == NULL) return 0;
    *var1 |= 0x4000;
    return 1;
}
