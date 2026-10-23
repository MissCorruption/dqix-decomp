#include <globaldefs.h>

struct Entry02080f8c { int value; };
struct List0207f6ac { struct Entry02080f8c* entries; short count; };
extern "C" struct Entry02080f8c* func_0207f6ac(struct List0207f6ac* list, int id);

struct Container02080f8c { char pad[4]; struct List0207f6ac list; };

// USA: func_02080f8c
extern "C" ARM void func_02080f8c(struct Container02080f8c* obj, int id, int value) {
    struct Entry02080f8c* e = func_0207f6ac(&obj->list, id);
    if (e != NULL) {
        e->value = value;
    }
}
