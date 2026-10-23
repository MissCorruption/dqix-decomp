#include <globaldefs.h>

struct List0207f6ac;
extern "C" void func_0207f7cc(struct List0207f6ac* list, int id, int mask);

// USA: func_020806c4
extern "C" ARM void func_020806c4(void* obj, int id) {
    func_0207f7cc((struct List0207f6ac*)((char*)obj + 4), id, 2);
}
