#include <globaldefs.h>

struct Container0205a3d0;
struct Container0205a330;
struct AdjustedPosObj020e2604;

extern "C" void func_020e269c(void* obj);
extern "C" void func_0205a370(struct Container0205a3d0* c, int key);
extern "C" void func_0205a330(struct Container0205a330* c, int arg);
extern "C" void func_020e2604(struct AdjustedPosObj020e2604* self);

struct Elem020e263c {
    char pad[0x15];
    unsigned char flags15;
};
extern "C" struct Elem020e263c* func_0205a3d0(struct Container0205a3d0* c, int key);

struct Ctx020e263c {
    char pad[0x1c];
    unsigned short key;
    unsigned char flag;
    char pad2;
    struct Container0205a3d0* container;
};

// USA: func_020e263c
extern "C" ARM void func_020e263c(struct Ctx020e263c* obj, int value) {
    if (obj->container == NULL) {
        return;
    }
    func_020e269c(obj);
    func_0205a370(obj->container, obj->key);
    unsigned char flag = obj->flag;
    struct Elem020e263c* entry = func_0205a3d0(obj->container, obj->key);
    if (entry != NULL) {
        entry->flags15 |= flag;
    }
    func_0205a330((struct Container0205a330*)obj->container, value);
    func_020e2604((struct AdjustedPosObj020e2604*)obj);
}
