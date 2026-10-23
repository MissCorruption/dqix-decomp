#include <globaldefs.h>

struct Entry02080cc0 { char pad[0x13]; unsigned char flags; };
struct List0207f6ac { struct Entry02080cc0* entries; short count; };
extern "C" struct Entry02080cc0* func_0207f6ac(struct List0207f6ac* list, int id);

struct Container02080cc0 { char pad[4]; struct List0207f6ac list; };

// USA: func_02080cc0
extern "C" ARM void func_02080cc0(struct Container02080cc0* obj, int id, int value) {
    struct Entry02080cc0* e = func_0207f6ac(&obj->list, id);
    if (e != NULL) {
        e->flags = (e->flags & ~0xf0) | ((value & 0xf) << 4);
    }
}
