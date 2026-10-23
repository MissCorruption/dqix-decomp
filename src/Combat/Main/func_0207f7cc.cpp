#include <globaldefs.h>

struct List0207f6ac;

struct FlagEntry0207f7cc {
    char pad[0x2a];
    unsigned char flags;
};

extern "C" struct FlagEntry0207f7cc* func_0207f6ac(struct List0207f6ac* list, int id);

// USA: func_0207f7cc
extern "C" ARM void func_0207f7cc(struct List0207f6ac* list, int id, int mask) {
    struct FlagEntry0207f7cc* e = func_0207f6ac(list, id);
    if (e != NULL) {
        e->flags &= ~mask;
    }
}
