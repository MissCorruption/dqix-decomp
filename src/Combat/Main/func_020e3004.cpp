#include <globaldefs.h>

struct Bytes020e303c;
extern "C" void func_020e303c(struct Bytes020e303c* s);

struct SlotTable020e3004 {
    int elems[8];
    unsigned char flags[8];
};

// USA: func_020e3004
extern "C" ARM void func_020e3004(struct SlotTable020e3004 *p) {
    int *e = p->elems;
    unsigned char *f = p->flags;
    int i = 0;
    for (; i < 8; ) {
        func_020e303c((struct Bytes020e303c*)e);
        *f = 0;
        i++;
        e++;
        f++;
    }
}
