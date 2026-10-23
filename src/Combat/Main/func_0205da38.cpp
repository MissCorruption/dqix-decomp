#include <globaldefs.h>

struct Struct_0205bd20;
struct Struct_0205d81c;
struct Elem_0205d81c;

extern "C" int func_0205bd20(struct Struct_0205bd20* s, int key);
extern "C" struct Elem_0205d81c* func_0205d81c(struct Struct_0205d81c* s, int key);
extern "C" int func_0204c7cc(unsigned char* obj);

struct Obj_0205da38 {
    char pad0[0xb0];
    unsigned char fb0;
};

// USA: func_0205da38
extern "C" ARM int func_0205da38(struct Obj_0205da38* a, int key) {
    unsigned char* e;
    if (func_0205bd20((struct Struct_0205bd20*)((char*)a + 0x4), key) == 0) goto ret0;
    e = (unsigned char*)func_0205d81c((struct Struct_0205d81c*)a, a->fb0);
    if (e == NULL) goto ret0;
    if (func_0204c7cc(e) == 0) goto ret0;
    if (e[0xc5] & 2) return 1;
ret0:
    return 0;
}
