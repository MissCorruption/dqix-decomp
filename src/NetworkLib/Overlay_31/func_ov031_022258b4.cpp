#include <globaldefs.h>

struct GXOamAttr { unsigned int attr01; unsigned short attr2; unsigned short attr3; };
struct Point16 { unsigned short x, y; };
struct Rectangle16 { unsigned short x, y, x2, y2; };
struct Counts5 { unsigned char n[5]; };

struct Obj0223bcc8;
struct Obj0223c534;
struct Header_0223bd28;
struct ElemArray_0223baa0 { int pad0, pad1; GXOamAttr* arr; };
struct AObj0223ca54;

struct WifiSetupKeypad022258b4 {
    void* rows[4];
    GXOamAttr* keys[10];
    GXOamAttr* extraKeys[2];
    void* buttons[2];
    void* rowBlocks[4];
    void* cursor;
    void* task;
    char input;
    signed char pressedKey;
    signed char highlightedKey;
    signed char cursorKey;
    signed char lastCursorKey;
    unsigned char repeatTimer;
    unsigned char canDelete;
    unsigned char canType;
    unsigned char canAdvance;
    unsigned char deleteErrorPlayed;
};
struct WifiSetupTextBox022258b4 {
    unsigned short x, y, width, height;
};

WifiSetupKeypad022258b4* data_ov031_02250c00;

extern const unsigned char data_ov031_02248c70[2];
extern const unsigned char data_ov031_02248c74[2];
extern const unsigned char data_ov031_02248c78[2];
extern const unsigned char data_ov031_02248c7c[2];
extern const unsigned char data_ov031_02248c80[3];
extern const unsigned char data_ov031_02248c84[3];
extern const Point16 data_ov031_02248c88 = {28, 20};
extern const Point16 data_ov031_02248c8c = {12, 4};
extern const Point16 data_ov031_02248c94 = {120, 18};
extern const Point16 data_ov031_02248c90 = {28, 20};
extern const Counts5 data_ov031_02248c9d = {{3, 3, 3, 1, 0}};
extern const Counts5 data_ov031_02248c98 = {{0, 0, 0, 0, 2}};
extern const Counts5 data_ov031_02248ca2 = {{0, 0, 0, 2, 0}};
extern const Point16 data_ov031_02248cb0[2];
extern const Point16 data_ov031_02248cb8[2];
extern const unsigned short data_ov031_02248cc0[13];
extern const Point16 data_ov031_02248cda[10];
extern const Point16 data_ov031_02248d02[14];
extern const signed char data_ov031_02248d3a[56];
extern const unsigned char data_ov031_02248d74[11];

extern Rectangle16 data_ov031_022493b8;

extern "C" void* func_ov031_0223cf4c(unsigned int, int);
extern "C" GXOamAttr* func_ov031_0223be44(int, int);
extern "C" Obj0223bcc8* func_ov031_0223be70(int, int, int);
extern "C" void func_ov031_0223bab4(void*, int, int, int);
extern "C" void func_ov031_0223bcc8(Obj0223bcc8*, int, int);
extern "C" void* func_ov031_0223c458(int, int, int, int, int*, int);
extern "C" void func_ov031_0223c980(void*, int, int, int, int, int, unsigned long, const unsigned short*);
extern "C" Obj0223bcc8* func_ov031_0223b8c4(int, int, int);
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_0223ba20(void*);
extern "C" void func_ov031_0223e2b8(void* obj, int v);
extern "C" void func_ov031_0223e2c0(int, void*);
extern "C" void func_ov031_0223bd28(Header_0223bd28*, int, unsigned int*, unsigned int*);
extern "C" void func_ov031_0223cb34(const Point16*, const Point16*, Rectangle16*);
extern "C" int func_ov031_0223d49c(Rectangle16* p);
extern "C" int func_ov031_0223d5ac(Rectangle16*);
extern "C" int func_ov031_0223d414(Rectangle16*);
extern "C" void func_ov031_02236878(int v);
extern "C" int func_ov031_0223d394(int);
extern "C" ARM int func_ov031_0223d354(int mask);
extern "C" ARM int func_ov031_0223d3d4(int mask);
extern "C" void func_ov031_0223ca54(AObj0223ca54* a, int x, int y, void* d, int e);
extern "C" void func_ov031_0223bbd8(void* obj, int idx, int x, int y);
extern "C" void func_ov031_0223bb58(void* obj, int idx, int a, int b);
extern "C" GXOamAttr* func_ov031_0223baa0(ElemArray_0223baa0* obj, int idx);
extern "C" int func_ov031_0223bdb0(int a, int b, int c);
extern "C" void func_ov031_0223c534(Obj0223c534*);
extern "C" void func_ov031_0223da58(void*);
extern "C" void func_ov031_0223cf70(void*);

extern "C" void func_ov031_02225c90(void* obj);
extern "C" void func_ov031_02225d14(void* obj);
extern "C" void func_ov031_02225d98(void* obj);
extern "C" void func_ov031_02225e1c(void* obj);
extern "C" void func_ov031_02225ea0(void* obj);
extern "C" void func_ov031_02225f14(void);
extern "C" void func_ov031_02225f2c(void);
extern "C" void func_ov031_02226108(void);
extern "C" void func_ov031_022262d8(void);
extern "C" void func_ov031_022264c8(int);
extern "C" void func_ov031_02226514(void);
extern "C" void func_ov031_022266b0(int row, int y);
extern "C" void func_ov031_02226910(int a, int b);
extern "C" void func_ov031_022269d8(void);
extern "C" void func_ov031_02226a64(int input);
extern "C" void func_ov031_02226b10(void* obj);
extern "C" void func_ov031_02226b88(void* obj);
extern "C" void func_ov031_02226bf8(void* obj);
extern "C" void func_ov031_02226c68(void* obj);
extern "C" void func_ov031_02226cd8(void* obj);
extern "C" void func_ov031_02226d48(void* object);

static inline void G2_GetOBJPosition(GXOamAttr* oam, unsigned int* x, unsigned int* y) {
    *x = (oam->attr01 & 0x1ff0000) >> 16;
    *y = oam->attr01 & 0xff;
}

#define GX_OAM_ATTR01_Y_SHIFT 0
#define GX_OAM_ATTR01_Y_MASK 0x000000ff
#define GX_OAM_ATTR01_RSENABLE_MASK 0x00000300
#define GX_OAM_ATTR01_X_SHIFT 16
#define GX_OAM_ATTR01_X_MASK 0x01ff0000
#define GX_OAM_ATTR01_RS_SHIFT 25
#define GX_OAM_ATTR01_RS_MASK 0x3e000000

typedef enum {
    GX_OAM_EFFECT_NONE = 0,
    GX_OAM_EFFECT_FLIP_H = 0x10000000,
    GX_OAM_EFFECT_FLIP_V = 0x20000000,
    GX_OAM_EFFECT_FLIP_HV = 0x30000000,
    GX_OAM_EFFECT_AFFINE = 0x100,
    GX_OAM_EFFECT_NODISPLAY = 0x200,
    GX_OAM_EFFECT_AFFINE_DOUBLE = 0x300
} GXOamEffect;

static inline void G2_SetOBJEffect(GXOamAttr* oam, GXOamEffect effect, int rsParam) {
    if (GX_OAM_EFFECT_AFFINE != effect && GX_OAM_EFFECT_AFFINE_DOUBLE != effect) {
        oam->attr01 = ((oam->attr01 & ~(GX_OAM_ATTR01_RSENABLE_MASK | GX_OAM_ATTR01_RS_MASK)) | effect);
    } else {
        oam->attr01 = ((oam->attr01 & ~(GX_OAM_ATTR01_RSENABLE_MASK | GX_OAM_ATTR01_RS_MASK)) | effect | (rsParam << GX_OAM_ATTR01_RS_SHIFT));
    }
}

static inline void SetOBJPosition022266b0(GXOamAttr* oam, int x, int y) {
    oam->attr01 = ((oam->attr01 & ~(GX_OAM_ATTR01_Y_MASK | GX_OAM_ATTR01_X_MASK)) | y |
                   ((x & (GX_OAM_ATTR01_X_MASK >> GX_OAM_ATTR01_X_SHIFT)) << GX_OAM_ATTR01_X_SHIFT));
}

// USA: func_ov031_022258b4
extern "C" ARM void func_ov031_022258b4() {
    WifiSetupTextBox022258b4 geometry = {0, 1, 0, 0};
    int num;
    int ix;
    int i, j;
    unsigned short buf[2];
    geometry.width = 28;
    geometry.height = 20;
    data_ov031_02250c00 = (WifiSetupKeypad022258b4*)func_ov031_0223cf4c(sizeof(WifiSetupKeypad022258b4), 4);
    data_ov031_02250c00->input = 0x1f;
    data_ov031_02250c00->cursorKey = 0;
    data_ov031_02250c00->canDelete = 1;
    data_ov031_02250c00->canType = 1;
    data_ov031_02250c00->canAdvance = 1;
    for (i = 0; i < 10; ++i) {
        data_ov031_02250c00->keys[i] = func_ov031_0223be44(0, 0x36);
        data_ov031_02250c00->keys[i]->attr01 = (data_ov031_02250c00->keys[i]->attr01 & 0xc1fffcff) | 0x200;
        data_ov031_02250c00->keys[i]->attr2 = (data_ov031_02250c00->keys[i]->attr2 & ~0xc00) | 0xc00;
    }
    for (i = 0; i < 2; ++i) {
        data_ov031_02250c00->extraKeys[i] = func_ov031_0223be44(0, data_ov031_02248c74[i]);
        data_ov031_02250c00->extraKeys[i]->attr01 = (data_ov031_02250c00->extraKeys[i]->attr01 & 0xc1fffcff) | 0x200;
        data_ov031_02250c00->extraKeys[i]->attr2 = (data_ov031_02250c00->extraKeys[i]->attr2 & ~0xc00) | 0xc00;
    }
    for (i = 0; i < 2; ++i) {
        data_ov031_02250c00->buttons[i] = func_ov031_0223be70(0, data_ov031_02248c78[i], 1);
        func_ov031_0223bab4(data_ov031_02250c00->buttons[i], -1, 0x200, 0);
        func_ov031_0223bcc8((Obj0223bcc8*)data_ov031_02250c00->buttons[i], -1, 3);
    }
    buf[1] = 0;
    for (i = 0; i < 4; ++i) {
        data_ov031_02250c00->rows[i] = func_ov031_0223c458(0, 12, 4, 0, &num, 0);
        ix = i * 3;
        geometry.x = 0;
        for (j = 0; j < 3; ++j) {
            buf[0] = data_ov031_02248cc0[ix];
            func_ov031_0223c980(data_ov031_02250c00->rows[i], geometry.x,
                geometry.y, geometry.width, geometry.height, 2, 0x480, buf);
            geometry.x += 32;
            ++ix;
        }
        data_ov031_02250c00->rowBlocks[i] = func_ov031_0223b8c4(0, num, 0);
    }
    data_ov031_02250c00->cursor = func_ov031_0223be70(0, 0x44, 1);
    func_ov031_0223bab4(data_ov031_02250c00->cursor, -1, 0x200, 0);
    func_ov031_0223bcc8((Obj0223bcc8*)data_ov031_02250c00->cursor, -1, 2);
    data_ov031_02250c00->task = func_ov031_0223e218(0, (void*)func_ov031_02225c90, 0, 0x78);
    func_ov031_022266b0(0, 0xc0);
}

extern const Point16 data_ov031_02248cb0[2] = {{0x72, 0x91}, {0x92, 0x91}};
extern const Point16 data_ov031_02248cb8[2] = {{4, 0xaa}, {0x84, 0xaa}};
extern const unsigned short data_ov031_02248cc0[13] = {0x37, 0x38, 0x39, 0x34, 0x35, 0x36, 0x31, 0x32, 0x33, 0x30, 0x20, 0x20, 0};
extern const Point16 data_ov031_02248cda[10] = {
    {0x52, 0x4c}, {0x72, 0x4c}, {0x92, 0x4c},
    {0x52, 0x63}, {0x72, 0x63}, {0x92, 0x63},
    {0x52, 0x7a}, {0x72, 0x7a}, {0x92, 0x7a},
    {0x52, 0x91},
};
extern const Point16 data_ov031_02248d02[14] = {
    {0x50, 0x4a}, {0x70, 0x4a}, {0x90, 0x4a},
    {0x50, 0x61}, {0x70, 0x61}, {0x90, 0x61},
    {0x50, 0x78}, {0x70, 0x78}, {0x90, 0x78},
    {0x50, 0x8f}, {0x70, 0x8f}, {0x90, 0x8f},
    {0x02, 0xa8}, {0x82, 0xa8},
};
extern const signed char data_ov031_02248d3a[56] = {
    2, 12, 1, 3,   0, 13, 2, 4,   1, 13, 0, 5,   5, 0, 4, 6,
    3, 1, 5, 7,    4, 2, 3, 8,    8, 3, 7, 9,    6, 4, 8, 10,
    7, 5, 6, 11,   11, 6, 10, 12, 9, 7, 11, 13,  10, 8, 9, 13,
    13, 9, 13, 0,  12, -1, 12, -2,
};

// USA: func_ov031_02225bf0
extern "C" ARM void func_ov031_02225bf0(void) {
	func_ov031_0223ba20(data_ov031_02250c00->cursor);
	func_ov031_0223e2b8(data_ov031_02250c00->task, (int)func_ov031_02226b10);
}

// USA: func_ov031_02225c24
extern "C" ARM unsigned char func_ov031_02225c24(void) {
    return data_ov031_02250c00->input;
}

// USA: func_ov031_02225c38
extern "C" ARM void func_ov031_02225c38(int v) {
    data_ov031_02250c00->canDelete = (unsigned char)v;
}

// USA: func_ov031_02225c4c
extern "C" ARM void func_ov031_02225c4c(unsigned char v) {
	data_ov031_02250c00->canType = v;
}

// USA: func_ov031_02225c60
extern "C" ARM void func_ov031_02225c60(unsigned char v) {
	data_ov031_02250c00->canAdvance = v;
}

// USA: func_ov031_02225c74
extern "C" ARM int func_ov031_02225c74(void) {
    return data_ov031_02250c00 != NULL;
}

// USA: func_ov031_02225c90
extern "C" ARM void func_ov031_02225c90(void* obj) {
    WifiSetupKeypad022258b4* e = data_ov031_02250c00;
    int x, y;
    G2_GetOBJPosition(e->keys[0], (unsigned int*)&x, (unsigned int*)&y);
    y -= 0xc;
    if (y > 0x4c) {
        func_ov031_022266b0(0, y);
        return;
    }
    func_ov031_022266b0(0, 0x4c);
    func_ov031_022266b0(1, 0xc0);
    func_ov031_0223e2b8(obj, (int)func_ov031_02225d14);
}

struct Pair02225d14 { int off; volatile int hi; };

// USA: func_ov031_02225d14
extern "C" ARM void func_ov031_02225d14(void* obj) {
    WifiSetupKeypad022258b4* e = data_ov031_02250c00;
    int val = e->keys[3]->attr01;
    struct Pair02225d14 p;
    p.hi = (unsigned int)(val & 0x1ff0000) >> 0x10;
    p.off = (val & 0xff) - 0xc;
    if (p.off > 0x63) {
        func_ov031_022266b0(1, p.off);
        return;
    }
    func_ov031_022266b0(1, 0x63);
    func_ov031_022266b0(2, 0xc0);
    func_ov031_0223e2b8(obj, (int)func_ov031_02225d98);
}

struct Pair02225d98 { int off; volatile int hi; };

// USA: func_ov031_02225d98
extern "C" ARM void func_ov031_02225d98(void* obj) {
    WifiSetupKeypad022258b4* e = data_ov031_02250c00;
    int val = e->keys[6]->attr01;
    struct Pair02225d98 p;
    p.hi = (unsigned int)(val & 0x1ff0000) >> 0x10;
    p.off = (val & 0xff) - 0xc;
    if (p.off > 0x7a) {
        func_ov031_022266b0(2, p.off);
        return;
    }
    func_ov031_022266b0(2, 0x7a);
    func_ov031_022266b0(3, 0xc0);
    func_ov031_0223e2b8(obj, (int)func_ov031_02225e1c);
}

struct Pair02225e1c { int off; volatile int hi; };

// USA: func_ov031_02225e1c
extern "C" ARM void func_ov031_02225e1c(void* obj) {
    WifiSetupKeypad022258b4* e = data_ov031_02250c00;
    int val = e->keys[9]->attr01;
    struct Pair02225e1c p;
    p.hi = (unsigned int)(val & 0x1ff0000) >> 0x10;
    p.off = (val & 0xff) - 0xc;
    if (p.off > 0x91) {
        func_ov031_022266b0(3, p.off);
        return;
    }
    func_ov031_022266b0(3, 0x91);
    func_ov031_022266b0(4, 0xc0);
    func_ov031_0223e2b8(obj, (int)func_ov031_02225ea0);
}

// USA: func_ov031_02225ea0
extern "C" ARM void func_ov031_02225ea0(void* arg) {
    unsigned int outHi, outLo;
    func_ov031_0223bd28((Header_0223bd28*)data_ov031_02250c00->buttons[0], 0, &outHi, &outLo);
    int off = (int)outLo - 0xc;
    outLo = (unsigned int)off;
    if (off > 0xaa) {
        func_ov031_022266b0(4, off);
        return;
    }
    func_ov031_022266b0(4, 0xaa);
    func_ov031_022269d8();
    func_ov031_0223e2b8(arg, (int)func_ov031_02225f14);
}

// USA: func_ov031_02225f14
extern "C" ARM void func_ov031_02225f14(void) {
    func_ov031_02225f2c();
    func_ov031_02226108();
    func_ov031_022262d8();
    func_ov031_02226514();
}

// USA: func_ov031_02225f2c
extern "C" ARM void func_ov031_02225f2c(void) {
    Rectangle16 p;
    if (!func_ov031_0223d49c(&data_ov031_022493b8)) return;
    data_ov031_02250c00->pressedKey = -1;
    const Point16* t1 = data_ov031_02248cda;
    int i = 0;
    do {
        func_ov031_0223cb34(t1, &data_ov031_02248c88, &p);
        if (func_ov031_0223d49c(&p)) {
            if (data_ov031_02250c00->canType == 0) {
                func_ov031_02236878(9);
                return;
            }
            func_ov031_02236878(0);
            data_ov031_02250c00->pressedKey = (signed char)i;
            return;
        }
        i++;
        t1++;
    } while (i < 10);
    const Point16* t2 = data_ov031_02248cb0;
    i = 0;
    do {
        func_ov031_0223cb34(t2, &data_ov031_02248c90, &p);
        if (func_ov031_0223d49c(&p)) {
            if (i == 0) {
                if (data_ov031_02250c00->canDelete == 0) goto call9_l2;
            }
            if (i != 1) goto call0_l2;
            if (data_ov031_02250c00->canAdvance != 0) goto call0_l2;
        call9_l2:
            func_ov031_02236878(9);
            return;
        call0_l2:
            func_ov031_02236878(0);
            data_ov031_02250c00->pressedKey = (signed char)(i + 0xa);
            return;
        }
        i++;
        t2++;
    } while (i < 2);
    const Point16* t3 = data_ov031_02248cb8;
    int j = 0;
    do {
        func_ov031_0223cb34(t3, &data_ov031_02248c94, &p);
        if (func_ov031_0223d49c(&p)) {
            func_ov031_02236878(0);
            data_ov031_02250c00->pressedKey = (signed char)(j + 0xc);
            return;
        }
        j++;
        t3++;
    } while (j < 2);
}

// USA: func_ov031_02226108
extern "C" ARM void func_ov031_02226108() {
    data_ov031_02250c00->input = 0;
    if (!func_ov031_0223d5ac(&data_ov031_022493b8)) return;
    Rectangle16 buf;
    int i;
    for (i = 0; i < 10; i++) {
        func_ov031_0223cb34(&data_ov031_02248cda[i], &data_ov031_02248c88, &buf);
        if (func_ov031_0223d5ac(&buf)) {
            WifiSetupKeypad022258b4* p = data_ov031_02250c00;
            if (p->pressedKey != i) return;
            p->input = data_ov031_02248d74[i];
            data_ov031_02250c00->cursorKey = i;
            func_ov031_022269d8();
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov031_0223cb34(&data_ov031_02248cb0[i], &data_ov031_02248c90, &buf);
        if (func_ov031_0223d5ac(&buf)) {
            WifiSetupKeypad022258b4* p = data_ov031_02250c00;
            if (p->pressedKey != i + 10) return;
            p->input = data_ov031_02248c84[i];
            data_ov031_02250c00->cursorKey = i + 10;
            func_ov031_022269d8();
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov031_0223cb34(&data_ov031_02248cb8[i], &data_ov031_02248c94, &buf);
        if (func_ov031_0223d5ac(&buf)) {
            WifiSetupKeypad022258b4* p = data_ov031_02250c00;
            if (p->pressedKey != i + 12) return;
            p->input = data_ov031_02248c80[i];
            data_ov031_02250c00->cursorKey = i + 12;
            func_ov031_022269d8();
            return;
        }
    }
}

// USA: func_ov031_022262d8
extern "C" ARM void func_ov031_022262d8() {
    Rectangle16 bounds;
    if (func_ov031_0223d414(&data_ov031_022493b8)) {
        {
            const Point16* extent;
            int index;
            const Point16* origin;
            origin = data_ov031_02248cda;
            extent = &data_ov031_02248c88;
            index = 0;
            do {
                func_ov031_0223cb34(origin, extent, &bounds);
                if (func_ov031_0223d414(&bounds)) {
                    if (data_ov031_02250c00->pressedKey != index) goto reset;
                    func_ov031_022264c8(index);
                    goto clear;
                }
                ++index; ++origin;
            } while (index < 10);
        }
        {
            const Point16* extent;
            const Point16* origin;
            int index;
            origin = data_ov031_02248cb0;
            extent = &data_ov031_02248c90;
            index = 0;
            do {
                func_ov031_0223cb34(origin, extent, &bounds);
                if (func_ov031_0223d414(&bounds)) {
                    if (data_ov031_02250c00->pressedKey != index + 10) goto reset;
                    func_ov031_022264c8(index + 10);
                    if (index != 0) goto clear;
                    ++data_ov031_02250c00->repeatTimer;
                    if (data_ov031_02250c00->repeatTimer < 40) return;
                    if (!data_ov031_02250c00->canDelete) {
                        func_ov031_02236878(9);
                        data_ov031_02250c00->pressedKey = -1;
                        return;
                    }
                    data_ov031_02250c00->input = 16;
                    data_ov031_02250c00->repeatTimer -= 7;
                    return;
                }
                ++index; ++origin;
            } while (index < 2);
        }
        {
            const Point16* extent;
            const Point16* origin;
            int index;
            origin = data_ov031_02248cb8;
            extent = &data_ov031_02248c94;
            index = 0;
            do {
                func_ov031_0223cb34(origin, extent, &bounds);
                if (func_ov031_0223d414(&bounds)) {
                    if (data_ov031_02250c00->pressedKey != index + 12) goto reset;
                    func_ov031_022264c8(index + 12);
                    goto clear;
                }
                ++index; ++origin;
            } while (index < 2);
        }
    }
reset:
    func_ov031_022264c8(-1);
clear:
    data_ov031_02250c00->repeatTimer = 0;
}

// USA: func_ov031_022264c8
extern "C" ARM void func_ov031_022264c8(int id) {
	if (id == data_ov031_02250c00->highlightedKey) return;
	func_ov031_02226910(id, 1);
	func_ov031_02226910(data_ov031_02250c00->highlightedKey, 0);
	data_ov031_02250c00->highlightedKey = id;
}

// USA: func_ov031_02226514
extern "C" ARM void func_ov031_02226514(void) {
	if (func_ov031_0223d394(0x20)) func_ov031_02226a64(0);
	if (func_ov031_0223d394(0x40)) func_ov031_02226a64(1);
	if (func_ov031_0223d394(0x10)) func_ov031_02226a64(2);
	if (func_ov031_0223d394(0x80)) func_ov031_02226a64(3);

	if (func_ov031_0223d354(1)) {
		WifiSetupKeypad022258b4* p = data_ov031_02250c00;
		int state = p->cursorKey;
		if (state < 10) {
			if (p->canType != 0) {
				p->input = data_ov031_02248d74[state];
				return;
			}
			func_ov031_02236878(9);
			return;
		} else {
			if (state - 0xa < 2) {
				if (state - 0xa != 0 || p->canDelete != 0) {
					if (state - 0xa != 1 || p->canAdvance != 0) goto set60;
				}
				func_ov031_02236878(9);
				return;
			set60:
				p->input = data_ov031_02248c84[state - 0xa];
				return;
			}
			p->input = data_ov031_02248c80[state - 0xc];
		}
	}

	if (func_ov031_0223d394(2)) {
		WifiSetupKeypad022258b4* p = data_ov031_02250c00;
		if (p->canDelete == 0) {
			if (p->deleteErrorPlayed != 0) return;
			func_ov031_02236878(9);
			data_ov031_02250c00->deleteErrorPlayed = 1;
			return;
		}
		p->input = 0x10;
		return;
	}
	if (func_ov031_0223d3d4(2) == 0) return;
	data_ov031_02250c00->deleteErrorPlayed = 0;
}

// USA: func_ov031_022266b0
extern "C" ARM void func_ov031_022266b0(int row, int y) {
    unsigned char count0[5];
    unsigned char count1[5];
    unsigned char count2[5];
    int idx;
    int i;
    int j;

    *(Counts5*)count0 = data_ov031_02248c9d;
    *(Counts5*)count1 = data_ov031_02248ca2;
    *(Counts5*)count2 = data_ov031_02248c98;
    idx = row * 3;
    i = 0;
    if (i < count0[row]) {
        unsigned char py0 = y;
        do {
            G2_SetOBJEffect(data_ov031_02250c00->keys[idx], GX_OAM_EFFECT_NONE, 0);
            SetOBJPosition022266b0(data_ov031_02250c00->keys[idx], data_ov031_02248cda[idx].x, py0);
            i++;
            idx++;
        } while (i < count0[row]);
    }
    if (row < 4) {
        func_ov031_0223ca54((AObj0223ca54*)data_ov031_02250c00->rows[row], data_ov031_02248cda[row * 3].x, y, data_ov031_02250c00->rowBlocks[row], 2);
    }
    i = 0;
    if (i < count1[row]) {
        unsigned char py1 = y;
        do {
            G2_SetOBJEffect(data_ov031_02250c00->extraKeys[i], GX_OAM_EFFECT_NONE, 0);
            SetOBJPosition022266b0(data_ov031_02250c00->extraKeys[i], data_ov031_02248cb0[i].x, py1);
            i++;
        } while (i < count1[row]);
    }
    j = 0;
    if (j < count2[row]) {
        do {
            func_ov031_0223bab4(data_ov031_02250c00->buttons[j], -1, 0, 0);
            func_ov031_0223bbd8(data_ov031_02250c00->buttons[j], -1, data_ov031_02248cb8[j].x, y);
            j++;
        } while (j < count2[row]);
    }
}

// USA: func_ov031_02226910
extern "C" ARM void func_ov031_02226910(int a, int b) {
    if (a < 0) {
        return;
    }
    if (a < 10) {
        unsigned char t = data_ov031_02248c7c[b];
        GXOamAttr* e = data_ov031_02250c00->keys[a];
        e->attr01 &= ~0xc00;
        e->attr2 = (e->attr2 & ~0xf000) | (t << 12);
        return;
    }
    int i = a - 10;
    if (i < 2) {
        unsigned char t = data_ov031_02248c7c[b];
        GXOamAttr* e = data_ov031_02250c00->extraKeys[i];
        e->attr01 &= ~0xc00;
        e->attr2 = (e->attr2 & ~0xf000) | (t << 12);
        return;
    }
    func_ov031_0223bb58(data_ov031_02250c00->buttons[a - 0xc], -1, 0, data_ov031_02248c70[b]);
}

// USA: func_ov031_022269d8
extern "C" ARM void func_ov031_022269d8(void) {
    signed char state = data_ov031_02250c00->cursorKey;
    int mode = (state <= 0xb) ? 0x44 : 0x45;
    void* arr = data_ov031_02250c00->cursor;
    void* elem = func_ov031_0223baa0((ElemArray_0223baa0*)arr, 0);
    func_ov031_0223bdb0(0, mode, (int)elem);

    func_ov031_0223bcc8((Obj0223bcc8*)data_ov031_02250c00->cursor, -1, 2);

    signed char state2 = data_ov031_02250c00->cursorKey;
    void* arr2 = data_ov031_02250c00->cursor;
    unsigned short v0 = *(unsigned short*)((char*)data_ov031_02248d02 + state2 * 4);
    unsigned short v1 = *(unsigned short*)((char*)data_ov031_02248d02 + 2 + state2 * 4);
    func_ov031_0223bbd8(arr2, -1, v0, v1);
}

// USA: func_ov031_02226a64
extern "C" ARM void func_ov031_02226a64(int input) {
	signed char old = data_ov031_02250c00->cursorKey;
	const signed char* row = data_ov031_02248d3a + old * 4;
	data_ov031_02250c00->cursorKey = row[input];
	WifiSetupKeypad022258b4* obj = data_ov031_02250c00;
	signed char ns = obj->cursorKey;
	if (ns == 0xd) {
		if (input == 1 || input == 3) {
			obj->lastCursorKey = old;
			goto end;
		}
	}
	if (ns == -1) {
		signed char f64 = obj->lastCursorKey;
		if (f64 == 1 || f64 == 0xa) obj->cursorKey = 0xa;
		else obj->cursorKey = 0xb;
		goto end;
	}
	if (ns == -2) {
		signed char f64 = obj->lastCursorKey;
		if (f64 == 1 || f64 == 0xa) obj->cursorKey = 1;
		else obj->cursorKey = 2;
	}
end:
	func_ov031_022269d8();
	func_ov031_02236878(8);
}

// USA: func_ov031_02226b10
extern "C" ARM void func_ov031_02226b10(void* obj) {
	int x, y;
	G2_GetOBJPosition(func_ov031_0223baa0((ElemArray_0223baa0*)data_ov031_02250c00->buttons[0], 0), (unsigned int*)&x, (unsigned int*)&y);
	y += 0xc;
	func_ov031_022266b0(4, y);
	if (y < 0xc0) return;
	func_ov031_0223e2b8(obj, (int)func_ov031_02226b88);
}

// USA: func_ov031_02226b88
extern "C" ARM void func_ov031_02226b88(void* obj) {
    int x, y;
    G2_GetOBJPosition(data_ov031_02250c00->keys[9], (unsigned int*)&x, (unsigned int*)&y);
    y += 0xc;
    func_ov031_022266b0(3, y);
    if (y < 0xc0) return;
    func_ov031_0223e2b8(obj, (int)func_ov031_02226bf8);
}

// USA: func_ov031_02226bf8
extern "C" ARM void func_ov031_02226bf8(void* obj) {
    int x, y;
    G2_GetOBJPosition(data_ov031_02250c00->keys[6], (unsigned int*)&x, (unsigned int*)&y);
    y += 0xc;
    func_ov031_022266b0(2, y);
    if (y < 0xc0) return;
    func_ov031_0223e2b8(obj, (int)func_ov031_02226c68);
}

// USA: func_ov031_02226c68
extern "C" ARM void func_ov031_02226c68(void* obj) {
    int x, y;
    G2_GetOBJPosition(data_ov031_02250c00->keys[3], (unsigned int*)&x, (unsigned int*)&y);
    y += 0xc;
    func_ov031_022266b0(1, y);
    if (y < 0xc0) return;
    func_ov031_0223e2b8(obj, (int)func_ov031_02226cd8);
}

// USA: func_ov031_02226cd8
extern "C" ARM void func_ov031_02226cd8(void* obj) {
    int x, y;
    G2_GetOBJPosition(data_ov031_02250c00->keys[0], (unsigned int*)&x, (unsigned int*)&y);
    y += 0xc;
    func_ov031_022266b0(0, y);
    if (y < 0xc0) return;
    func_ov031_0223e2b8(obj, (int)func_ov031_02226d48);
}

// USA: func_ov031_02226d48
extern "C" ARM void func_ov031_02226d48(void* object) {
    func_ov031_0223e2c0(0, object);
    {
        int i = 0;
        do {
            func_ov031_0223ba20(data_ov031_02250c00->rowBlocks[i]);
            func_ov031_0223c534((Obj0223c534*)data_ov031_02250c00->rows[i]);
        } while (++i < 4);
    }
    {
        int i = 0;
        do { func_ov031_0223ba20(data_ov031_02250c00->buttons[i]); } while (++i < 2);
    }
    {
        int i = 0;
        do { func_ov031_0223da58(data_ov031_02250c00->extraKeys[i]); } while (++i < 2);
    }
    {
        int i = 0;
        do { func_ov031_0223da58(data_ov031_02250c00->keys[i]); } while (++i < 10);
    }
    func_ov031_0223cf70(&data_ov031_02250c00);
}
