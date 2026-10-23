#include <globaldefs.h>
extern "C" void func_0204c804(void*);

struct Elem2081;

struct Obj2081 {
#if defined(jpn)
    char pad0[0x24];
#else
    char pad0[0x30];
#endif
    struct Elem2081* elems;
};

extern "C" struct Elem2081* func_02081da8(struct Obj2081* obj, int key);

// USA: func_0207fdcc
extern "C" ARM void func_0207fdcc(struct Obj2081* obj, int key) {
    struct Elem2081* e;
    if (obj->elems == NULL) return;
    e = func_02081da8(obj, key);
    if (e == NULL) return;
    func_0204c804((void*)(e));
}
