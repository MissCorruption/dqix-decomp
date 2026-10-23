#include <globaldefs.h>

extern "C" void* func_ov023_021f6524(void* ctx, int value);
struct Obj021f9bc0;
extern "C" unsigned short func_ov023_021f9bc0(struct Obj021f9bc0* o);
struct Obj021f9bb0;
extern "C" unsigned int func_ov023_021f9bb0(struct Obj021f9bb0* obj);
struct Obj9b6c;
extern "C" unsigned int func_ov023_021f9b6c(struct Obj9b6c* obj, unsigned int a, unsigned int b);

// USA: func_ov023_021f6558
extern "C" ARM void* func_ov023_021f6558(void* ctx, int value) {
    void* obj = func_ov023_021f6524(ctx, value);
    if (obj == 0) return (void*)-1;
    unsigned int b = func_ov023_021f9bc0((struct Obj021f9bc0*)obj);
    unsigned int a = func_ov023_021f9bb0((struct Obj021f9bb0*)obj);
    return (void*)func_ov023_021f9b6c((struct Obj9b6c*)obj, a, b);
}
