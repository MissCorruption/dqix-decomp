#include <globaldefs.h>

struct Element020de650 {
    unsigned int v[8];
};

struct Container020de650 {
    unsigned short count;
    unsigned char pad[10];
    struct Element020de650* base;
};

typedef int (*KeyFunc020de650)(struct Element020de650*);

extern "C" int func_020de56c(void*);
extern "C" struct Element020de650* func_020de650(struct Container020de650* c, int key, KeyFunc020de650 fn);

struct Container020dedd0 {
    unsigned short count;
    unsigned char pad[10];
    struct Element020de650* base;
    unsigned char pad2[4];
    unsigned char useBinarySearch;
};

// USA: func_020dedd0
extern "C" ARM struct Element020de650* func_020dedd0(struct Container020dedd0* c, int key) {
    int i;
    struct Element020de650* elem;
    unsigned short count;
    if (key < 0) {
        return NULL;
    }
    if (c->useBinarySearch != 0) {
        return func_020de650((struct Container020de650*)c, key, (KeyFunc020de650)func_020de56c);
    }
    elem = c->base;
    if (elem == NULL || (KeyFunc020de650)func_020de56c == NULL) {
        elem = NULL;
        goto done;
    }
    count = c->count;
    if (count == 0) {
        elem = NULL;
        goto done;
    }
    for (i = 0; i < count; i++, elem++) {
        if (key == func_020de56c(elem)) {
            goto done;
        }
    }
    elem = NULL;
done:
    return elem;
}
