#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" {
int func_02080468(void *, int);
void func_ov003_0215385c(void *);
void func_ov003_02158480(void *);
void func_0208203c(void *);
void func_ov003_021538f4(void *, int);
int func_ov003_02156034(void *);
void *func_0200fb8c(void *);
int _Z31IsSubBrightnessTransitionActiveP13GameResources(void *);
int func_ov003_021550dc(void *);
void func_0205eaa0(void *, int, int);
void func_0207fe44(void *);
int func_ov003_02155f40(void *, int);
int func_ov003_02155208(void *);
void func_ov003_02153874(void *);
void func_ov003_02155580(void *, int);
int func_ov003_02155618(void *);
void *func_02053c6c(void *);
void *func_ov003_02155e14(void *, int);
void func_020de9a4(void *, void *, void *, unsigned int, void *, int);
void _ZN13SafeAllocator5ResetEv(void *);
void func_ov003_0215873c(void *);
void *func_020421a0(void);
void func_02043204(void *);
void func_ov003_02158a50(void *);
void func_0209c830(void *, int);
void func_ov003_0215582c(void *);
int func_02046b24(void *);
int _ZNK8Object3D19HasAnimationStoppedEv(void *);
int func_0202ae18(void);
int func_0202b7d8(int);
void func_ov017_021c3fb4(int, int);
void func_ov017_021c4418(int, int);
void func_ov017_021cf078(int, int, int);
void func_ov017_021ccc34(int);
void func_ov017_021cc730(int, int, int, int);
void func_02083e28(void *, int);
void func_ov003_02155740(void *);
void *func_02094d6c(void);
int func_ov003_02158754(void *);
}

#if defined(jpn)
#define JPN_OFS(j, u) (j)
#else
#define JPN_OFS(j, u) (u)
#endif

extern char data_02108760[];
extern char data_02109bf4[];
extern const char *data_020f2a38;
extern const char *data_020f2a30;

struct Obj0215704c {
    char pad0[0x36];
    short f36;
    char pad38[0x59 - 0x38];
    signed char f59;
    char pad5a[0x5d - 0x5a];
    unsigned char f5d;
};

struct Cmb0215704c {
    char pad0[0x130];
    unsigned char *f130;
};

struct Rec0215704c {
    unsigned int pad : 17;
    unsigned int a : 1;
    unsigned int b : 1;
    unsigned int rest : 13;
    char pad4[0xc];
};

struct Glob0215704c {
    unsigned char count;
    char pad1[3];
    struct Rec0215704c recs[1];
};

struct Ctrl0215704c {
    void *alloc;
    struct Obj0215704c *f04;
    void *f08;
    char pad0c[0x18 - 0xc];
    void *f18;
    char pad1c[0x80 - 0x1c];
#if defined(jpn)
    char sub80[0x174 - 0x80];
#else
    char sub80[0x178 - 0x80];
#endif
    char sub178[0x1d0 - 0x178];
    int task;
    int f1d4;
    char pad1d8[4];
    int f1dc;
    char pad1e0[4];
    short f1e4;
    short f1e6;
    short f1e8;
    char pad1ea[2];
    short cmd;
    short cmd2;
    char pad1f0[7];
    signed char f1f7;
    unsigned char mode;
    unsigned char state;
    char pad1fa[2];
    unsigned int flags;
    char pad200[0x280 - 0x200];
    char obj280[0x32c - 0x280];
    int f32c;
    char pad330[8];
    unsigned char f338;
};

// USA: func_ov003_0215704c
extern "C" ARM void func_ov003_0215704c(struct Ctrl0215704c *self) {
    void *gs              = GameState::GetInstance();
    int state             = self->state;
    void *p               = self->f18;
    struct Obj0215704c *o = self->f04;

    if (state == 0) {
        o->f59 = self->f1f7;
        func_ov003_0215385c(o);
        self->f1e6 = 6;
        if (self->f1e4 < 0) {
            self->f1e4 = func_02080468(p, self->f1e6);
            self->f1e8 = self->f1e4;
        }
#if defined(jpn)
        ((short *) p)[0x2a / 2] = self->f1e4;
#else
        ((short *) p)[0x36 / 2] = self->f1e4;
#endif
        func_ov003_02158480(self);
        func_0208203c(self->sub80);
        self->f08   = 0;
        self->state = self->state + 1;
    } else if (state == 1) {
        self->f08 = &self->f1e4;
        int ok    = 1;
        func_ov003_021538f4(o, func_ov003_02156034(self));
        if (o->f5d & 1) {
            ok = 0;
        }
        void *res = func_0200fb8c(GameState::GetInstance());
        if (IsBrightnessWithinValidRange((GameResources*)res, true) == 0) {
            ok = 0;
        }
        if (_Z31IsSubBrightnessTransitionActiveP13GameResources(res) != 0) {
            ok = 0;
        }
        if (func_ov003_021550dc(self) != 0 && ok != 0) {
            func_0205eaa0(data_02108760, 1, 0);
            func_0208203c(self->sub80);
            self->f08   = 0;
            self->cmd   = 0xa;
            self->state = self->state + 1;
            func_0207fe44(p);
            if (func_ov003_02155f40(self, self->f1f7)) {
                self->flags = self->flags | 2;
                self->cmd   = 0x30;
                self->cmd2  = 9;
                self->state = 0;
                return;
            }
        } else if (func_ov003_02155208(self) != 0 && ok != 0) {
            self->f08  = 0;
            self->cmd  = 7;
            self->mode = 7;
            func_0207fe44(p);
            o->f59 = -1;
            func_ov003_02153874(o);
        }
    } else if (state == 2) {
        func_ov003_02155580(self, 0);
        self->state = self->state + 1;
    } else if (state == 3) {
        int r = func_ov003_02155618(self);
        if (r != -1) {
            if (r == 1) {
                self->cmd             = 0xc;
                struct Cmb0215704c *c = (struct Cmb0215704c *) func_0200ff1c((GameState *)gs, self->f1f7);
                if (c != 0) {
                    c->f130[8] = 0;
                }
                self->state = self->state + 1;
            }
        } else {
            self->flags = self->flags | 2;
            self->cmd   = 0xb;
            self->state = 0;
        }
    } else if (state == 4) {
#if defined(jpn)
        self->task  = BackgroundLoader::GetInstance()->QueueLoadGP1(data_020f2a38, 0);
#else
        self->task  = BackgroundLoader::GetInstance()->QueueLoadFileInGP2(data_020f2a38, data_020f2a30, 0);
#endif
        self->state = self->state + 1;
    } else if (state == 5) {
        BackgroundLoader *loader = BackgroundLoader::GetInstance();
        if (loader->GetTaskStatus(self->task)) {
            void *file;
            unsigned int size;
            loader->GetLoadedFileByID(self->task, &file, &size);
            _ZN13SafeAllocator5ResetEv((char *) self->alloc + 0x78);
            void *pm = GameState::GetInstance()->GetPartyMemberByIndex(self->f1f7);
            if (pm != 0) {
                char *f = (char *) func_02053c6c(pm);
                if (f != 0) {
                    void *slot =
                        func_ov003_02155e14(f + 0xa4 + 0x400, func_ov003_02156034(self));
                    func_020de9a4(self->sub178, (char *) self->alloc + 0x78, file, size, slot, 8);
                }
            }
            loader->RemoveTask(self->task);
            self->task = -1;
            func_ov003_0215873c(self);
            self->state = 0x32;
            self->f338  = 1;
        }
    } else if (state == 6) {
        self->f1d4 = 0;
        func_02043204(func_020421a0());
        func_ov003_02158a50(self);
        func_0209c830(data_02109bf4, 0x34);
        self->state = self->state + 1;
    } else if (state == 7) {
        self->f1d4 = self->f1d4 + self->f1dc;
        if (self->f1d4 > 0x8c) {
            func_ov003_0215582c(self);
            self->state = self->state + 1;
        }
    } else if (state == 8) {
        char *x = (char *) GetGameResources();
        if (func_02046b24(*(void **) (x + 0x3000 + JPN_OFS(0x4f0, 0x700))) == 0x13) {
            return;
        }
        self->state = self->state + 1;
    } else if (state == 9) {
        if (_ZNK8Object3D19HasAnimationStoppedEv(self->obj280) == 0) {
            return;
        }
        self->f32c = 0;
        if (func_0202b7d8(func_0202ae18()) != 0) {
            func_ov017_021c3fb4(self->f1f7, 0);
            func_ov017_021c4418(self->f1f7, -1);
            func_ov017_021cf078(self->f1f7, (unsigned char) func_ov003_02156034(self), 0);
            func_ov017_021ccc34(self->f1f7);
            func_ov017_021cc730(self->f1f7, 1, 0, 0);
        }
        void *c2 = func_0200ff1c((GameState *)gs, self->f1f7);
        if (c2 != 0) {
            func_02083e28(*(void **) ((char *) c2 + JPN_OFS(0x144, 0x150)), 0);
        }
        func_ov003_02155740(self);
        struct Glob0215704c *g = (struct Glob0215704c *) func_02094d6c();
        struct Rec0215704c *rp = g->recs;
        unsigned char cnt      = g->count;
        int i;
        for (i = 0; i < cnt; i++, rp++) {
            if (rp->a) {
                rp->b = 1;
            }
        }
        self->f338  = 0;
        self->cmd   = 0xd;
        self->state = self->state + 1;
    } else if (state == 0xa) {
        self->mode = 7;
    }
    if (self->state == 0x32) {
        if (func_ov003_02158754(self) != 0) {
            self->state = 6;
        }
    }
}
