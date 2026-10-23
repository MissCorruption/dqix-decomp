#include <globaldefs.h>

struct List0208d994;

struct ElemFields0208dadc {
    char pad[0x14];
    int w14;
};

extern "C" struct ElemFields0208dadc* func_0208d994(struct List0208d994* l, int key);

// USA: func_0208dadc
extern "C" ARM int func_0208dadc(struct List0208d994* l, int key) {
    struct ElemFields0208dadc* e = func_0208d994(l, key);
    return e ? e->w14 : 0;
}
