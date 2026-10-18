#include <globaldefs.h>

// NitroSystem g2d_TextCanvas.c: NNSi_G2dTextCanvasDrawString (direction-vector variant)

typedef unsigned short u16;
typedef signed char s8;

struct ParamA020b1d70;
struct Obj020b1d70;
extern int ApplyRangeDeltaCallback020b1d70(struct ParamA020b1d70* paramA, struct Obj020b1d70** paramB, int accA, int accB, int paramE, unsigned short paramF);

typedef u16 (*NNSiG2dSplitCharCallback)(const void** ppChar);

struct NNSG2dFont {
    void* pRes;
    NNSiG2dSplitCharCallback cbCharSpliter;
};

struct NNSG2dTextCanvas {
    struct ParamA020b1d70* pCanvas;
    const NNSG2dFont* pFont;
    int hSpace;
    int vSpace;
};

struct NNSiG2dTextDirection {
    s8 x;
    s8 y;
};

static inline NNSiG2dSplitCharCallback NNSi_G2dFontGetSpliter(const NNSG2dFont* pFont) {
    return pFont->cbCharSpliter;
}

// USA: func_020b23a8
extern "C" ARM void func_020b23a8(const NNSG2dTextCanvas* pTxn, int x, int y, int cl, const void* str, const void** pPos, NNSiG2dTextDirection dir) {
    const void* pos;
    int charSpace;
    const NNSG2dFont* pFont;
    u16 c;
    NNSiG2dSplitCharCallback getNextChar;

    charSpace = pTxn->hSpace;
    pFont = pTxn->pFont;
    pos = str;
    getNextChar = NNSi_G2dFontGetSpliter(pFont);

    while ((c = getNextChar((const void**)&pos)) != 0) {
        if (c == '\n') {
            break;
        }

        {
            int w = ApplyRangeDeltaCallback020b1d70(pTxn->pCanvas, (struct Obj020b1d70**)pFont, x, y, cl, c) + charSpace;
            x += w * dir.x;
            y += w * dir.y;
        }
    }

    if (pPos != NULL) {
        *pPos = (c == '\n') ? pos : NULL;
    }
}
