#include <globaldefs.h>

typedef unsigned char u8;
typedef unsigned int u32;

struct NNSG2dCharCanvas {
    u8 *charBase;
    int areaWidth;
    int areaHeight;
    u8 dstBpp;
    u8 reserved[3];
    u32 param;
};

extern "C" void func_020b11c8(void *pChar, int x, int y, int w, int h, u32 cl8, int bpp);

static inline int GetCharacterSize(const NNSG2dCharCanvas *pCC) {
    return 8 * 8 * pCC->dstBpp / 8;
}

static inline u32 SpreadColor32(const NNSG2dCharCanvas *pCC, int cl) {
    u32 val = (u32)cl;

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

// NitroSystem g2d_CharCanvas.c: ClearAreaLine
// USA: func_020b19b8
extern "C" ARM void func_020b19b8(const NNSG2dCharCanvas *pCC, int cl, int x, int y, int w, int h) {
    int ix, iy;
    int cx, cy, cw, ch;
    const int xw = x + w;
    const int yh = y + h;
    u32 cl8;

    cl8 = SpreadColor32(pCC, cl);

    {
        const int left = x & ~7;
        const int top = y & ~7;
        const int right = (xw + 7) & ~7;
        const int bottom = (yh + 7) & ~7;

        const int charSize = GetCharacterSize(pCC);
        const int charBaseLineOffset = (int)(pCC->param * charSize);
        const int bpp = pCC->dstBpp;
        u8 *pCharBase;
        u8 *pChar;

        pCharBase = pCC->charBase + ((top / 8) * pCC->param + (left / 8)) * charSize;

        for (iy = top; iy < bottom; iy += 8) {
            cy = (iy < y) ? y - iy : 0;
            ch = ((yh - iy > 8) ? 8 : yh - iy) - cy;
            pChar = pCharBase;

            for (ix = left; ix < right; ix += 8) {
                cx = (ix < x) ? x - ix : 0;
                cw = ((xw - ix > 8) ? 8 : xw - ix) - cx;

                func_020b11c8(pChar, cx, cy, cw, ch, cl8, bpp);
                pChar += charSize;
            }

            pCharBase += charBaseLineOffset;
        }
    }
}
