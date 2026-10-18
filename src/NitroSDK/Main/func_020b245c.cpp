#include <globaldefs.h>

// NitroSystem g2d_TextCanvas.c: NNSi_G2dTextCanvasDrawTextAlign (DQIX variant with a text direction)

struct NNSG2dCharWidths {
    signed char left;
    unsigned char glyphWidth;
    signed char charWidth;
};

struct NNSG2dFontInformation {
    unsigned char fontType;
    signed char linefeed;
    unsigned short alterCharIndex;
    NNSG2dCharWidths defaultWidth;
    unsigned char encoding;
};

struct NNSG2dFont {
    NNSG2dFontInformation* pRes;
};

struct NNSG2dTextCanvas {
    const void* pCanvas;
    const NNSG2dFont* pFont;
    int hSpace;
    int vSpace;
};

struct NNSG2dTextDir {
    signed char x;
    signed char y;
};

enum {
    NNS_G2D_HORIZONTALALIGN_CENTER = 0x400,
    NNS_G2D_HORIZONTALALIGN_RIGHT = 0x800
};

extern "C" int func_020b0f00(const NNSG2dFont* pFont, int hSpace, const void* str, const void** pPos);
extern "C" void func_020b23a8(const NNSG2dTextCanvas* pTxn, int x, int y, int cl, const void* str, const void** pPos, NNSG2dTextDir dir);

static inline int NNS_G2dFontGetLineFeed(const NNSG2dFont* pFont) {
    return pFont->pRes->linefeed;
}

static inline int NNS_G2dTextCanvasGetStringWidth(const NNSG2dTextCanvas* pTxn, const void* str, const void** pPos) {
    return func_020b0f00(pTxn->pFont, pTxn->hSpace, str, pPos);
}

// USA: func_020b245c
extern "C" ARM void func_020b245c(const NNSG2dTextCanvas* pTxn, int x, int y, int areaWidth, int cl, unsigned int flags, const void* txt, NNSG2dTextDir dir) {
    const void* str;
    int linefeed;
    int lineDx;
    int lineDy;
    int line;

    linefeed = NNS_G2dFontGetLineFeed(pTxn->pFont) + pTxn->vSpace;
    lineDx = linefeed * -dir.y;
    lineDy = linefeed * dir.x;
    str = txt;

    line = 0;

    while (str != NULL) {
        int px = x + line * lineDx;
        int py = y + line * lineDy;

        if (flags & NNS_G2D_HORIZONTALALIGN_RIGHT) {
            int width = NNS_G2dTextCanvasGetStringWidth(pTxn, str, NULL);
            int ofs = areaWidth - width;
            px += ofs * dir.x;
            py += ofs * dir.y;
        } else if (flags & NNS_G2D_HORIZONTALALIGN_CENTER) {
            int width = NNS_G2dTextCanvasGetStringWidth(pTxn, str, NULL);
            int ofs = (areaWidth + 1) / 2 - (width + 1) / 2;
            px += ofs * dir.x;
            py += ofs * dir.y;
        }

        func_020b23a8(pTxn, px, py, cl, str, &str, dir);
        line++;
    }
}
