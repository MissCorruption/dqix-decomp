// USA: func_ov003_02175504
#include <globaldefs.h>

struct Obj2081;
struct Container020dedd0 {
    unsigned short count;
    unsigned char unknown02[10];
    void* entries;
    unsigned char unknown10[4];
    unsigned char useBinarySearch;
};
struct Obj020dee58;

extern "C" unsigned char *func_02081da8(Obj2081 *, int);
extern "C" bool func_0204c7cc(unsigned char *);
extern "C" Obj020dee58 *func_020dedd0(Container020dedd0 *, int);
extern "C" void func_020809c4(void *, int, int, short *, short *);
extern "C" int func_020dee58(Obj020dee58 *);
extern "C" void func_ov003_0217585c(void *, int, int, int, unsigned char);
extern "C" bool func_0204c7e0(unsigned char *);

#if defined(jpn)
extern unsigned char data_ov003_0217e34d[];
extern unsigned char data_ov003_0217e32c[];
#else
extern unsigned char data_ov003_0217fabd[];
extern unsigned char data_ov003_0217fa9c[];
#endif

struct Entry02175504 {
    char unk_0[0xac];
    short x_;
    short y_;
};

struct Battle02175504 {
#if defined(jpn)
    unsigned char unknownBeforeKeys[0x7c4];
#else
    unsigned char unknownBeforeKeys[0x848];
#endif
    short keys_[12];
    unsigned char unknownBeforeEntries[0x14];
    Container020dedd0 entries;
    unsigned char unknownAfterEntries[0x10];
    Obj2081* menu;
    unsigned char unknownBeforeUpdate[0xff8 - 0x8a0];
    int updateEnabled;
    unsigned char unknownBeforeIndex[2];
    short selectedIndex;
    unsigned char unknownBeforeState[0xc];
    short state;
    unsigned char unknownAfterState[2];
    short unknown1010;
    short selection;
    short page;
};

// USA: func_ov003_02175504
extern "C" ARM void func_ov003_02175504(Battle02175504 *self) {
    Obj2081 *obj     = self->menu;
    unsigned char k  = 6;
    unsigned char *e = func_02081da8(obj, 3);
    if (e) {
        if (!func_0204c7cc(e)) return;
        short a = 7;
        short b = (short) (self->page * 6);
        for (unsigned char i = 0; i < 6; i++) {
            Obj020dee58 *it = func_020dedd0(&self->entries,
                                                                                self->keys_[b]);
            if (it) {
                short x, y;
                func_020809c4(obj, 3, a, &x, &y);
                int v = func_020dee58(it);
                func_ov003_0217585c(self, x, y - 1, (v + 6) & 0xff, k);
            }
            k++;
            a++;
            b++;
        }
        return;
    }
    if (self->state == 0x77) {
        Entry02175504 *cand = 0;
        e                   = func_02081da8(obj, 0x15);
        if (e && func_0204c7cc(e)) cand = (Entry02175504 *) e;
        e = func_02081da8(obj, 0x16);
        if (e && func_0204c7cc(e)) cand = (Entry02175504 *) e;
        e = func_02081da8(obj, 0x1e);
        if (e && func_0204c7cc(e)) cand = (Entry02175504 *) e;
        if (cand) {
            int cx = cand->x_;
            int cy = cand->y_;
            cx     = (short) (cx << 3) + 3;
            cy     = (short) (cy << 3) + 3;
#if defined(jpn)
            func_ov003_0217585c(self, cx, cy, data_ov003_0217e34d[(self->selection + (k - 0x124)) & 0xff], k);
#else
            func_ov003_0217585c(self, cx, cy, data_ov003_0217fabd[(self->selection + (k - 0x124)) & 0xff], k);
#endif
            return;
        }
    }
    if (self->updateEnabled == 0) return;
    if (self->selectedIndex < 0) return;
    e = func_02081da8(obj, 0xe);
    if (!e) return;
    if (!func_0204c7e0(e)) return;
    short a = 0x68;
    for (unsigned char i = 0; i < 8; i++) {
        short x, y;
        func_020809c4(obj, 0xe, a, &x, &y);
#if defined(jpn)
        func_ov003_0217585c(self, x, y - 1, data_ov003_0217e32c[i], k);
#else
        func_ov003_0217585c(self, x, y - 1, data_ov003_0217fa9c[i], k);
#endif
        a++;
        k++;
    }
}
