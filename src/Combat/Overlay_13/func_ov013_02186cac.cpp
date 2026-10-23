#include <globaldefs.h>

struct Struct_0205d81c;
struct Elem_0205d81c {
    unsigned char pad0[0xac];
    short fac;
    short fae;
    unsigned char padb0[0xc];
    short fbc;
    short fbe;
};
extern "C" Elem_0205d81c* func_0205d8c4(Struct_0205d81c*);
extern "C" int func_0204c7e0(unsigned char*);

struct Container0205a3d0;
extern "C" void func_0205a370(Container0205a3d0*, int);
extern "C" unsigned char* func_0205a3d0(Container0205a3d0*, int);

struct Container0205a330;
extern "C" void func_0205a330(Container0205a330*, int);

extern "C" void func_0205ae8c(void*);

struct ListHeader02186cac {
    char pad0[0x3c];
    void* container;
};

// USA: func_ov013_02186cac
extern "C" ARM void func_ov013_02186cac(void* obj) {
#if defined(jpn)
    enum { regionalFlags = 0x644, regionalElem = 0x34, regionalMode = 0x5c8 };
#else
    enum { regionalFlags = 0x6bc, regionalElem = 0x38, regionalMode = 0x63c };
#endif
    unsigned char* o = (unsigned char*)obj;
    Elem_0205d81c* elem;
    short x, y;
    unsigned char mode;
    ListHeader02186cac* list;
    Container0205a3d0* container;
    unsigned char* entry;

    if (*(void**)(o + 0x18) == 0) return;
    if (!(o[regionalFlags] & 1)) return;

    elem = func_0205d8c4((Struct_0205d81c*)(o + regionalElem));
    if (elem == 0) return;
    if (!func_0204c7e0((unsigned char*)elem)) return;

    x = elem->fac * 8;
    y = elem->fae * 8;
    x += elem->fbc;
    y += elem->fbe;
    mode = o[regionalMode];

    if (mode != 3 && mode != 4) {
        x = x - 8;
        y = y - 2;
    } else {
        x = x - 8;
    }

    list = *(ListHeader02186cac**)(o + 0x18);
    container = (Container0205a3d0*)list->container;
    if (container == 0) return;

    func_0205a370(container, *(unsigned short*)(o + 0x1c));
    entry = func_0205a3d0(container, *(unsigned short*)(o + 0x1c));
    if (entry != 0) entry[0x15] |= 8;

    func_0205a330((Container0205a330*)container, *(int*)(o + 0x14));

    entry = func_0205a3d0(container, *(unsigned short*)(o + 0x1c));
    if (entry != 0) {
        *(short*)(entry + 4) = x;
        *(short*)(entry + 6) = y;
    }

    func_0205ae8c(*(void**)(o + 0x18));
}
