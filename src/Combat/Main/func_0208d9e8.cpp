#include <globaldefs.h>

struct Elem0208d9e8 {
    short h0;
    int w4;
    int w8;
    int wc;
    int w10;
    int w14;
};

struct List0208d994 {
    struct Elem0208d9e8* base;
    short count;
};

extern "C" struct Elem0208d9e8* func_0208d994(struct List0208d994* l, int key);

// USA: func_0208d9e8
extern "C" ARM int func_0208d9e8(struct List0208d994* list, int key) {
    struct Elem0208d9e8* e = func_0208d994(list, key);
    return e ? e->w4 : 0;
}
