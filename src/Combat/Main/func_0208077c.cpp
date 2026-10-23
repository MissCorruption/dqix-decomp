#include <globaldefs.h>

struct List0207f6ac;

struct Entry0208077c {
    char pad[0x28];
    short field28;
};

extern "C" struct Entry0208077c* func_0207f6ac(struct List0207f6ac* list, int id);

// USA: func_0208077c
extern "C" ARM void func_0208077c(void* obj, int id, short value) {
    struct Entry0208077c* e = func_0207f6ac((struct List0207f6ac*)((char*)obj + 4), id);
    if (e != NULL) {
        e->field28 = value;
    }
}
