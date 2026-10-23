#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"
#include <globaldefs.h>

struct Struct_0205c570;
struct Struct0205cf1c;
struct Obj0205eaa0;

#if defined(jpn)
enum { regionalScene = 0x18, regionalCtlStrings = -0x34, regionalCtl = -0x130, regionalCtlByte = -0x1d0, regionalZone = 0x20 };
#else
enum { regionalScene = 0, regionalCtlStrings = 0, regionalCtl = 0, regionalCtlByte = 0, regionalZone = 0 };
#endif

struct Ctl {
    char pad0[0x5c + regionalCtlStrings];
    char *strings;
    char pad60[0x998 - 0x60 + regionalCtl - regionalCtlStrings];
    int w998;
    char pad99c[4];
    int w9a0;
};

struct Scene {
    char pad0[0x64];
    Container020e0310 cont64;
    char pad6c[0x98 - 0x6c + regionalScene];
    char list98[0x3b8 - 0x98];
    unsigned char state;
    char pad3b9[2];
    unsigned char b3bb;
    unsigned char b3bc;
    unsigned char tab3bd[4];
    signed char b3c1;
    unsigned char b3c2;
    unsigned char b3c3;
    char pad3c4[0x3cc - 0x3c4];
    int w3cc;
    int w3d0;
    char pad3d4[0x3ec - 0x3d4];
    unsigned char b3ec;
    unsigned char b3ed;
    char pad3ee[2];
    unsigned char b3f0;
    unsigned char b3f1;
    unsigned char b3f2;
};

struct Sub1840 {
    char pad0[0xb3c];
    int wb3c;
};

struct Zone {
    char pad0[0x1840 + regionalZone];
    Sub1840 sub;
};

static inline Sub1840 *GetSub(Zone *z) { return &z->sub; }
static inline int GetB3c(Sub1840 *s) { return s->wb3c; }

extern "C" Ctl *func_020421a0();
extern "C" int *func_0202ae18();
extern "C" Zone *func_02012fe4();
extern "C" void func_02046380(void *obj);
struct StoreStruct;
extern "C" void func_020465c0(StoreStruct*, int, int);
extern "C" void func_020465f0(unsigned char *, int, unsigned char);
extern "C" int func_0202b7d8(int *p);
extern "C" int func_0202c540(int *p);
extern "C" int func_0202c508(int *p);
struct Obj02046574;
extern "C" void func_02046574(Obj02046574*, int, char*);
extern "C" const char * func_020e0434(Container020e0310*, int);
extern "C" int func_02042058(char *dst, const char *src);
extern "C" void func_ov003_0215cab0(char *obj, void *flag);
extern "C" void func_ov003_0215ddc0(char *base);
extern "C" void func_ov003_0215df1c(void *self);
extern "C" void func_ov003_0215dd3c(char *obj);
struct Struct_0205d81c;
extern "C" void func_0205deb4(Struct_0205d81c*, int, int);
extern "C" void func_0205cef8(void *obj);
extern "C" void func_0205cf04(void *obj);
extern "C" int func_0205d794(Struct_0205c570 *);
struct Entry_0205d6a0;
extern "C" void func_0205d6a0(Entry_0205d6a0*, int);
extern "C" void func_0205eaa0(Obj0205eaa0 *, int, int);
extern "C" void func_0205cf10(void *p);
extern "C" void func_0205cf1c(Struct0205cf1c *);
extern "C" int func_ov003_0215dcb8(char *obj);
extern "C" ARM int func_ov003_0215dd00(char *self);

extern int data_02108760;

// USA: func_ov003_0215d150
extern "C" ARM void func_ov003_0215d150(Scene *self) {
    GameState *gs = GameState::GetInstance();
    Ctl *g       = func_020421a0();
    int *a       = func_0202ae18();
    Zone *b      = func_02012fe4();

    if (g->w9a0 == 3) {
        *(unsigned char *) ((char *) g + 0x1000 + 0x9ae + regionalCtlByte) = 0;
    }

    unsigned char state = self->state;
    int k1;

    if (state == 0) {
        func_02046380(g);
        func_020465c0((StoreStruct*)g, 0, self->b3c3);
        func_020465f0((unsigned char *) g, 0, 0);
        func_020465c0((StoreStruct*)g, 1, self->w3cc);
        func_020465f0((unsigned char *) g, 1, 0);

        int sb;
        sb = (self->w3d0 == 0) ? 1 : 0;
        if (func_0202b7d8(a) != 0) {
            if (func_0202c540(a) != 0) {
                sb = 2;
            }
        }
        g->w998 = 1;

        char *buf = g->strings;
        if (self->b3f0 != 0) {
            func_02046574((Obj02046574*)g, 0, (char*)(*(void **) ((char *) gs->GetPartyMemberByIndex(0) + 0x134)));

            int flag = 0;
            if (func_0202c508(a) != 0) {
                flag = (*(short *) ((char *) gs->GetUnknownGameObject() + 4) == 0) ? 1 : 0;
            }

            if (flag != 0) {
                func_02042058(buf, func_020e0434(&self->cont64, (short)0x64));
            }

            if (GetB3c(GetSub(b)) == 6) {
                k1 = 0x67;
            } else if (self->w3d0 != 0) {
                k1 = 0x65;
            } else {
                k1 = 0x68;
            }
            func_02042058(buf, func_020e0434(&self->cont64, (short)k1));

            if (flag == 0) {
                func_02042058(buf, func_020e0434(&self->cont64, (short)0x6f));
            } else {
                int k2;
                k2 = (self->w3d0 != 0) ? 0x66 : 0x69;
                func_02042058(buf, func_020e0434(&self->cont64, (short)k2));
            }
        } else {
            int k0 = sb + 0x3e8;
            func_02042058(buf, func_020e0434(&self->cont64, (short)k0));
        }

        func_ov003_0215cab0((char *) self, buf);
        self->state = self->state + 1;
    }

    if (state == 1) {
        if (g->w9a0 != 3) {
            return;
        }
        self->b3ec = 1;
        self->b3ed = 0;
        self->state = self->state + 1;
    }
    if (state == 2) {
        if (self->b3ec != 0) {
            return;
        }
        if (self->b3f2 == 0) {
            func_ov003_0215ddc0((char *) self);
        }
        func_ov003_0215df1c(self);
        func_0205deb4((Struct_0205d81c*)self->list98, 0, 0);
        self->state = self->state + 1;
    }
    if (state == 3) {
        self->b3c1 = 0;
        func_ov003_0215dd3c((char *) self);
        func_0205cef8(self->list98);
        func_0205cf04(self->list98);
        self->state = self->state + 1;
    }
    if (state == 4) {
        self->b3c2 = 1;
        self->b3c1 = func_0205d794((Struct_0205c570 *) self->list98);
        if (func_ov003_0215dcb8((char *) self) != 0) {
            self->b3c2 = 0;
            func_0205d6a0((Entry_0205d6a0*)self->list98, 0);
            func_0205eaa0((Obj0205eaa0 *) &data_02108760, 1, 0);
            func_0205cf10(self->list98);
            func_0205cf1c((Struct0205cf1c *) self->list98);
            switch (self->tab3bd[self->b3c1]) {
            case 0: self->b3bc = 2; break;
            case 1: self->b3bc = 3; break;
            case 2: self->b3bc = 4; break;
            }
            self->state = 0;
        } else {
            if (func_ov003_0215dd00((char *) self) != 0) {
                self->b3c2 = 0;
                func_0205d6a0((Entry_0205d6a0*)self->list98, 0);
                func_0205cf10(self->list98);
                func_0205cf1c((Struct0205cf1c *) self->list98);
                self->b3bc = 4;
                self->state = 0;
            }
        }
    }
}
