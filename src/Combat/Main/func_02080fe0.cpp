#include <globaldefs.h>

struct List0207f6ac;
struct TableA68;

struct Entry02080fe0 {
    void* result;
};

extern "C" struct Entry02080fe0* func_0207f6ac(struct List0207f6ac* list, int id);
extern "C" void* func_02072a68(struct TableA68* table, int key);

// USA: func_02080fe0
extern "C" ARM void func_02080fe0(void* obj, int id, int key) {
    struct Entry02080fe0* e = func_0207f6ac((struct List0207f6ac*)((char*)obj + 0x4), id);
    if (e == NULL) {
        return;
    }
    e->result = func_02072a68(*(struct TableA68**)obj, key);
}
