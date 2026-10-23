#include <globaldefs.h>

extern "C" void func_020c9288();

struct ClearFields0And8And0x20Struct;
extern "C" void func_020c93bc(struct ClearFields0And8And0x20Struct* p);

extern "C" void func_020dbc0c(void);
extern "C" void func_020c93d0(void*, int, int, void*, void*);

// USA: func_020db228
extern "C" ARM void func_020db228(void* obj) {
    func_020c9288();
    struct ClearFields0And8And0x20Struct* sub = (struct ClearFields0And8And0x20Struct*)((char*)obj + 0x14);
    func_020c93bc(sub);
    func_020c93d0(sub, 0xe1, 0x1e, (void*)func_020dbc0c, obj);
}
