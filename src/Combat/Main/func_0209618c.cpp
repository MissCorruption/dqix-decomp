#include <globaldefs.h>

struct FindEntryById02096134Elem;
struct FindEntryById02096134Table;
extern "C" struct FindEntryById02096134Elem* func_02096134(struct FindEntryById02096134Table* t, int id);

struct Bits0209618c {
    unsigned int pad0 : 11;
    unsigned int field : 3;
    unsigned int pad1 : 18;
};

// USA: func_0209618c
extern "C" ARM unsigned char func_0209618c(struct FindEntryById02096134Table* t, int id) {
    struct FindEntryById02096134Elem* e = func_02096134(t, id);
    if (e != NULL) {
        return ((struct Bits0209618c*)e)->field;
    }
    return 0;
}
