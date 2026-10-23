#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_02012fe4(void);

struct Vec3_020406f8 {
    unsigned int v[3];
};
struct Node020406f8;
struct Obj02040adc;
struct StateWithFourPtrs02040910;

extern "C" void func_020406f8(struct Vec3_020406f8* dst, struct Node020406f8* n);
extern "C" int func_02040adc(struct Obj02040adc* obj);
extern "C" int func_02040910(struct StateWithFourPtrs02040910* obj, int arg1);
extern "C" void func_0208f87c(const void* self, int b, int c, int d, int polygonId);

struct Ctx02012fe4 {
#if defined(jpn)
    char pad[0x58];
#else
    char pad[0x38];
#endif
    unsigned short f38;
    char pad3a[2];
    int f3c;
};

struct Node0203de84 {
    unsigned int flags;
    char pad4[0x10];
    void* f14;
    Object3D* f18;
};

struct Roster0203de84 {
    char pad0[0xc];
    struct Node0203de84* nodes[0x20];
    char pad8c[0x98 - 0x8c];
    struct StateWithFourPtrs02040910* f98;
};

// USA: func_0203de84
extern "C" ARM void func_0203de84(void* self) {
    struct Roster0203de84* roster = (struct Roster0203de84*)self;
    void* v = func_020100bc(GameState::GetInstance());
    GetGameResources();
    struct Ctx02012fe4* ctx = (struct Ctx02012fe4*)func_02012fe4();
    unsigned short a = ctx->f38;
    int b = ctx->f3c;
    struct Vec3_020406f8 vec;
    int i;
    for (i = 0; i < 0x20; i++) {
        if (roster->nodes[i] == NULL) continue;
        unsigned int fl = roster->nodes[i]->flags;
        if (fl & 0x8000) continue;
        if (roster->f98 != NULL && !(fl & 0x10000)) continue;
        if (!func_02040910((struct StateWithFourPtrs02040910*)roster->nodes[i], (int)v))
            continue;
        if (fl & 0x20) continue;
        if (fl & 0x40) continue;
        Object3D* e = roster->nodes[i]->f18;
        if (e != NULL && e->GetFlag(0x10) != 0) continue;
        func_020406f8(&vec, (struct Node020406f8*)roster->nodes[i]);
        func_0208f87c(&vec, a, 0x1000, b,
            func_02040adc((struct Obj02040adc*)roster->nodes[i]));
    }
}
