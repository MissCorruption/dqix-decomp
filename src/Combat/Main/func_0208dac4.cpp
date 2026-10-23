#include <globaldefs.h>

struct List0208d994;

struct ElemFields0208dac4 {
    char pad[0x10];
    int w10;
    int w14;
};

extern "C" struct ElemFields0208dac4* func_0208d994(struct List0208d994* l, int key);

// USA: func_0208dac4
extern "C" ARM int func_0208dac4(struct List0208d994* l, int key) {
    struct ElemFields0208dac4* e = func_0208d994(l, key);
    return e ? e->w10 : 0;
}
