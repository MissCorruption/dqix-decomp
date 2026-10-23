#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#define RG(u, j) (j)
#define OBJ (self + 0xe20)
#define APPLY(s, k, t) func_0205d5d0(s, k, t, 1)
#else
#define RG(u, j) (u)
#define OBJ (self + 0x2c8 + 0xc00)
#define APPLY(s, k, t) func_0205d5d0(s, k, t, 1, 0)
#endif

struct Struct0205de24;
struct Struct_0205c570;
struct Struct_0205d81c;
struct Obj0205eaa0;
struct StructA0205d5d0;

extern "C" int func_ov002_0215a9f0(void *self);
extern "C" char *func_0205ec34();
extern "C" short func_0206e3e8(int unused, int key);
extern "C" void func_0205de24(struct Struct0205de24 *obj, unsigned char keyLow,
                                                                        unsigned char keyHigh);
extern "C" void func_ov002_02161cf0(char *self);
extern "C" void func_ov002_021609d4(char *self);
extern "C" void func_ov002_02161b98(char *self);
extern "C" int func_0205d794(struct Struct_0205c570 *s);
extern "C" void func_ov002_0215bba8(char *self);
struct Obj_0205da38;
extern "C" int func_0205da38(struct Obj_0205da38* obj, int key);
extern "C" int func_ov002_0215a9b4(void *self, short idx);
extern "C" int func_0206e3d4(int a, int b);
extern "C" char *func_0205d81c(struct Struct_0205d81c *s, int key);
extern "C" void func_0205eaa0(struct Obj0205eaa0 *obj, int a, int b);
extern "C" void func_ov002_0215a9cc(void *self, int idx);
extern "C" char *func_020421a0();
extern "C" void *memset(void *dst, int value, unsigned int length);
extern "C" void func_ov002_021607cc(void *obj, void *ptr, int flag);
#if defined(jpn)
struct Struct_0205def8;
extern "C" void func_0205def8(struct Struct_0205def8 *s, int clear, int key);
extern "C" int func_0205d5d0(struct StructA0205d5d0 *, int, int, int);
#else
extern "C" int func_0205d5d0(struct StructA0205d5d0 *, int, int, int, unsigned char);
#endif
extern "C" void func_ov002_02156e90(void *obj);
extern "C" int func_ov002_02161b48(char *self, int v);

extern "C" char data_02108760;

struct Fld0216994c {
    char pad[0x68];
    int f68;
};

// USA: func_ov002_0216994c
extern "C" ARM void func_ov002_0216994c(char *self) {
    int state = *(int *) (self + RG(0x1bc0, 0x1a88));
    if (state == 0) {
        *(unsigned int *) (self + RG(0x247c, 0x22ac)) &= ~4;
        int key                    = func_ov002_0215a9f0(self);
        *(short *) (self + RG(0x1c0c, 0x1ad4)) = func_0206e3e8((int) func_0205ec34(), key) - 1;
        if (*(short *) (self + RG(0x1c0c, 0x1ad4)) < 0) {
            *(short *) (self + RG(0x1c0c, 0x1ad4)) = 0;
        }
        func_0205de24((struct Struct0205de24 *) OBJ, 0, 3);
        func_ov002_02161cf0(self);
        func_ov002_021609d4(self);
        *(int *) (self + RG(0x1bc0, 0x1a88)) += 1;
        return;
    }
    if (state != 1) {
        return;
    }
#if defined(jpn)
    func_0205def8((struct Struct_0205def8 *) OBJ, 0, 0x22);
    func_0205def8((struct Struct_0205def8 *) OBJ, 0, 0x23);
#endif
    *(unsigned int *) (self + RG(0x247c, 0x22ac)) |= 4;
    func_ov002_02161b98(self);
    *(short *) (self + RG(0x1c0c, 0x1ad4)) =
        func_0205d794((struct Struct_0205c570 *) OBJ);
    struct Fld0216994c *l = (struct Fld0216994c *) OBJ + 1;
    l--;
    int f = l->f68;
    if (*(unsigned char *) (self + RG(0x2484, 0x22b4)) != f) {
        func_ov002_0215bba8(self);
    }
    int a  = g_keyManager.TestKeysPressed(0x601);
    int b  = func_0205da38((struct Obj_0205da38*)OBJ, 0x14);
    int ok = (a | b) ? 1 : 0;
    if (ok) {
        int next = func_ov002_0215a9b4(self, *(short *) (self + RG(0x1c0c, 0x1ad4)));
        int idx  = func_0206e3d4((int) func_0205ec34(), next);
        int one  = 1;
        int en   = one;
        if (idx >= 0 && *(short *) (self + RG(0x1c0c, 0x1ad4)) != 0x1f) {
            en = 0;
            if (*(unsigned int *) (self + RG(0x2480, 0x22b0)) & (one << (idx - 1))) {
                en = one;
            }
        }
        if (!en) {
            return;
        }
        *(unsigned int *) (self + RG(0x247c, 0x22ac)) &= ~4;
        unsigned char *elem = (unsigned char *) func_0205d81c(
            (struct Struct_0205d81c *) OBJ, RG(0x21, 0x24));
        if (elem == 0) {
            return;
        }
        func_0205eaa0((struct Obj0205eaa0 *) &data_02108760, 1, 0);
        func_ov002_0215a9cc(self, idx);
        void *buf = *(void **) (func_020421a0() + RG(0x5c, 0x28));
        memset(buf, 0, RG(0x960, 0x800));
        func_ov002_021607cc(self, buf, (elem[0xc5] & 2) ? 1 : 0);
        APPLY((struct StructA0205d5d0 *) OBJ, RG(0x21, 0x24), (int) buf);
        func_ov002_02156e90(self);
        return;
    }
    if (func_ov002_02161b48(self, 1)) {
        *(unsigned int *) (self + RG(0x247c, 0x22ac)) &= ~4;
        *(short *) (self + RG(0x1c0c, 0x1ad4)) = 0;
        func_ov002_02156e90(self);
    }
}
