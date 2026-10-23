#include <globaldefs.h>

struct List0207f6ac;
struct TableA68;

struct Entry02081010 {
    char pad[0xe];
    short key;
};

extern "C" struct Entry02081010* func_0207f6ac(struct List0207f6ac* list, int id);
extern "C" void* func_02072a68(struct TableA68* table, int key);

// USA: func_02081010
extern "C" ARM void* func_02081010(void* obj, int id) {
    struct Entry02081010* e = func_0207f6ac((struct List0207f6ac*)((char*)obj + 0x4), id);
    if (e == NULL) {
        return NULL;
    }
    return func_02072a68(*(struct TableA68**)obj, e->key);
}
