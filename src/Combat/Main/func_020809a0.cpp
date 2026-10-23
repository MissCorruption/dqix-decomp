#include <globaldefs.h>

struct Entry809a0 {
    char pad[0xa];
    short valX;
    short valY;
    char pad2[0x30 - 0xe];
};

struct List0207f6ac {
    struct Entry809a0* entries;
    short count;
};

extern "C" struct Entry809a0* func_0207f6ac(struct List0207f6ac* list, int id);

struct Parent809a0 {
    char pad[4];
    struct List0207f6ac list;
};

// USA: func_020809a0
extern "C" ARM void func_020809a0(struct Parent809a0* obj, int id, short x, short y) {
    struct Entry809a0* e = func_0207f6ac(&obj->list, id);
    if (e != NULL) {
        e->valX = x;
        e->valY = y;
    }
}
