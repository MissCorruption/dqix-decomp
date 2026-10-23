#include <globaldefs.h>

struct Obj2081;
struct Elem2081 { char pad[0xc5]; unsigned char flags; };
extern "C" struct Elem2081* func_02081da8(struct Obj2081* obj, int key);

// USA: func_02080c3c
extern "C" ARM int func_02080c3c(struct Obj2081* obj, int key) {
    struct Elem2081* e = func_02081da8(obj, key);
    if (e != NULL) {
        return (e->flags & 0x20) == 0;
    }
    return 0;
}
