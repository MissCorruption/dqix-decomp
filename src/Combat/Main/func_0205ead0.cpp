#include <globaldefs.h>

extern "C" void func_0203aa80(void* obj, int arg2);
extern "C" int func_0203aa64(void* obj);
extern "C" int func_0203aa98(void*, int);

struct Obj_0205ead0 {
    char pad0[0xb8];
    int fb8;
    short fbc;
    char pad1[0xc0 - 0xbe];
    int fc0;
};

// USA: func_0205ead0
extern "C" ARM void func_0205ead0(struct Obj_0205ead0* a, int b, int c) {
    func_0203aa80(a, a->fb8);
    func_0203aa98(a, b);
    a->fbc = c;
    a->fc0 = func_0203aa64(a);
}
