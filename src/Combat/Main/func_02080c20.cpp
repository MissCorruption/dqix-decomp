#include <globaldefs.h>

struct Obj2081;

struct Elem2081 {
    char unk[0xc5];
    unsigned char flags;
    char unk2[0x1a];
};

extern "C" struct Elem2081* func_02081da8(struct Obj2081* obj, int key);

// USA: func_02080c20
extern "C" ARM void func_02080c20(struct Obj2081* obj, int key) {
    struct Elem2081* elem = func_02081da8(obj, key);
    if (elem != NULL) {
        elem->flags &= ~0x20;
    }
}
