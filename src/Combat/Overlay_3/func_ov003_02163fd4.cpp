#include "GameState/GameState.h"
#include <globaldefs.h>

struct Entries {
#if defined(jpn)
    char pad0[0x2a];
#else
    char pad0[0x36];
#endif
    short sel;
};

struct Scene {
#if defined(jpn)
    char pad0[0x1f0];
    char sub308[0x20c - 0x1f0];
    Entries *entries;
    char pad328[0x28c - 0x210];
#else
    char pad0[0x308];
    char sub308[0x324 - 0x308];
    Entries *entries;
    char pad328[0x464 - 0x328];
#endif
    unsigned int flags;
    char pad468[0x470 - 0x468];
    short *p470;
    short h474;
    char pad476[0x484 - 0x476];
    short h484;
    short h486;
    short h488;
    short h48a;
    char pad48c[0x49e - 0x48c];
    unsigned char c49e;
    char pad49f[0x4a3 - 0x49f];
    unsigned char c4a3;
    unsigned char state;
};

#if defined(jpn)
#define REGION_OFF_354 0x134
#else
#define REGION_OFF_354 0x354
#endif

extern int data_02108760;
extern "C" void func_020813ec(void *, int);
struct Obj0208203c;
extern "C" void func_0208203c(Obj0208203c*);
extern "C" int func_02080468(void *, int);
extern "C" char * func_0200fb8c(int*);
struct Obj0205eaa0;
extern "C" void func_0205eaa0(Obj0205eaa0 *, int, int);
struct Cont0207fe44;
extern "C" void func_0207fe44(Cont0207fe44*);
extern "C" int func_ov003_02160b84(void *);
extern "C" int func_ov003_02160b50(void *);
extern "C" int func_ov003_02160a68(Scene *);
extern "C" int func_ov003_02160854(Scene *);
extern "C" void func_02080c68(void *, int, int);
extern "C" void func_ov003_02166f80(void*, int, int);

// USA: func_ov003_02163fd4
extern "C" ARM void func_ov003_02163fd4(Scene *self) {
    unsigned char state = self->state;
    Entries *entries    = self->entries;

    if (state == 0) {
        func_0207fe44((Cont0207fe44*)entries);
        int idx    = -1;
        self->c49e = func_ov003_02160b50(self);
        switch (self->c49e) {
            case 0: self->h488 = 0x19; break;
            case 1:
                self->h488 = 0x1a;
                idx        = 0;
                break;
            case 2:
                self->h488 = 0x1b;
                idx        = 1;
                break;
        }
        func_020813ec(entries, idx);
        self->h48a   = func_02080468(entries, self->h488);
        self->h474   = self->h48a;
        entries->sel = self->h48a;
        func_020813ec(entries, self->h488);
        func_0208203c((Obj0208203c*)self->sub308);
        self->state = self->state + 1;
        self->flags &= ~0x300;
        *(unsigned char *) (func_0200fb8c((int*)GameState::GetInstance()) + 0x4000 + REGION_OFF_354) = 0xa;
    } else if (state == 1) {
        self->p470 = &self->h48a;
        func_02080c68(entries, self->h488, 0);
        short *p = &self->h484;
        if (func_ov003_02160854(self) != 0) {
            func_0205eaa0((Obj0205eaa0 *) &data_02108760, 1, 0);
            func_0208203c((Obj0208203c*)self->sub308);
            self->p470 = 0;
            switch (self->h48a) {
                case 0xa6:
                    if ((int) *((unsigned char *)func_02010828(GameState::GetInstance()) + 0xf7c) > 1) {
                        p[0]        = 3;
                        p[1]        = 4;
                        self->c4a3  = 0xb;
                        self->state = 0;
                    } else {
                        func_0207fe44((Cont0207fe44*)entries);
                        p[0]        = 3;
                        self->c4a3  = 0xb;
                        self->state = 2;
                    }
                    break;
                case 0xa7:
                    if (*((unsigned char *)func_02010828(GameState::GetInstance()) + 0xf7c) == 4) {
                        p[0] = 0x14;
                        p[1] = 1;
                    } else {
                        func_0207fe44((Cont0207fe44*)entries);
                        self->c4a3  = 0xd;
                        self->state = 0xb;
                    }
                    break;
                case 0xa9:
                    func_ov003_02166f80(self, self->h488, 1);
                    if (func_ov003_02160b84(self) == 0) {
                        self->c4a3  = 0xe;
                        self->state = 0;
                    } else {
                        p[0]        = 0x1f;
                        p[1]        = 1;
                        self->state = 2;
                    }
                    break;
                case 0xaa:
                    func_ov003_02166f80(self, self->h488, 1);
                    p[0]        = 0x11;
                    self->c4a3  = 0xc;
                    self->state = 0;
                    break;
                case 0xc0:
                case 0xc2:
                    self->flags |= 0x2000;
                    func_ov003_02166f80(self, self->h488, 1);
                    p[0] = 0x31;
                    p[1] = 1;
                    break;
                case 0xc1:
                case 0xc3:
                    self->flags |= 0x2000;
                    func_ov003_02166f80(self, self->h488, 1);
                    p[0] = 0x32;
                    p[1] = 1;
                    break;
                case 0xa8:
                    self->flags |= 0x2000;
                    func_ov003_02166f80(self, self->h488, 1);
                    p[0] = 0x10;
                    p[1] = 1;
                    break;
                case 0xab:
                    self->flags |= 0x2000;
                    func_ov003_02166f80(self, self->h488, 1);
                    p[0] = 0x1e;
                    p[1] = 1;
                    break;
                case 0xbb:
                case 0xbc:
                case 0xbd:
                    func_0207fe44((Cont0207fe44*)entries);
                    p[0] = 0x2d;
                    break;
            }
            func_02080c68(entries, self->h488, 1);
        } else if (func_ov003_02160a68(self) != 0) {
            func_0207fe44((Cont0207fe44*)entries);
            p[0] = 0x2d;
        }
    } else if (state == 2) {
        func_ov003_02166f80(self, self->h488, 0);
        self->state = 1;
    }
}
