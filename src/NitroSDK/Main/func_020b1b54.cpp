#include <globaldefs.h>

struct CharCanvas020b1b54 {
    unsigned char* charBase;
    int areaWidth;
    int areaHeight;
    unsigned char dstBpp;
    unsigned char padD[3];
    unsigned int param;
};

union OBJ1DParam020b1b54 {
    unsigned int packed;
    struct {
        unsigned baseWidthShift : 8;
        unsigned baseHeightShift : 8;
    } s;
};

extern "C" unsigned int func_020b10b4(unsigned int cx, unsigned int cy, unsigned int areaWidth, unsigned int areaHeight, unsigned int objWidth, unsigned int objHeight);
extern "C" void func_020b11c8(void* pChar, int x, int y, int w, int h, unsigned int cl8, int bpp);

static inline int GetCharacterSize(const struct CharCanvas020b1b54* pCC) {
    return 8 * 8 * pCC->dstBpp / 8;
}

static inline unsigned int SpreadColor32(const struct CharCanvas020b1b54* pCC, int cl) {
    unsigned int val = (unsigned int)cl;

    if (pCC->dstBpp == 4) {
        val = (val << 4) | val;
        val |= val << 8;
        val |= val << 16;
    } else {
        val = (val << 8) | val;
        val |= val << 16;
    }

    return val;
}

// USA: func_020b1b54
extern "C" ARM void func_020b1b54(const struct CharCanvas020b1b54* pCC, int cl, int x, int y, int w, int h) {
    int ix, iy;
    int pcx, pcy, pcw, pch;
    int cx, cy;
    const int xw = x + w;
    const int yh = y + h;
    unsigned int cl8;
    union OBJ1DParam020b1b54 p;

    cl8 = SpreadColor32(pCC, cl);

    p.packed = pCC->param;

    {
        const int left = x & ~7;
        const int top = y & ~7;
        const int right = (xw + 7) & ~7;
        const int bottom = (yh + 7) & ~7;

        const int areaWidth = pCC->areaWidth;
        const int areaHeight = pCC->areaHeight;
        const int baseWidthShift = (int)p.s.baseWidthShift;
        const int baseHeightShift = (int)p.s.baseHeightShift;

        const int charSize = GetCharacterSize(pCC);
        const int charBaseLineOffset = (int)pCC->param * charSize;
        const int bpp = pCC->dstBpp;
        const int cx_base = left / 8;
        unsigned char* const pCharBase = pCC->charBase;
        unsigned char* pChar;

        cy = top / 8;

        for (iy = top; iy < bottom; iy += 8) {
            pcy = (iy < y) ? y - iy : 0;
            pch = ((yh - iy > 8) ? 8 : yh - iy) - pcy;
            pChar = pCharBase;

            cx = cx_base;
            for (ix = left; ix < right; ix += 8) {
                const unsigned int iChar = func_020b10b4((unsigned int)cx, (unsigned int)cy, (unsigned int)areaWidth, (unsigned int)areaHeight, (unsigned int)baseWidthShift, (unsigned int)baseHeightShift);
                pcx = (ix < x) ? x - ix : 0;
                pcw = ((xw - ix > 8) ? 8 : xw - ix) - pcx;

                pChar = pCharBase + iChar * charSize;

                func_020b11c8(pChar, pcx, pcy, pcw, pch, cl8, bpp);
                cx++;
            }
            cy++;
        }
    }
}
