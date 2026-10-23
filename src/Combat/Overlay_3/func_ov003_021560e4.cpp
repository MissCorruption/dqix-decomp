#include "Combat/MenuNodeChain.h"
#include "Combat/MapDisplay.h"
#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
enum { kTaskOffset = 0x1cc, kPartyResourceOffset = 0x50c, kGlobalFieldOffset = 0x868, kManagerListOffset = 0x20, kManagerStateOffset = 0x2c, kManagerFlagOffset = 0x2e };
extern "C" void func_02046574(void*, int, char*);
extern "C" void func_0204500c(void*, void*, int);
extern "C" void func_02080654(void*, void*, const char*);
extern const char data_ov003_0217e554[];
extern const char data_ov003_0217e56e[];
extern const char data_ov003_0217e595[];
extern const char data_ov003_0217e5b3[];
extern const char data_ov003_0217e5c9[];
#else
enum { kTaskOffset = 0x1d0, kPartyResourceOffset = 0x71c, kGlobalFieldOffset = 0x998, kManagerListOffset = 0x2c, kManagerStateOffset = 0x38, kManagerFlagOffset = 0x3a };
#endif

extern "C" {
void ColorEffect_ConfigureAlphaBlend(int, int, int, int, int);
int func_020467f0(void*, int, void**, int*);
int func_02046900(void*);
int func_020100a8(void*);
void func_0205a444(void*);
int func_0206dfb0(void*, void*, int);
void func_020dfc40(void*);
void func_ov023_021e20c0(void*);
void* func_020e0434(void*, int);
void func_0204c7a8(void*, void*, int, int);
void func_0207fcb8(void*);
void func_0204b5e8(void*, int, int);
void func_020807fc(void*, int, int, int);
void func_0204b11c(void*, int);
void* func_020d7a50(void);
void* func_020421a0(void);
void func_02080828(void*, short, short*, short*);
void func_02080878(void*, int, short*, short*);
void func_02080854(void*, short, int, int);
void func_020808a4(void*, int, int, int);
void func_0207fd44(void*);
void func_0207fd88(void*);
void func_0207fe44(void*);
int func_ov003_0215570c(void*);
int func_02081010(void*, int);
void func_020d7aa0(void*);
void func_0204b12c(void*, void*);
void func_020e4bf4(void*, int);
void func_020807c4(void*, int, short*, short*);
void func_0207f914(void*, void*, const char*, const char*);
int func_ov003_02155f88(void*, int);
void _ZN13SafeAllocator5ResetEv(void*);
int func_020420e8(int, int);
#if !defined(jpn)
void func_0204500c(void*, void*, int, int);
#endif
void func_02046380(void*);
void func_0204b174(void*, void*, int, int);
void func_0204b5b4(void*, int);
void func_0205a528(void*, void*, int, void*);
void* func_0205ec34(void);
int func_0207f9f4(void*);
void func_020dfec0(void*, void*, void*, unsigned int);
void func_ov003_02156054(void*);
void func_ov023_021e20f0(void*, void*, void*, unsigned int);
}

extern const char data_ov003_0217fce4[];
extern const char data_ov003_0217fcfe[];
extern const char data_ov003_0217fd0f[];
extern const char data_ov003_0217fd23[];
extern const char data_ov003_0217fd33[];
extern const char data_ov003_0217fd46[];
extern const char data_ov003_0217fd60[];
extern const char data_ov003_0217fd68[];
extern const char data_ov003_0217fd7e[];
extern const char data_ov003_0217fd90[];
extern const char data_ov003_0217fdaa[];
struct BytePair {
    unsigned char v[2];
};
extern const BytePair data_ov003_0217f29c[];
extern const short data_ov003_0217f2a0[];
extern const short data_ov003_0217f2ae[];

struct Prio {
    unsigned char lo : 4;
    unsigned char hi : 4;
};

struct Ctrl {
    void* alloc;
    char pad04[0xc - 4];
    int f0c;
    List0204af64* f10;
    Node0207f7f0* f14;
    Manager0207f7f0* f18;
    void* f1c;
    char pad20[4];
    int f24;
    char pad28[4];
    char sub2c[0x68 - 0x2c];
    int f68;
    int f6c;
    char pad70[0x78 - 0x70];
    short f78;
    char pad7a[2];
    char f7c;
    char pad7d[0xe4 - 0x7d];
    char sube4[0xfc - 0xe4];
    char subfc[0x114 - 0xfc];
    char sub114[kTaskOffset - 0x114];
    int task;
    char pad1d4[0x1ec - 0x1d4];
    short f1ec;
    short f1ee;
    char f1f0[2];
    unsigned char f1f2;
    char pad1f3[4];
    char f1f7;
    unsigned char mode;
    unsigned char state;
    char pad1fa;
    unsigned char f1fb;
    unsigned int flags;
};

// USA: func_ov003_021560e4
extern "C" ARM void func_ov003_021560e4(Ctrl* self) {
    char* a;
    int state;
    BackgroundLoader* loader;
    loader = BackgroundLoader::GetInstance();
    state = self->state;

    if (state == 0) {
        if (self->flags & 1) {
            func_020d7aa0(func_020d7a50());
        }
        func_ov003_02156054(self);
        FontBankLoader* g = func_02094a00();
        func_02094ab0(g);
        func_02094b34(g, 0x66, 0x1f5, 0, 0);
        self->state = self->state + 1;
    } else if (state == 1) {
        if (func_02094b4c(func_02094a00())) {
#if defined(jpn)
            self->task = loader->QueueLoadFile(data_ov003_0217e554, 0);
#else
            self->task = loader->QueueLoadFileInGP2(data_ov003_0217fce4, data_ov003_0217fcfe, 0);
#endif
            self->state = self->state + 1;
        }
    } else if (state == 2) {
        if (loader->GetTaskStatus(self->task)) {
            int tmp[3];
            void* file;
            unsigned int size;
            loader->GetLoadedFileByID(self->task, &file, &size);
            void* a = self->alloc;
            _ZN13SafeAllocator5ResetEv(a);
            func_020dfc40(self->sube4);
            func_020dfec0(self->sube4, a, file, size);
            loader->RemoveTask(self->task);
            self->task = -1;
            char* g = (char*)func_020421a0();
            int key = -1;
            if (self->flags & 1) {
                key = 0x1a;
                char* x = (char*)GetGameResources();
                int id = *(short*)(*(char**)(x + 0x3000 + kPartyResourceOffset) + 0x22);
                GameState* gs = GameState::GetInstance();
                GameObject* pm = gs->GetPartyMemberByIndex(id);
                if (pm == 0) {
                    pm = gs->GetPartyMemberByIndex(func_020100a8(gs));
                }
                func_02046380(g);
#if defined(jpn)
                if (pm != 0) {
                    func_02046574(g, 0, *(char**)((char*)pm + 0x134));
                }
#else
                func_020e4bf4(tmp, pm->obj3D_.unknown_4_);
                *(void**)g = tmp;
#endif
            } else {
                char* x = (char*)func_0205ec34();
                if (func_0206dfb0(x, x + 0x8c, 0x799)) {
                    key = 0;
                } else {
                    self->f1ec = 0;
                    self->f1ee = 1;
                    self->mode = 7;
                }
            }
            void* r = func_020e0434(self->sube4, key);
            if (r) {
#if defined(jpn)
                func_0204500c(g, r, 0);
#else
                func_0204500c(g, r, 0, 0xe3);
#endif
                *(int*)(g + kGlobalFieldOffset) = 1;
                *(int*)(g + kGlobalFieldOffset + 4) = 1;
            }
            func_0205a444(self->sub2c);
            self->f7c = 0;
            self->f6c = self->f24;
            self->f78 = 10;
            if (self->f1c) {
                self->f68 = *(int*)((char*)self->f1c + 0x20);
            }
#if defined(jpn)
            self->task = loader->QueueLoadFile(data_ov003_0217e56e, 0);
#else
            self->task = loader->QueueLoadFileInGP2(data_ov003_0217fd0f, data_ov003_0217fd23, 0);
#endif
            self->state = self->state + 1;
        }
    } else if (state == 3) {
        if (loader->GetTaskStatus(self->task)) {
            void* p;
            void* file;
            unsigned int size;
            int len;
            loader->GetLoadedFileByID(self->task, &file, &size);
            int n = func_02046900(file);
            a = (char*)self->alloc;
            _ZN13SafeAllocator5ResetEv(a + 0x3c);
            for (int i = 0; i < n; i++) {
                void* rec = (void*)func_020467f0(file, i, &p, &len);
                func_0205a528(self->sub2c, rec, len, a + 0x3c);
            }
            loader->RemoveTask(self->task);
            self->task = -1;
            a = (char*)self->alloc;
            _ZN13SafeAllocator5ResetEv(a + 0x14);
            BytePair A = data_ov003_0217f29c[0];
            BytePair B = data_ov003_0217f29c[1];
            for (unsigned char i = 0; i < 2; i++) {
                List0204af64* e = self->f10 + i;
                func_0204b11c(e, 0);
                e->b1c_lo = 0;
                e->b1c_hi = A.v[i];
                func_0204b5b4(e, B.v[i]);
                func_0204b12c(e, a + 0x14);
                func_0204b5e8(e, 0, 0);
            }
            *(volatile unsigned short*)0x400000a = (*(volatile unsigned short*)0x400000a & 0x43) | 0x1e00;
            *(volatile unsigned short*)0x400000c = (*(volatile unsigned short*)0x400000c & 0x43) | 0x1f00;
            ColorEffect_ConfigureAlphaBlend(0x4000050, 4, 1, 10, 6);
            self->task = loader->QueueLoadFile(data_ov003_0217fd33, 0);
            self->state = self->state + 1;
        }
    } else if (state == 4) {
        if (loader->GetTaskStatus(self->task)) {
            void* p;
            void* file;
            unsigned int size;
            int len;
            loader->GetLoadedFileByID(self->task, &file, &size);
            int n = func_02046900(file);
            List0204af64* e = self->f10;
            for (int i = 0; i < n; i++) {
                void* rec = (void*)func_020467f0(file, i, &p, &len);
                func_0204b174(e, rec, 0, len);
            }
            loader->RemoveTask(self->task);
            self->task = -1;
            char* a = (char*)self->alloc;
            for (unsigned char j = 0; j < 3; j++) {
                Node0207f7f0* ent = self->f14 + j;
                func_0204c7a8(ent, a + 0x14, self->f0c, 0x4cc);
                ent->lists = self->f10;
            }
            a = (char*)self->alloc;
            _ZN13SafeAllocator5ResetEv(a + 0x28);
#if defined(jpn)
            func_02080654(self->f18, a + 0x28, data_ov003_0217e595);
#else
            func_0207f914(self->f18, a + 0x28, data_ov003_0217fd46, data_ov003_0217fd60);
#endif
            self->state = self->state + 1;
        }
    } else if (state == 5) {
        int r = func_0207f9f4(self->f18);
        if (r == 0) {
            self->state = self->state + 1;
        }
        if (r < 0) {
            self->mode = 7;
        }
    } else if (state == 6) {
        void* p = self->f18;
#if !defined(jpn)
        short x, y, w, h;
        func_020807c4(p, 2, &x, &y);
        func_02080878(p, 2, &w, &h);
        int mx = 0;
        for (int k = 0; k < 2; k++) {
            int v = func_020420e8(func_02081010(p, data_ov003_0217f2a0[k]), 0);
            if (mx < v) mx = v;
        }
        w = (mx + 0x1b) & ~7;
        w = w >> 3;
        if (w & 1) w = w + 1;
        x = (0x20 - w) >> 1;
        x = x << 3;
        func_020807fc(p, 2, x, y);
        func_020808a4(p, 2, w, h);
#endif
        if (func_ov003_0215570c(self) >= 9) {
            for (unsigned char i = 0; i < 12; i++) {
                for (int j = 0; j < 3; j++) {
                    int idx = i + data_ov003_0217f2ae[j];
                    short a, b;
                    func_02080828(p, idx, &a, &b);
                    func_02080854(p, idx, a, (short)(b - 1));
                }
            }
        }
#if defined(jpn)
            self->task = loader->QueueLoadFile(data_ov003_0217e5b3, 0);
#else
        self->task = loader->QueueLoadFileInGP2(data_ov003_0217fd68, data_ov003_0217fd7e, 0);
#endif
        self->state = self->state + 1;
    } else if (state == 7) {
        if (loader->GetTaskStatus(self->task)) {
            void* file;
            unsigned int size;
            loader->GetLoadedFileByID(self->task, &file, &size);
            if (file) {
                char* a = (char*)self->alloc;
                _ZN13SafeAllocator5ResetEv(a + 0x50);
                func_ov023_021e20c0(self->sub114);
                func_ov023_021e20f0(self->sub114, a + 0x50, file, size);
            }
            loader->RemoveTask(self->task);
            self->task = -1;
#if defined(jpn)
            self->task = loader->QueueLoadFile(data_ov003_0217e5c9, 0);
#else
            self->task = loader->QueueLoadFileInGP2(data_ov003_0217fd90, data_ov003_0217fdaa, 0);
#endif
            self->state = self->state + 1;
        }
    } else if (state == 8) {
        if (loader->GetTaskStatus(self->task)) {
            void* file;
            unsigned int size;
            loader->GetLoadedFileByID(self->task, &file, &size);
            if (file) {
                void* a = self->alloc;
                func_020dfc40(self->subfc);
                func_020dfec0(self->subfc, a, file, size);
            }
            loader->RemoveTask(self->task);
            self->task = -1;
            self->state = self->state + 1;
        }
    } else if (state == 9) {
        char* g = (char*)func_020421a0();
        if (*(int*)(g + kGlobalFieldOffset + 8) == 3) {
            Manager0207f7f0* p = self->f18;
            p->lists = self->f10;
            p->mode = 2;
            func_0207f7f0(p, self->f14, 3);
            p->active = 1;
            func_0207fcb8(p);
            func_0207fd44(p);
            func_0207fd88(p);
            volatile unsigned short* bg = (volatile unsigned short*)0x4000008;
            bg[0] = (bg[0] & ~3) | 2;
            bg[1] = bg[1] & ~3;
            bg[2] = (bg[2] & ~3) | 1;
            bg[3] = (bg[3] & ~3) | 3;
            *(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & ~0x1f00) | 0x1700;
            self->mode = 7;
            self->state = 0;
            if (self->flags & 1) {
                GameState* gs = GameState::GetInstance();
                if (self->f1fb == 0) {
                    self->f1f7 = func_020100a8(gs);
                    self->state = 0;
                    if (func_ov003_02155f88(self, self->f1f7)) {
                        self->f1ec = 8;
                        self->mode = 7;
                        func_0207fe44(p);
                    } else {
                        self->flags = self->flags | 2;
                        self->f1ec = 9;
                        self->mode = 3;
                        self->state = 0;
                    }
                } else {
                    self->f1f7 = self->f1f2;
                    self->f1ec = 6;
                    self->mode = 2;
                    self->state = 2;
                }
            } else {
                char* x = (char*)func_0205ec34();
                if (func_0206dfb0(x, x + 0x8c, 0x796)) {
                    self->f1ec = 4;
                    self->mode = 1;
                } else {
                    self->f1ec = 2;
                    self->mode = 2;
                }
            }
        }
    }
}
