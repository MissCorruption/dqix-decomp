#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" char *func_020421a0(void);
extern "C" char *func_02012fe4(void);
extern "C" void *func_0205ec34(void);
extern "C" void func_ov003_02170960(void *self, int a, int b);
#if defined(jpn)
extern "C" void func_ov003_021701e4(void *self, int a);
#endif

struct Obj_0216f414;
struct Entry0216efdc;
extern "C" Entry0216efdc *func_ov003_0216f414(Obj_0216f414 *list, int id);
extern "C" int func_0206dfb0(int a, unsigned char *bits, int index);
extern "C" void func_0206df6c(void *a, unsigned char *bits, int index, int set);

struct Entry0216efdc {
    unsigned char pad0[0x16];
    unsigned char flags;
};

struct Global0216efdc {
#if defined(jpn)
    char unk_0[0x868];
#else
    char unk_0[0x998];
#endif
    int unk_998;
    char unk_99c[4];
    int unk_9a0;
};

struct Progress0216efdc {
    unsigned char pad0[0xb38];
    int chapter;
};

struct BgCnt0216efdc {
    volatile unsigned short priority_ : 2;
    volatile unsigned short rest_ : 14;
};

struct Menu0216efdc {
    unsigned char unk_0;
    unsigned char unk_1;
    signed char state_;
    char unk_3;
    unsigned char unk_4;
    unsigned char unk_5;
    signed char unk_6;
    signed char unk_7;
    unsigned char unk_8;
    signed char unk_9;
    char unk_a[2];
    short unk_c;
    short unk_e;
    char unk_10[0x20 - 0x10];
    unsigned short unk_20;
    char unk_22[0xd4 - 0x22];
    void *unk_d4;
};

#if defined(jpn)
enum { regionalOffset0 = 0x1860 };
#else
enum { regionalOffset0 = 0x1840 };
#endif

// USA: func_ov003_0216efdc
extern "C" ARM void func_ov003_0216efdc(Menu0216efdc *self) {
    Global0216efdc *global     = (Global0216efdc *) func_020421a0();
    Progress0216efdc *progress = (Progress0216efdc *) (func_02012fe4() + regionalOffset0);
    int chapter                = progress->chapter;
    int state                  = self->state_;
    if (state == 0) {
        volatile unsigned short *bg = (volatile unsigned short *) 0x4000008;
        bg[0]                       = (bg[0] & ~3);
        bg[1]                       = (bg[1] & ~3) | 1;
        bg[2]                       = (bg[2] & ~3) | 2;
        bg[3]                       = (bg[3] & ~3) | 3;
        if (self->unk_d4 != 0) {
            Entry0216efdc *e = func_ov003_0216f414((Obj_0216f414 *) self->unk_d4, 0x19);
            if (e != 0) {
                e->flags |= 2;
            }
            e = func_ov003_0216f414((Obj_0216f414 *) self->unk_d4, 0x1a);
            if (e != 0) {
                e->flags &= ~2;
            }
        }
        void *save = func_0205ec34();
        if (func_0206dfb0((int) save, (unsigned char *) save + 0x8c, 0x783) != 0) {
            self->state_ = 1;
            return;
        }
        func_0206df6c(save, (unsigned char *) save + 0x8c, 0x783, 1);
#if defined(jpn)
        func_ov003_021701e4(self, 0x1f);
#else
        func_ov003_02170960(self, 0x1f, 0);
#endif
        global->unk_998 = 1;
        self->unk_20 |= 1;
        self->state_ = 0x65;
    } else if (state == 0x65) {
        if (global->unk_9a0 == 0 && global->unk_998 == 0) {
            self->state_ = 1;
        }
    } else if (state == 1) {
        if (g_keyManager.TestKeysPressed(2) != 0 || self->unk_e == 5) {
            self->unk_1  = 6;
            self->state_ = 0;
            return;
        }
        if (chapter == 0) {
            return;
        }
        if (g_keyManager.TestKeyRepeat(0x10) != 0 || self->unk_e == 0x11) {
            self->unk_0++;
            if (self->unk_0 > self->unk_4) {
                self->unk_0 = 1;
            }
            int n;
            if (self->unk_0 == self->unk_4 && (n = chapter % 8) != 0) {
                self->unk_5 = n;
            } else {
                self->unk_5 = 8;
            }
            if (self->unk_6 > self->unk_5 - 1) {
                self->unk_6 = self->unk_5 - 1;
            }
            self->unk_7  = -1;
            self->unk_1  = 2;
            self->state_ = 0;
        } else if (g_keyManager.TestKeyRepeat(0x20) != 0 || self->unk_e == 0x10) {
            self->unk_0--;
            if (self->unk_0 < 1) {
                self->unk_0 = self->unk_4;
            }
            int n;
            if (self->unk_0 == self->unk_4 && (n = chapter % 8) != 0) {
                self->unk_5 = n;
            } else {
                self->unk_5 = 8;
            }
            if (self->unk_6 > self->unk_5 - 1) {
                self->unk_6 = self->unk_5 - 1;
            }
            self->unk_7  = -1;
            self->unk_1  = 2;
            self->state_ = 0;
        } else if (g_keyManager.TestKeyRepeat(0x80) != 0) {
            self->unk_6 = self->unk_6 + 1;
            if (self->unk_6 > self->unk_5 - 1) {
                self->unk_6 = 0;
            }
            self->unk_7  = -1;
            self->unk_1  = 2;
            self->state_ = 0;
        } else if (g_keyManager.TestKeyRepeat(0x40) != 0) {
            self->unk_6 = self->unk_6 - 1;
            if (self->unk_6 < 0) {
                self->unk_6 = self->unk_5 - 1;
                if (self->unk_6 < 0) {
                    self->unk_6 = 0;
                }
            }
            self->unk_7  = -1;
            self->unk_1  = 2;
            self->state_ = 0;
        } else {
            int sel = -2;
            if (self->unk_e <= 0xd) {
                if (self->unk_e >= 6) {
                    sel = self->unk_e - 6;
                }
            }
            if (g_keyManager.TestKeysPressed(0x401) != 0 || sel == self->unk_7) {
                self->unk_8  = 0;
                self->unk_9  = -1;
                self->unk_1  = 5;
                self->state_ = 0;
                return;
            }
            if (self->unk_c > 0xd) {
                return;
            }
            if (self->unk_c < 6) {
                return;
            }
            if (g_touchInput.IsPressed() == 0) {
                return;
            }
            self->unk_6 = self->unk_c - 6;
            if (self->unk_6 > self->unk_5 - 1) {
                self->unk_6 = self->unk_5 - 1;
            }
            if (self->unk_7 != self->unk_6) {
                self->unk_7  = self->unk_6;
                self->unk_1  = 2;
                self->state_ = 0;
                return;
            }
        }
    }
}
