#include <globaldefs.h>

extern "C" void* func_020bd4b8(int index);
extern "C" int func_020bd8ac(unsigned int index);

struct Elem020c01ac { int f0; int f4; int f8; };
struct List020c01ac { char pad[0x1c]; unsigned int count; struct Elem020c01ac elems[1]; };
extern "C" struct Elem020c01ac *func_020c01ac(struct List020c01ac *list, int index);

extern "C" int func_020be924(void *obj, unsigned char b9, unsigned short h4, unsigned char b8,
    struct Elem020c01ac *entry, int val, int id, int index);

// USA: func_020be7a8
extern "C" ARM int func_020be7a8(void *obj, int id, int index) {
    void *p = func_020bd4b8(id);
    if (p == NULL) {
        return 0;
    }
    int rel = *(int*)p;
    int val = func_020bd8ac((unsigned int)rel);
    if (val == 0) {
        return 0;
    }
    struct Elem020c01ac *entry = func_020c01ac((struct List020c01ac*)val, index);
    if (entry == NULL) {
        return 0;
    }
    return func_020be924(obj, *(unsigned char*)((char*)entry + 0x9), *(unsigned short*)((char*)entry + 0x4),
        *(unsigned char*)((char*)entry + 0x8), entry, val, id, index);
}
