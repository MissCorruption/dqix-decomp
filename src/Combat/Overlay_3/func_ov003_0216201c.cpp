#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

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
    char pad48c[0x49f - 0x48c];
    signed char c49f;
    char pad4a0[0x4a3 - 0x4a0];
    unsigned char c4a3;
    unsigned char state;
    char pad4a5[0x4a9 - 0x4a5];
    unsigned char list[4];
    unsigned char cnt;
};

extern int data_02108760;
extern "C" void func_020813ec(void *, int);
struct Obj0208203c;
extern "C" void func_0208203c(Obj0208203c*);
extern "C" int func_02080468(void *, int);
struct Obj0205eaa0;
extern "C" void func_0205eaa0(Obj0205eaa0 *, int, int);
struct Cont0207fe44;
extern "C" void func_0207fe44(Cont0207fe44*);
extern "C" int func_ov003_02160b84(void *);
extern "C" int func_ov003_02160a68(Scene *);
extern "C" int func_ov003_02160854(Scene *);
extern "C" void func_ov003_02160c58(Scene *, short *, short *);
extern "C" void func_02080c68(void *, int, int);
extern "C" void *func_0205ec34();
extern "C" unsigned char *func_02053c6c(unsigned char *);
extern "C" int func_02011494(char*, void*);
extern "C" void func_0206df6c(void *, unsigned char *, int, int);
extern "C" int func_0206dfb0(int, unsigned char *, int);
extern "C" int func_02083b00(unsigned char *, int);
extern "C" void func_02083acc(unsigned char *, int);
extern "C" void func_ov017_021c9e00(int, int, int, int);
extern "C" void func_ov017_021ccfd0(int);

// USA: func_ov003_0216201c
extern "C" ARM void func_ov003_0216201c(Scene *self) {
    GameState *gs        = GameState::GetInstance();
    unsigned char *gp    = (unsigned char *)func_02010828(gs);
    unsigned char *bits  = (unsigned char *) func_0205ec34();
    unsigned char *field = func_02053c6c((unsigned char *) gs->GetPartyMemberByIndex(0));
    unsigned char state  = self->state;
    Entries *entries     = self->entries;

    if (state == 0) {
        func_0207fe44((Cont0207fe44*)entries);
        self->h488 = 0x1e;
        if (*((unsigned char *)func_02010828(GameState::GetInstance()) + 0xf7c) == 1) {
            self->h488 = 0x1d;
        }
        self->h48a   = func_02080468(entries, self->h488);
        self->h474   = self->h48a;
        entries->sel = self->h48a;
        func_020813ec(entries, self->h488);
        func_0208203c((Obj0208203c*)self->sub308);
        self->p470  = 0;
        self->state = self->state + 1;
        self->flags &= ~0x300;
    } else if (state == 1) {
        self->p470 = &self->h48a;
        func_02080c68(entries, self->h488, 0);
        if (func_ov003_02160854(self) != 0) {
            func_0205eaa0((Obj0205eaa0 *) &data_02108760, 1, 0);
            func_0208203c((Obj0208203c*)self->sub308);
            self->p470 = 0;
            switch (self->h48a) {
                case 0xb4:
                case 0xb7:
                    int cv = func_ov003_02160b84(self);
                    cv += gp[0xf7c];
                    if (cv == 4) {
                        self->h484 = 6;
                        self->h486 = 2;
                    } else if (*((unsigned char *)func_02010828(GameState::GetInstance()) + 0x2000 + 0xc8c) == 0) {
                        func_0207fe44((Cont0207fe44*)entries);
                        self->c4a3  = 2;
                        self->state = 0;
                    } else {
                        func_0207fe44((Cont0207fe44*)entries);
                        self->h484  = 0x4c;
                        self->c4a3  = 2;
                        self->state = 4;
                    }
                    break;
                case 0xb8: {
                    int n           = func_02011494((char*)GameState::GetInstance(), &self->list);
                    self->cnt       = n;
                    unsigned char m = self->cnt;
                    unsigned char i;
                    unsigned char *p = self->list;
                    for (i = 0; i < m - 1; i++) {
                        if (*p == 0) {
                            *p   = p[1];
                            p[1] = 0;
                        }
                        p++;
                    }
                    short a;
                    short b;
                    self->cnt = self->cnt - 1;
                    func_ov003_02160c58(self, &a, &b);
                    if (*((unsigned char *)func_02010828(GameState::GetInstance()) + 0xf7c) == 1) {
                        self->h484 = 0x10;
                        self->h486 = 2;
                    } else if (b == 0) {
                        self->h484 = 0x45;
                        self->h486 = 2;
                    } else {
                        func_0207fe44((Cont0207fe44*)entries);
                        self->h484  = 0xa;
                        self->c4a3  = 3;
                        self->state = 0;
                    }
                    break;
                }
                case 0xbe:
                case 0xbf: {
                    short a;
                    short b;
                    func_ov003_02160c58(self, &a, &b);
                    b = b - (gp[0xf7c] - 1);
                    if (b > 0) {
                        func_0207fe44((Cont0207fe44*)entries);
                        self->c4a3 = 4;
                        self->h484 = 0x13;
                        self->flags |= 2;
                        self->state = 0;
                    } else {
                        self->h484 = 0x17;
                        self->h486 = 2;
                    }
                    break;
                }
                case 0xb5:
                case 0xb9:
                    if (*((unsigned char *)func_02010828(GameState::GetInstance()) + 0x2000 + 0xc8c) != 0) {
                        func_0207fe44((Cont0207fe44*)entries);
                        self->c4a3 = 5;
                        self->c49f = 0;
                        func_0206df6c(bits, bits + 0x8c, 0x785, 1);
                        self->h484  = 0x1d;
                        self->state = 0x64;
                    } else {
                        self->h484 = 0x1b;
                        self->h486 = 2;
                    }
                    break;
                case 0xb6:
                case 0xba:
                    func_0207fe44((Cont0207fe44*)entries);
                    if (func_0206dfb0((int) bits, bits + 0x8c, 0x784) != 0 && field != 0 &&
                        func_02083b00(field, 0x11e) == 0)
                    {
                        self->h484 = 0x59;
                        if (field != 0) {
                            func_02083acc(field, 0x11e);
                        }
                        func_ov017_021c9e00(0, 0, 0, 0);
                        func_ov017_021ccfd0(0);
                    } else {
                        self->h484 = 0x44;
                    }
                    break;
            }
            func_02080c68(entries, self->h488, 1);
        } else if (func_ov003_02160a68(self) != 0) {
            func_0207fe44((Cont0207fe44*)entries);
            if (func_0206dfb0((int) bits, bits + 0x8c, 0x784) != 0 && field != 0 &&
                func_02083b00(field, 0x11e) == 0)
            {
                self->h484 = 0x59;
                if (field != 0) {
                    func_02083acc(field, 0x11e);
                }
                func_ov017_021c9e00(0, 0, 0, 0);
                func_ov017_021ccfd0(0);
            } else {
                self->h484 = 0x44;
            }
        }
    }
}
