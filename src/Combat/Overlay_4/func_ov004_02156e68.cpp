#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Obj021f9bc0;
struct Obj021f9bb0;
struct Obj9b6c;

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void**, int);
extern "C" unsigned short func_ov023_021f6f10(void*);
extern "C" unsigned short func_ov023_021f9bc0(Obj021f9bc0*);
extern "C" unsigned int func_ov023_021f9bb0(Obj021f9bb0*);
extern "C" unsigned int func_ov023_021f9b6c(Obj9b6c*, unsigned int, unsigned int);

// USA: func_ov004_02156e68
extern "C" ARM void* func_ov004_02156e68(void* a, int key) {
    void* base = func_ov011_021849c8(a);
    void* node = func_ov023_021f6880((void**)base, key);
    if (!node) return 0;
    if (func_ov023_021f6f10(node) != 7) return 0;
    unsigned short field2a = func_ov023_021f9bc0((Obj021f9bc0*)node);
    unsigned int idx = func_ov023_021f9bb0((Obj021f9bb0*)node);
    unsigned int entry = func_ov023_021f9b6c((Obj9b6c*)node, idx, field2a);
    return func_ov023_021f6880((void**)base, entry);
}
