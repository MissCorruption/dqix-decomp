#include <globaldefs.h>

struct Obj02079e60;
typedef int (*CmpFn02079e60)(void*);
extern "C" void* func_02079e60(struct Obj02079e60* obj, int key, CmpFn02079e60 cmp);

struct S020797e8;
extern "C" int func_020797e8(struct S020797e8* p);

// USA: func_02079e2c
extern "C" ARM void* func_02079e2c(char* p, int key) {
    void* r = func_02079e60((struct Obj02079e60*)p, key, (CmpFn02079e60)func_020797e8);
    if (r != 0) return r;
    return func_02079e60((struct Obj02079e60*)(p + 0xc), key, (CmpFn02079e60)func_020797e8);
}
