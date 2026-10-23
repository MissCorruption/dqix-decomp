#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Obj020bc084;
extern "C" void func_020bc084(struct Obj020bc084** slot);

struct Obj020bc6fc;
extern "C" void func_020bc6fc(struct Obj020bc6fc* obj);

extern "C" void func_020bc658(SignedAllocatorList* list, SignedAllocatorHeader* what);
extern "C" SignedAllocatorHeader* func_020bc734(int priority);

struct SlotObj020bc454 {
    void* field0;
};

struct EntryContainer020bc454 {
    SignedAllocatorList list;
    char pad0c[0x18 - 0xc];
    unsigned int capacity;
    char pad1c[0x24 - 0x1c];
};
extern struct EntryContainer020bc454 data_0210f824[];

// USA: func_020bc454
extern "C" ARM void* func_020bc454(struct SlotObj020bc454* obj, int index, int priority) {
    struct EntryContainer020bc454* c = &data_0210f824[index];

    if (obj->field0 != NULL) {
        func_020bc084((struct Obj020bc084**)obj);
    }

    if (c->list.numElements >= c->capacity) {
        SignedAllocatorHeader* first = c->list.ElementAfter(NULL);
        if (first == NULL) {
            return NULL;
        }
        if (priority < *((unsigned char*)first + 0x3d)) {
            return NULL;
        }
        func_020bc6fc((struct Obj020bc6fc*)first);
    }

    {
        SignedAllocatorHeader* e = func_020bc734(priority);
        if (e == NULL) {
            return NULL;
        }
        func_020bc658(&c->list, e);
        *(void**)e = obj;
        obj->field0 = e;
        return e;
    }
}
