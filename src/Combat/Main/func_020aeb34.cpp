#include <globaldefs.h>
#include "Resource/GameResources.h"
#include "Combat/EntryGetterTypes.h"

struct Obj0201b600 { char pad0[6]; short angle; };
struct EntryList_203dce4;

struct HeadNode02046b24;
struct GameResources;
struct Struct_203cec4;
struct Struct_0203fc5c;
struct Node020406f8;
struct Vec3_020406f8 { int x; int y; int z; };
struct Node02040774;
struct Node020409b0;
struct Obj02040b2c;
struct EntryPositionState { char unknown0[0x10]; int x; int y; int z; short value; };
struct Vec3 { int x; int y; int z; };

extern "C" void* func_02012fe4(void);
extern "C" int rand(void);
extern "C" long long func_020c3260(int phase);
extern "C" long long func_020c32f8(int phase);
extern "C" float func_0200c700(long long);
extern "C" void Vector3fix_Add(struct Vec3* a, struct Vec3* b, struct Vec3* out);
extern "C" struct EntryList_203dce4* func_0203cf4c();
extern "C" int func_02046b24(struct HeadNode02046b24**);
extern "C" struct Obj0201b600* func_0201b600(Obj0201b600*, int, unsigned short);
extern "C" struct Entry_203dce4* func_0203dce4(struct EntryList_203dce4*, int);
extern "C" void func_02040648(unsigned int*);
extern "C" int func_02046b08(void**);
int IsMainBrightnessTransitionActive(struct GameResources*);
int GetMainBrightnessTransitionState(struct GameResources*);
extern "C" void func_02040774(struct Node02040774*, int, int, int);
extern "C" void func_02040b2c(struct Obj02040b2c*, int);
extern "C" void func_020406f8(struct Vec3_020406f8*, struct Node020406f8*);
extern "C" void func_0203cec4(struct Struct_203cec4*, int);
extern "C" void func_0203fc5c(struct Struct_0203fc5c*, float);
extern "C" void func_020409b0(struct Node020409b0*, int);

// USA: func_020aeb34
extern "C" ARM void func_020aeb34(void) {
    struct EntryList_203dce4* list;
    struct Entry_203dce4* arr[4];
    GameResources* base;
    struct Obj0201b600* elem;
    int i;
    struct HeadNode02046b24** head;

    elem = (struct Obj0201b600*)func_02012fe4();
    list = func_0203cf4c();
    base = GetGameResources();
    head = (HeadNode02046b24**)base->unknown_ptr_array_36fc[0];
    func_02046b24(head);
    elem = func_0201b600(elem, 0, 0x2a);

    if (elem == NULL) return;

    for (i = 0; i < 4; i++) {
        arr[i] = func_0203dce4(list, base->orbitEntryIds[i]);
        if (arr[i] == NULL) return;
        func_02040648((unsigned int*)arr[i]);
    }

    if (func_02046b08((void**)head) == 0 && IsMainBrightnessTransitionActive(base) == 0 &&
        (GetMainBrightnessTransitionState(base) == 2 ||
         GetMainBrightnessTransitionState(base) == 3)) {
        if (elem->angle != 0) return;
        for (int j = 0; j < 4; j++) {
            EntryPositionState* s = (EntryPositionState*)func_02040538((S02040538*)arr[j]);
            func_02040774((struct Node02040774*)arr[j], s->x, s->y, s->z);
            func_02040b2c((struct Obj02040b2c*)arr[j], s->value);
        }
        return;
    }

    base->orbitAngularStep += 2 * (rand() % 13 - 6);
    if (base->orbitAngularStep > 0x2d) base->orbitAngularStep = 0x2d;
    if (base->orbitAngularStep < 0x20) base->orbitAngularStep = 0x20;

    int vecAx = 88006;
    if (elem->angle <= base->orbitAngularStep) {
        elem->angle += 0x6487;
    }
    elem->angle -= base->orbitAngularStep;

    int angle = elem->angle;

    for (int k = 0; k < 4; k++) {
        int phase;
        struct Vec3 vecB;
        struct Vec3 vecA;
        struct Vec3 out;
        struct Vec3_020406f8 sel;

        angle += 0x1921;
        if (angle >= 0x6487) angle -= 0x6487;
        phase = angle - 0xcc;
        if (phase <= 0) phase += 0x6487;

        vecB.x = (int)(4096.0f * (func_0200c700(func_020c3260(phase)) / 4294967296.0f)) * 2;
        vecB.y = 0;
        vecB.z = (int)(4096.0f * (func_0200c700(func_020c32f8(phase)) / 4294967296.0f)) * 2;

        vecA.x = vecAx;
        struct Entry_203dce4* entry = arr[k];
        func_020406f8(&sel, (struct Node020406f8*)entry);
        vecA.z = -0x970;
        vecA.y = sel.y;

        Vector3fix_Add(&vecA, &vecB, &out);

        if ((entry->child14) != NULL) func_0203cec4((struct Struct_203cec4*)(entry->child14), 1);
        if ((entry->child14) != NULL) func_0203fc5c((struct Struct_0203fc5c*)(entry->child14), 0.8f);
        func_020409b0((struct Node020409b0*)entry, (int)&out);
        func_02040774((struct Node02040774*)entry, out.x, out.y, out.z);
    }
}
