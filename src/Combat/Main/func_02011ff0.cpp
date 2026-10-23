#include <globaldefs.h>
extern "C" struct S02011ff0* func_020108f0(void*, int);

struct S02011ff0 {
    char pad[0x56b];
    unsigned char f : 4;
};

// USA: func_02011ff0
extern "C" ARM int func_02011ff0(void* base, int index) {
    struct S02011ff0* p = func_020108f0((void*)(base), (int)(index));
    return p ? p->f : 0;
}
