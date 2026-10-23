#include <globaldefs.h>

extern "C" int func_0205bea0(void* p);

struct Obj0205c6bc {
    char pad0[0x94];
    unsigned char flag94;
};

// USA: func_0205c6bc
extern "C" ARM int func_0205c6bc(Obj0205c6bc* obj) {
    int result = 0;
    if (obj->flag94) {
        result = func_0205bea0((char*)obj + 4);
    }
    return result;
}
