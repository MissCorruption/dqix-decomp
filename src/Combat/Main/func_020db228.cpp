#include <globaldefs.h>

extern "C" void func_020c9288();

struct Struct_020c93bc;
extern "C" void func_020c93bc(struct Struct_020c93bc* arg0);

extern "C" void func_020dbc0c(void);
extern "C" void func_020c93d0(void*, int, int, void*, void*);

// USA: func_020db228
extern "C" ARM void func_020db228(void* arg0) {
    func_020c9288();
    struct Struct_020c93bc* var0 = (struct Struct_020c93bc*)((char*)arg0 + 0x14);
    func_020c93bc(var0);
    func_020c93d0(var0, 0xe1, 0x1e, (void*)func_020dbc0c, arg0);
}
