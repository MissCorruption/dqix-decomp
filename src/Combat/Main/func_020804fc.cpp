#include <globaldefs.h>

struct List0207f0ac;
struct List0207f6ac;

struct SubList020804fc {
    short* keys;
    char pad[0x13 - 0x4];
    unsigned char count;
};

struct FlagEntry020804fc {
    char pad[0x2a];
    unsigned char flags;
};

extern "C" struct SubList020804fc* func_0207f0ac(struct List0207f0ac* list, int id);
extern "C" struct FlagEntry020804fc* func_0207f6ac(struct List0207f6ac* list, int id);

// USA: func_020804fc
extern "C" ARM void func_020804fc(void* obj, int id) {
    struct SubList020804fc* sub;
    unsigned char i;
    sub = func_0207f0ac((struct List0207f0ac*)((char*)obj + 0xc), id);
    if (sub == NULL) return;
    for (i = 0; i < sub->count; i++) {
        struct FlagEntry020804fc* e = func_0207f6ac((struct List0207f6ac*)((char*)obj + 4), sub->keys[i]);
        if (e != NULL) {
            e->flags &= ~4;
        }
    }
}
