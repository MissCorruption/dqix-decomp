#include <globaldefs.h>

struct Entry02080fa8 { int value; };
struct List0207f6ac { struct Entry02080fa8* entries; short count; };
extern "C" struct Entry02080fa8* func_0207f6ac(struct List0207f6ac* list, int id);

struct Container02080fa8 { char pad[4]; struct List0207f6ac list; };

// USA: func_02080fa8
extern "C" ARM void func_02080fa8(struct Container02080fa8* obj, int id, int value) {
    struct Entry02080fa8* e = func_0207f6ac(&obj->list, id);
    if (e != NULL) {
        e->value = value;
    }
}
