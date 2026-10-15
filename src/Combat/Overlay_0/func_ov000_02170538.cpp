#include <globaldefs.h>

struct Struct0203c1c8 {
    int x;
    int y;
    int paletteOffset;
    int alignment;
    int priority;
    short entryIndex;
};

struct Obj0203c108;

void DispatchEntriesOnce021704d8(struct Struct0203c1c8* obj, int* arr1, int* arr2, int* arr3);
int HasAnyFlags_021719f8_021719f8(int* obj);
void SwapGlobalEntry0203c108(struct Obj0203c108* obj, char* fmt);
void ReleaseGlobalEntry0203c198(char* obj);

extern "C" void __clear(void* buf, int count);

struct Slot02170538 {
    char pad0[0x10];
    signed char states[8];
    signed char index;
    char pad19[0x1c - 0x19];
    signed char b1c;
    signed char b1d;
    char pad1e[0x24 - 0x1e];
    unsigned char flags;
    char pad25;
    unsigned short u26;
    int f28;
    short s2c;
    signed char b2e;
    char pad2f[0x3c - 0x2f];
    int f3c;
    char pad40[0x44 - 0x40];
    int x;
    int y;
    int idx;
    struct Struct0203c1c8 label;
    struct Struct0203c1c8 text;
    char pad80[0x87 - 0x80];
    unsigned char visible;
    char pad88[0x443 - 0x88];
    signed char b443;
};

extern "C" int func_ov000_0217f5dc(struct Slot02170538* e);
extern "C" int func_ov000_02170c7c(struct Slot02170538* e);
extern "C" int func_ov000_02171a74(struct Slot02170538* e, char* buf);

struct Palette02170538 {
    int v[2];
};

extern const struct Rodata02170538 {
    char pad0[0x7c];
    struct Palette02170538 large;
    struct Palette02170538 small;
} data_ov000_021832f4;

// USA: func_ov000_02170538
extern "C" ARM void func_ov000_02170538(struct Slot02170538* e, int ox, int oy, int mode) {
    if (e->idx < 0) return;
    if (!func_ov000_0217f5dc(e)) return;
    int cls = func_ov000_02170c7c(e);
    if (e->flags & 4) {
        int a2[2] = { e->x + 0x25, e->x + 0x26 };
        int b2[2] = { e->y + 0xb, e->y + 0xb };
        struct Palette02170538 c2 = data_ov000_021832f4.large;
        c2.v[0] = cls;
        DispatchEntriesOnce021704d8(&e->text, a2, b2, c2.v);
        return;
    }
    int a[2] = { e->x + 0x28 + ox, e->x + 0x30 + ox };
    int b[2] = { e->y + 8 + oy, e->y + 8 + oy };
    struct Palette02170538 c = data_ov000_021832f4.small;
    c.v[0] = cls;
    DispatchEntriesOnce021704d8(&e->text, a, b, c.v);
    if (e->states[e->index] == 0x67) return;
    int d[2] = { e->x + 0xb3 + ox, e->x + 0xb4 + ox };
    int f[2][2] = { { e->y + 0xf + oy, e->y + 0xf + oy }, { e->y + 8 + oy, e->y + 8 + oy } };
    int sel = 1;
    unsigned int cur = e->f3c & 0x80019;
    unsigned int want = e->f28 & 0x80019;
    if (HasAnyFlags_021719f8_021719f8((int*)e)) {
        if (cur != want) {
            char buf[0x80];
            __clear(buf, sizeof(buf));
            if (func_ov000_02171a74(e, buf) >= 0) {
                SwapGlobalEntry0203c108((struct Obj0203c108*)&e->label, buf);
            }
            e->f3c = e->f28;
        }
        DispatchEntriesOnce021704d8(&e->label, d, f[0], c.v);
        return;
    }
    if (cur != want && (e->f3c & 0x80019)) {
        ReleaseGlobalEntry0203c198((char*)&e->label);
        e->f3c = e->f28;
        e->b1d = -1;
        e->s2c = -1;
        e->b2e = -1;
        e->u26 = 0;
    }
    int k = 3;
    if (e->states[e->index] != 0x66) k = 0;
    if (e->u26 == 3) sel = 0;
    if (e->b1c == 6) sel = 0;
    if (e->states[e->index] < 0x64) {
        if (e->visible) {
            sel = 0;
        } else {
            return;
        }
    }
    c.v[0] = k;
    if (mode == 2) return;
    if (e->b443 != 5) sel = 0;
    DispatchEntriesOnce021704d8(&e->label, d, f[sel], c.v);
}
