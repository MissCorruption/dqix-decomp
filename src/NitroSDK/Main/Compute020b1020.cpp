#include <globaldefs.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NNSG2dFontInformation {
    unsigned char fontType;
    signed char linefeed;
} NNSG2dFontInformation;

typedef struct NNSG2dFont {
    NNSG2dFontInformation* pRes;
} NNSG2dFont;

typedef struct NNSG2dTextRect {
    int width;
    int height;
} NNSG2dTextRect;

int func_020b0f00(const NNSG2dFont* pFont, int hSpace, const void* str, const void** pPos);

static inline int NNS_G2dFontGetLineFeed(const NNSG2dFont* pFont) {
    return pFont->pRes->linefeed;
}

// USA: NNSi_G2dFontGetTextRect
ARM NNSG2dTextRect NNSi_G2dFontGetTextRect(const NNSG2dFont* pFont, int hSpace, int vSpace, const void* txt) {
    int lines = 1;
    NNSG2dTextRect rect = {0, 0};

    while (txt != NULL) {
        const int width = func_020b0f00(pFont, hSpace, txt, &txt);
        if (width > rect.width) {
            rect.width = width;
        }
        lines++;
    }

    rect.height = (lines - 1) * (NNS_G2dFontGetLineFeed(pFont) + vSpace) - vSpace;

    return rect;
}

#ifdef __cplusplus
}
#endif
