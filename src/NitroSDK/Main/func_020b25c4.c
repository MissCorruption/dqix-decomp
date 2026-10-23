#include <globaldefs.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NNSG2dFontInformation NNSG2dFontInformation;
typedef struct NNSG2dCharCanvas NNSG2dCharCanvas;

typedef struct NNSG2dFont {
    NNSG2dFontInformation* pRes;
} NNSG2dFont;

typedef struct NNSG2dTextCanvas {
    const NNSG2dCharCanvas* pCanvas;
    const NNSG2dFont* pFont;
    int hSpace;
    int vSpace;
} NNSG2dTextCanvas;

typedef struct NNSiG2dTextDirection {
    signed char x;
    signed char y;
} NNSiG2dTextDirection;

typedef struct NNSG2dTextRect {
    int width;
    int height;
} NNSG2dTextRect;

typedef char NNSG2dChar;

enum {
    NNS_G2D_VERTICALORIGIN_MIDDLE = 0x2,
    NNS_G2D_VERTICALORIGIN_BOTTOM = 0x4,
    NNS_G2D_HORIZONTALORIGIN_CENTER = 0x10,
    NNS_G2D_HORIZONTALORIGIN_RIGHT = 0x20
};

NNSG2dTextRect func_020b1020(const NNSG2dFont* pFont, int hSpace, int vSpace, const void* txt);
void func_020b245c(const NNSG2dTextCanvas* pTxn, int x, int y, int areaWidth, int cl, unsigned int flags, const void* txt, NNSiG2dTextDirection d);

static inline NNSG2dTextRect NNS_G2dFontGetTextRect(const NNSG2dFont* pFont, int hSpace, int vSpace, const NNSG2dChar* txt) {
    NNSG2dTextRect rect = func_020b1020(pFont, hSpace, vSpace, txt);
    return rect;
}

static inline NNSG2dTextRect NNS_G2dTextCanvasGetTextRect(const NNSG2dTextCanvas* pTxn, const NNSG2dChar* txt) {
    return NNS_G2dFontGetTextRect(pTxn->pFont, pTxn->hSpace, pTxn->vSpace, txt);
}

// USA: func_020b25c4
ARM void func_020b25c4(const NNSG2dTextCanvas* pTxn, int x, int y, int cl, unsigned int flags, const void* txt, NNSiG2dTextDirection d) {
    NNSG2dTextRect area;

    {
        area = NNS_G2dTextCanvasGetTextRect(pTxn, txt);

        if (flags & NNS_G2D_HORIZONTALORIGIN_CENTER) {
            const int offset = -(area.width + 1) / 2;
            x += offset * d.x;
            y += offset * d.y;
        } else if (flags & NNS_G2D_HORIZONTALORIGIN_RIGHT) {
            const int offset = -area.width;
            x += offset * d.x;
            y += offset * d.y;
        }

        if (flags & NNS_G2D_VERTICALORIGIN_MIDDLE) {
            const int offset = -(area.height + 1) / 2;
            x += offset * -d.y;
            y += offset * d.x;
        } else if (flags & NNS_G2D_VERTICALORIGIN_BOTTOM) {
            const int offset = -area.height;
            x += offset * -d.y;
            y += offset * d.x;
        }
    }

    func_020b245c(pTxn, x, y, area.width, cl, flags, txt, d);
}

#ifdef __cplusplus
}
#endif
