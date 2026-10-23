#include <globaldefs.h>

struct List0207f0ac;

struct StatusEntry02081164 {
    char pad[0x15];
    unsigned char flags;
};

extern "C" struct StatusEntry02081164* func_0207f0ac(struct List0207f0ac* list, int id);

struct StatusOwner02081164 {
    char pad[0xc];
};

// USA: func_02081164
extern "C" ARM void func_02081164(struct StatusOwner02081164* owner, int id, int enable) {
    struct StatusEntry02081164* e = func_0207f0ac((struct List0207f0ac*)((char*)owner + 0xc), id);
    if (e == NULL) {
        return;
    }
    if (enable) {
        e->flags |= 0x2;
    } else {
        e->flags &= ~0x2;
    }
}
