#include <globaldefs.h>

struct GXOamAttr { unsigned int attr01; unsigned short attr2; unsigned short attr3; };
struct Point16 { unsigned short x, y; };
struct Counts5 { unsigned char n[5]; };

struct AObj0223ca54;
extern "C" void func_ov031_0223ca54(AObj0223ca54* a, int x, int y, void* d, int e);
extern "C" void func_ov031_0223bab4(void* obj, int idx, int val, int flag);
extern "C" void func_ov031_0223bbd8(void* obj, int idx, int x, int y);

struct ButtonScreen {
    AObj0223ca54* label[4];
    GXOamAttr* oam0[10];
    GXOamAttr* oam1[2];
    void* cell[2];
    void* labelCell[4];
};
extern ButtonScreen* data_ov031_02250c00;
extern const Point16 data_ov031_02248c88 = {28, 20};
extern const Point16 data_ov031_02248c8c = {12, 4};
extern const Point16 data_ov031_02248c94 = {120, 18};
extern const Point16 data_ov031_02248c90 = {28, 20};
extern const Counts5 data_ov031_02248c98 = {{0, 0, 0, 0, 2}};
extern const Counts5 data_ov031_02248c9d = {{3, 3, 3, 1, 0}};
extern const Counts5 data_ov031_02248ca2 = {{0, 0, 0, 2, 0}};
extern const Point16 data_ov031_02248cda[10];
extern const Point16 data_ov031_02248cb0[2];
extern const Point16 data_ov031_02248cb8[2];

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
            G2_SetOBJEffect(data_ov031_02250c00->oam0[idx], GX_OAM_EFFECT_NONE, 0);
            SetOBJPosition022266b0(data_ov031_02250c00->oam0[idx], data_ov031_02248cda[idx].x, py0);
            i++;
            idx++;
        } while (i < count0[row]);
    }
    if (row < 4) {
        func_ov031_0223ca54(data_ov031_02250c00->label[row], data_ov031_02248cda[row * 3].x, y, data_ov031_02250c00->labelCell[row], 2);
    }
    i = 0;
    if (i < count1[row]) {
        unsigned char py1 = y;
        do {
            G2_SetOBJEffect(data_ov031_02250c00->oam1[i], GX_OAM_EFFECT_NONE, 0);
            SetOBJPosition022266b0(data_ov031_02250c00->oam1[i], data_ov031_02248cb0[i].x, py1);
            i++;
        } while (i < count1[row]);
    }
    j = 0;
    if (j < count2[row]) {
        do {
            func_ov031_0223bab4(data_ov031_02250c00->cell[j], -1, 0, 0);
            func_ov031_0223bbd8(data_ov031_02250c00->cell[j], -1, data_ov031_02248cb8[j].x, y);
            j++;
        } while (j < count2[row]);
    }
}
