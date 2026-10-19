#include <globaldefs.h>

struct GXOamAttr02224ca4 {
    unsigned int attr01;
    unsigned short attr2;
    unsigned short attr3;
};
struct Point16_02224ca4 {
    unsigned short x;
    unsigned short y;
};
struct Counts_02224ca4 {
    unsigned char n[5];
};
struct Entity02224ca4 {
    void* field0[3][4];
    GXOamAttr02224ca4* oams30[47];
    GXOamAttr02224ca4* oamsEC[4];
    void* fieldFC[2];
    void* field104[4];
};

extern Entity02224ca4* data_ov031_02250bfc;
extern const Point16_02224ca4 data_ov031_022489c0 = {0x1c, 2};
extern const Point16_02224ca4 data_ov031_022489c4 = {0x78, 0x12};
extern const Point16_02224ca4 data_ov031_022489c8 = {0x11, 0x12};
extern const Counts_02224ca4 data_ov031_022489cc = {{0, 0, 0, 0, 2}};
extern const Counts_02224ca4 data_ov031_022489d1 = {{12, 12, 12, 11, 0}};
extern const Counts_02224ca4 data_ov031_022489d6 = {{1, 1, 1, 1, 0}};
extern const Point16_02224ca4 data_ov031_02248a0c[47];
extern const Point16_02224ca4 data_ov031_022489e4[4];
extern const Point16_02224ca4 data_ov031_022489dc[2];

extern "C" void func_ov031_0223ca54(void* a, int b, int c, void* d, int e);
extern "C" int FastIntModulus(int numer, int denom);
extern "C" void func_ov031_0223bab4(void* obj, int index, int val, int zero);
extern "C" void func_ov031_0223bbd8(void* obj, int idx, int a, int b);

static inline void G2_SetOBJEffect(GXOamAttr02224ca4* oam) {
    oam->attr01 &= 0xc1fffcff;
}

static inline void G2_SetOBJPositionBits(GXOamAttr02224ca4* oam, unsigned int xbits, unsigned int yb) {
    oam->attr01 = (oam->attr01 & 0xfe00ff00) | yb | xbits;
}

// USA: func_ov031_02224ca4
extern "C" ARM void func_ov031_02224ca4(int mode, int index, int y) {
    Counts_02224ca4 first = data_ov031_022489d1;
    Counts_02224ca4 second = data_ov031_022489d6;
    Counts_02224ca4 last = data_ov031_022489cc;
    int base = index * 12;
    int m;
    int k;
    int i;
    int j;

    {
        const unsigned char* cnt = &first.n[index];
        k = base;
        i = 0;
        if (i < *cnt) {
            unsigned char yb = y;
            do {
                G2_SetOBJEffect(data_ov031_02250bfc->oams30[k]);
                G2_SetOBJPositionBits(data_ov031_02250bfc->oams30[k], (unsigned int)data_ov031_02248a0c[k].x << 23 >> 7, yb);
                i++;
                k++;
            } while (i < *cnt);
        }
    }
    if (index < 4) {
        Entity02224ca4* obj = data_ov031_02250bfc;
        func_ov031_0223ca54(obj->field0[mode][index], data_ov031_02248a0c[base].x, y, obj->field104[index], 2);
    }
    m = FastIntModulus(index + 3, 4);
    {
        const unsigned char* cnt = &second.n[index];
        i = 0;
        if (i < *cnt) {
            unsigned char yb = y;
            do {
                G2_SetOBJEffect(data_ov031_02250bfc->oamsEC[m]);
                G2_SetOBJPositionBits(data_ov031_02250bfc->oamsEC[m], (unsigned int)data_ov031_022489e4[m].x << 23 >> 7, yb);
                i++;
            } while (i < *cnt);
        }
    }
    {
        const unsigned char* cnt = &last.n[index];
        j = 0;
        if (j < *cnt) {
            do {
                func_ov031_0223bab4(data_ov031_02250bfc->fieldFC[j], -1, 0, 0);
                func_ov031_0223bbd8(data_ov031_02250bfc->fieldFC[j], -1, data_ov031_022489dc[j].x, y);
                j++;
            } while (j < *cnt);
        }
    }
}
