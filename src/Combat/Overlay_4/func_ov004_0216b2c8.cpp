#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov004_02153e20;

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(void* arg0);
extern "C" int func_ov023_021f9b30(struct Struct_ov004_02153e20* arg0, unsigned short arg1, unsigned int arg2, unsigned int arg3);

// USA: func_ov004_0216b2c8
extern "C" ARM void func_ov004_0216b2c8(void* arg0, int arg1, int arg2, int arg3) {
    void* var0 = func_ov011_021849c8(arg0);
    void* var1 = func_ov023_021f6880(var0, arg1);
    void* var2 = func_ov023_021f6880(var0, arg2);
    if (var1 == NULL || var2 == NULL) {
        return;
    }
    if (func_ov023_021f6f10(var1) != 7) {
        return;
    }
    if (!func_ov023_021f9b30((struct Struct_ov004_02153e20*)var1, arg2, (unsigned short)arg3, 0)) {
        return;
    }
}
