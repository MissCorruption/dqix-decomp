#include <globaldefs.h>

struct Obj0205e9f4;

extern "C" void func_0203a914(void* obj);
extern "C" void func_0205e9f4(struct Obj0205e9f4* obj, int state);
extern "C" void func_0205e944(void*, int);

struct Obj_0205e88c {
    char pad0[0xb0];
    int fb0;
    short fb4;
    char pad1[0xb8 - 0xb6];
    int fb8;
    short fbc;
    char pad2[0xc0 - 0xbe];
    int fc0;
    short fc4;
};

// USA: func_0205e88c
extern "C" ARM void func_0205e88c(struct Obj_0205e88c* a) {
    func_0203a914(a);
    a->fb0 = 0;
    a->fb4 = -1;
    a->fb8 = 0;
    a->fbc = -1;
    a->fc0 = 0;
    a->fc4 = -1;
    func_0205e944(a, 0x7f);
    func_0205e9f4((struct Obj0205e9f4*)a, 3);
}
