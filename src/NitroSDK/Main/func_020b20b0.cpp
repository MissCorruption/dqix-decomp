#include <globaldefs.h>

typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

#define CHARACTER_WIDTH  8
#define CHARACTER_HEIGHT 8

#define GX_OAM_ATTR01_Y_MASK     0x000000ff
#define GX_OAM_ATTR01_X_SHIFT    16
#define GX_OAM_ATTR01_X_MASK     0x01ff0000
#define GX_OAM_ATTR01_CM_SHIFT   13
#define GX_OAM_ATTR01_CM_MASK    0x00002000
#define GX_OAM_ATTR01_SHAPE_MASK 0x0000c000
#define GX_OAM_ATTR01_SIZE_MASK  0xc0000000
#define GX_OAM_ATTR2_NAME_MASK   0x000003ff

enum GXOamColorMode {
    GX_OAM_COLORMODE_16 = 0,
    GX_OAM_COLORMODE_256 = 1
};

typedef int GXOamShape;
typedef int NNSG2dOBJVramMode;

struct GXOamAttr {
    union {
        u32 attr01;
        struct {
            u16 attr0;
            u16 attr1;
        };
    };
    union {
        struct {
            u16 attr2;
            u16 _3;
        };
        u32 attr23;
    };
};

struct ObjectSize {
    u8 widthShift;
    u8 heightShift;
};

extern ObjectSize data_020e91e0[4][4];

extern "C" GXOamShape func_020b11ac(u8 *pSize);

static inline u32 MATH_CountLeadingZerosInline(u32 x) {
    asm {
        clz x, x
    }
    return x;
}

static inline int MATH_ILog2(u32 x) {
    return (int)(31 - MATH_CountLeadingZerosInline(x));
}

static inline ObjectSize *GetMaxObjectSize(int w, int h) {
    int log_w = (w >= 8) ? 3 : MATH_ILog2((unsigned long)w);
    int log_h = (h >= 8) ? 3 : MATH_ILog2((unsigned long)h);

    return &data_020e91e0[log_h][log_w];
}

static inline void G2_SetOBJPosition(GXOamAttr *oam, int x, int y) {
    oam->attr01 = ((oam->attr01 & ~(GX_OAM_ATTR01_Y_MASK | GX_OAM_ATTR01_X_MASK)) | (y & GX_OAM_ATTR01_Y_MASK)
                   | ((x & (GX_OAM_ATTR01_X_MASK >> GX_OAM_ATTR01_X_SHIFT)) << GX_OAM_ATTR01_X_SHIFT));
}

static inline void G2_SetOBJShape(GXOamAttr *oam, GXOamShape shape) {
    oam->attr01 = ((oam->attr01 & ~(GX_OAM_ATTR01_SHAPE_MASK | GX_OAM_ATTR01_SIZE_MASK)) | shape);
}

static inline void G2_SetOBJCharName(GXOamAttr *oam, int name) {
    oam->attr2 = (u16)((oam->attr2 & ~GX_OAM_ATTR2_NAME_MASK) | name);
}

static inline void G2_SetOBJColorMode(GXOamAttr *oam, GXOamColorMode color) {
    oam->attr01 = ((oam->attr01 & ~GX_OAM_ATTR01_CM_MASK) | (color << GX_OAM_ATTR01_CM_SHIFT));
}

// USA: func_020b20b0
extern "C" ARM int func_020b20b0(GXOamAttr *oam, int areaWidth, int areaHeight, int x, int y, GXOamColorMode color, int charName, NNSG2dOBJVramMode vramMode) {
    ObjectSize *const pSize    = GetMaxObjectSize(areaWidth, areaHeight);
    const int objWidthShift    = pSize->widthShift;
    const int objHeightShift   = pSize->heightShift;
    const u32 objWidthMaskInv  = (u32)(~0) << objWidthShift;
    const u32 objHeightMaskInv = (u32)(~0) << objHeightShift;
    const u32 areaAWidth       = areaWidth & objWidthMaskInv;
    const u32 areaAHeight      = areaHeight & objHeightMaskInv;
    const int charNameUnit     = (color == GX_OAM_COLORMODE_16) ? 1 : 2;
    int usedObjs               = 0;

    {
        const GXOamShape shape = func_020b11ac(&pSize->widthShift);
        const int xNum         = areaWidth >> objWidthShift;
        const int yNum         = areaHeight >> objHeightShift;
        const int charNameSize = ((charNameUnit << objWidthShift) << objHeightShift) >> vramMode;
        int ox, oy;

        for (oy = 0; oy < yNum; ++oy) {
            const int py = y + (oy << objHeightShift) * CHARACTER_HEIGHT;

            for (ox = 0; ox < xNum; ++ox) {
                const int px = x + (ox << objWidthShift) * CHARACTER_WIDTH;

                G2_SetOBJPosition(oam, px, py);
                G2_SetOBJShape(oam, shape);
                G2_SetOBJCharName(oam, charName);
                G2_SetOBJColorMode(oam, color);

                oam++;
                charName += charNameSize;
            }
        }

        usedObjs += xNum * yNum;
    }

    if (areaAWidth < areaWidth) {
        const unsigned int areaBWidth  = areaWidth - areaAWidth;
        const unsigned int areaBHeight = areaAHeight;
        const int px                   = x + (int)areaAWidth * CHARACTER_WIDTH;
        const int py                   = y;

        const int areaBObjs = func_020b20b0(oam, (int)areaBWidth, (int)areaBHeight, px, py, color, charName, vramMode);

        oam += areaBObjs;
        usedObjs += areaBObjs;
        charName += (charNameUnit * areaBWidth * areaBHeight) >> vramMode;
    }

    if (areaAHeight < areaHeight) {
        const unsigned int areaCWidth  = areaAWidth;
        const unsigned int areaCHeight = areaHeight - areaAHeight;
        const int px                   = x;
        const int py                   = y + (int)areaAHeight * CHARACTER_HEIGHT;

        const int areaCObjs = func_020b20b0(oam, (int)areaCWidth, (int)areaCHeight, px, py, color, charName, vramMode);

        oam += areaCObjs;
        usedObjs += areaCObjs;
        charName += (charNameUnit * areaCWidth * areaCHeight) >> vramMode;
    }

    if (areaAWidth < areaWidth && areaAHeight < areaHeight) {
        const unsigned int areaDWidth  = areaWidth - areaAWidth;
        const unsigned int areaDHeight = areaHeight - areaAHeight;
        const int px                   = x + (int)areaAWidth * CHARACTER_WIDTH;
        const int py                   = y + (int)areaAHeight * CHARACTER_HEIGHT;

        const int areaDObjs = func_020b20b0(oam, (int)areaDWidth, (int)areaDHeight, px, py, color, charName, vramMode);

        usedObjs += areaDObjs;
    }

    return usedObjs;
}
