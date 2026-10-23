#include <globaldefs.h>

struct Entry0207f6ac;
struct List0207f6ac;
extern "C" struct Entry0207f6ac* func_0207f6ac(struct List0207f6ac*, int);

// USA: func_02080828
extern "C" ARM void func_02080828(void* obj, int id, short* outX, short* outY) {
    struct Entry0207f6ac* e = func_0207f6ac((struct List0207f6ac*)((char*)obj + 0x4), id);
    if (e != NULL) {
        *outX = *(short*)((char*)e + 0x6);
        *outY = *(short*)((char*)e + 0x8);
    }
}
