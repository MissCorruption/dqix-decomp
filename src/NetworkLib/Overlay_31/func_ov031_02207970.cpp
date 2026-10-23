#include <globaldefs.h>

struct Struct_ov031_0220527c;
extern "C" void* func_ov031_02205134(void*, void*, int);
extern "C" int func_ov031_0220527c(Struct_ov031_0220527c*, void*);
extern "C" void func_ov031_022079ac(void);

// USA: func_ov031_02207970
extern "C" ARM int func_ov031_02207970(void* arg0, void* arg1) {
    void* var0 = func_ov031_02205134((void*)func_ov031_022079ac, arg0, 1);
    if (var0 == NULL) return -33;
    *(void**)((char*)var0 + 0x10) = arg1;
    return func_ov031_0220527c((Struct_ov031_0220527c*)arg0, var0);
}
