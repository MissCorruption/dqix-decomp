#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Cont0207fe44;
struct Obj0208203c;
struct Obj0205eaa0;
struct Obj0217e5dc;
struct Obj020397cc;
struct StatusOwner02081198;
struct StatusOwner02081164;
struct FindEntryContainer02086a04;

struct Entries {
#if defined(jpn)
    char pad0[0x2a];
#else
    char pad0[0x36];
#endif
    short sel;
};

struct Flagged {
#if defined(jpn)
    char pad0[0x228];
#else
    char pad0[0x400];
#endif
    unsigned int flags;
};

struct BattleInfo {
    char pad0[0xf7c];
    unsigned char partyCount;
    char padf7d[0x2c8c - 0xf7d];
    unsigned char slotCount;
};

struct Elem {
    signed char v : 6;
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
    char pad476[0x480 - 0x476];
    short h480;
    char pad482[0x484 - 0x482];
    short h484;
    short h486;
    short h488;
    char pad48a[0x490 - 0x48a];
    short h490;
    short h492;
    char pad494[0x49e - 0x494];
    unsigned char c49e;
    signed char c49f;
    char pad4a0[0x4a3 - 0x4a0];
    unsigned char c4a3;
    unsigned char state;
};

static inline BattleInfo *GetBattleInfo() {
    return (BattleInfo *) func_02010828(GameState::GetInstance());
}

struct SceneView {
    char pad0[0x64];
    Flagged cont;
};

extern "C" void func_0207fe44(Cont0207fe44 *);
extern "C" void func_020813ec(Entries *, int);
extern "C" int func_02080468(void *, int);
extern "C" void func_0208203c(Obj0208203c *);
extern "C" void func_02080c68(void *, int, int);
extern "C" int func_ov003_02160854(Scene *);
extern "C" void func_0205eaa0(Obj0205eaa0 *, int, int);
extern "C" void func_ov003_0217e5dc(Obj0217e5dc *, unsigned char);
extern "C" int func_ov003_02160a68(Scene *);
extern "C" Elem *func_ov003_02160bd0(void *, int);
extern "C" void func_02081198(StatusOwner02081198 *, int, int);
extern "C" void func_02081164(StatusOwner02081164 *, int, int);
extern "C" void func_ov003_02165c9c(Scene *);
extern "C" void func_ov003_02166f80(void *, int, int);
extern "C" int func_ov003_02160b84(void *);
extern "C" void func_ov003_021612c0(Scene *);
extern "C" int func_ov003_02161344(Scene *);
extern "C" void func_02086a04(FindEntryContainer02086a04 *, int);
extern "C" int func_ov003_02166a90(Scene *, int);
extern "C" void func_020397cc(Obj020397cc *, int);

extern int data_02108760;

// USA: func_ov003_02162f40
extern "C" ARM void func_ov003_02162f40(Scene *self) {
    unsigned char state = self->state;
    Entries *entries    = self->entries;

    if (state == 0) {
        func_0207fe44((Cont0207fe44 *) entries);
        func_020813ec(entries, 8);
        self->h488   = 8;
        self->h490   = func_02080468(entries, self->h488);
        self->h474   = self->h490;
        entries->sel = self->h490;
        func_020813ec(entries, self->h488);
        func_0208203c((Obj0208203c *) self->sub308);
        self->state = self->state + 1;
    } else if (state == 1) {
        self->p470 = &self->h490;
        func_02080c68(entries, self->h488, 0);
        if (func_ov003_02160854(self) != 0) {
            func_0205eaa0((Obj0205eaa0 *) &data_02108760, 1, 0);
            func_0208203c((Obj0208203c *) self->sub308);
            self->p470        = 0;
            unsigned char idx = self->h490 - 0x25;
            Obj0217e5dc *obj  = (Obj0217e5dc *) GetGameResources();
            func_ov003_0217e5dc(obj, idx);
            func_0207fe44((Cont0207fe44 *) entries);
            self->c4a3  = 0x10;
            self->state = self->state + 1;
        } else {
            if (func_ov003_02160a68(self) == 0) {
                return;
            }
            func_0208203c((Obj0208203c *) self->sub308);
            self->p470 = 0;
            func_0207fe44((Cont0207fe44 *) entries);
            self->h484  = 2;
            self->c4a3  = 1;
            self->state = 0;
        }
    } else if (state == 2) {
        self->h488  = 6;
        self->h492  = func_02080468(entries, self->h488);
        short first = self->h492;
        self->h474  = first;
        int n       = GetBattleInfo()->slotCount - 1;
        self->c49f  = n / 4;
        self->h474  = self->h474 + (n & 3);
        self->h492  = self->h474;
        short col   = (short) (self->h492 - first) & 3;
        short idx   = self->c49f * 4 + col;
        self->h480  = -1;
        Elem *elem  = func_ov003_02160bd0(self, idx);
        if (elem != NULL) {
            self->h480 = elem->v;
        }
        entries->sel = self->h492;
        func_0207fe44((Cont0207fe44 *) entries);
        func_02081198((StatusOwner02081198 *) entries, 5, 1);
        func_02081164((StatusOwner02081164 *) entries, 5, 1);
        func_020813ec(entries, 5);
        func_ov003_02165c9c(self);
        func_ov003_02166f80(self, self->h488, 1);
        self->flags |= 0x780000;
        if (self->flags & 1) {
            ((SceneView *) self)->cont.flags |= 0x800000;
        }
        self->flags |= 8;
        self->state = self->state + 1;
        func_0208203c((Obj0208203c *) self->sub308);
        self->p470 = 0;
    } else if (state == 3) {
#if defined(jpn)
        int limit = 4;
        if (self->c49e == 1) {
            limit = 3;
        }
#else
        int limit = 4;
#endif
        self->h484  = 0x16;
        self->state = 4;
        int a       = GetBattleInfo()->partyCount;
        int n       = func_ov003_02160b84(self);
        if (a + n >= limit) {
            return;
        }
        self->h484  = 0x15;
        self->state = 5;
    } else if (state == 4) {
        func_0207fe44((Cont0207fe44 *) entries);
        self->flags |= 0x80000;
        self->h484  = 2;
        self->c4a3  = 1;
        self->state = 0;
    } else if (state == 5) {
        func_ov003_021612c0(self);
        self->state = self->state + 1;
    } else if (state == 6) {
        int r = func_ov003_02161344(self);
        if (r != -1) {
            if (r == 1) {
                func_0207fe44((Cont0207fe44 *) entries);
                self->flags |= 0x80000;
#if defined(jpn)
                int limit = 4;
                if (self->c49e == 1) {
                    limit = 3;
                }
#else
                int limit = 4;
#endif
                int a = GetBattleInfo()->partyCount;
                int n = func_ov003_02160b84(self);
                if (a + n < limit) {
                    self->flags |= 0xa;
                    self->h484  = 8;
                    self->state = 10;
                } else {
                    self->h484  = 5;
                    self->h486  = 2;
                    self->c4a3  = 1;
                    self->state = 0;
                }
            }
        } else {
            func_0207fe44((Cont0207fe44 *) entries);
            self->flags |= 0x80000;
            self->flags |= 8;
            self->h484  = 0x5a;
            self->h486  = 2;
            self->c4a3  = 1;
            self->state = 0;
        }
    } else if (state == 7) {
        self->c4a3  = 7;
        self->state = 0;
        func_02086a04((FindEntryContainer02086a04 *) GetBattleInfo(), (signed char) self->h480);
    } else if (state == 10) {
        if (func_ov003_02166a90(self, self->h480) == 0) {
            return;
        }
        GameObject *hero = GameState::GetInstance()->GetProtagonist();
        if (hero != NULL) {
            func_020397cc((Obj020397cc *) hero, 1);
        }
        self->state = 7;
    } else if (state == 100) {
        func_ov003_021612c0(self);
        self->state = 101;
    } else if (state == 101) {
        int r = func_ov003_02161344(self);
        if (r != -1) {
            if (r == 1) {
                self->h484  = 0x13;
                self->flags |= 2;
                self->state = 0;
            }
        } else {
            self->h484  = 0x12;
            self->h486  = 2;
            self->c4a3  = 1;
            self->state = 0;
        }
    }
}
