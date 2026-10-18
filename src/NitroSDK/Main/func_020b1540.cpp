#include <globaldefs.h>

// NitroSystem g2d_CharCanvas.c: DrawGlyphLine

struct NNSG2dCharWidths {
    signed char left;
    unsigned char glyphWidth;
    signed char charWidth;
};

struct NNSG2dFontGlyph {
    unsigned char cellWidth;
    unsigned char cellHeight;
    unsigned short cellSize;
    signed char baselinePos;
    unsigned char maxCharWidth;
    unsigned char bpp;
    unsigned char flags;
};

struct NNSG2dFontInformation {
    unsigned char fontType;
    signed char linefeed;
    unsigned short alterCharIndex;
    NNSG2dCharWidths defaultWidth;
    unsigned char encoding;
    NNSG2dFontGlyph* pGlyph;
};

struct NNSG2dFont {
    NNSG2dFontInformation* pRes;
};

struct NNSG2dGlyph {
    const NNSG2dCharWidths* pWidths;
    const unsigned char* image;
};

struct NNSG2dCharCanvas {
    unsigned char* charBase;
    int areaWidth;
    int areaHeight;
    unsigned char dstBpp;
    unsigned char reserved[3];
    unsigned int param;
};

struct LC_INFO {
    const unsigned char* dst;
    const unsigned char* src;
    int ofs_x;
    int ofs_y;
    int width;
    int height;
    int dsrc;
    int srcBpp;
    int dstBpp;
    unsigned int cl;
};

extern "C" void func_020b1300(LC_INFO* i);

static inline int GetCharacterSize(const NNSG2dCharCanvas* pCC) {
    return 8 * 8 * pCC->dstBpp / 8;
}

static inline unsigned char NNS_G2dFontGetCellHeight(const NNSG2dFont* pFont) {
    return pFont->pRes->pGlyph->cellHeight;
}

static inline unsigned char NNS_G2dFontGetCellWidth(const NNSG2dFont* pFont) {
    return pFont->pRes->pGlyph->cellWidth;
}

static inline unsigned char NNS_G2dFontGetBpp(const NNSG2dFont* pFont) {
    return pFont->pRes->pGlyph->bpp;
}

// USA: func_020b1540
extern "C" ARM void func_020b1540(const NNSG2dCharCanvas* pCC, const NNSG2dFont* pFont, int x, int y, int cl, const NNSG2dGlyph* pGlyph) {
    int ofs_x_base;
    int ofs_x;
    int ofs_y;
    int ofs_x_end;
    int ofs_y_end;
    unsigned int nextLineOffset;
    unsigned char* pChar;
    unsigned char glyphWidth;
    unsigned char charHeight;
    int charSize;

    charSize = GetCharacterSize(pCC);

    {
        int chara_x_num;
        int chara_y_num;
        const unsigned int areaWidth = (unsigned int)pCC->areaWidth;
        const unsigned int areaHeight = (unsigned int)pCC->areaHeight;
        unsigned char* const charBase = pCC->charBase;
        const NNSG2dCharWidths* const pWidth = pGlyph->pWidths;

        unsigned int chara_x_begin;
        unsigned int chara_x_last;
        unsigned int chara_y_begin;
        unsigned int chara_y_last;

        glyphWidth = pWidth->glyphWidth;
        charHeight = NNS_G2dFontGetCellHeight(pFont);

        if (glyphWidth <= 0) {
            return;
        }

        if ((x + glyphWidth < 0) || (y + charHeight) < 0) {
            return;
        }

        chara_x_begin = (x <= 0) ? 0 : ((unsigned int)x / 8);
        chara_y_begin = (y <= 0) ? 0 : ((unsigned int)y / 8);

        chara_x_last = (unsigned int)(x + glyphWidth + (8 - 1)) / 8;
        if (chara_x_last >= areaWidth) {
            chara_x_last = areaWidth;
        }
        chara_y_last = (unsigned int)(y + charHeight + (8 - 1)) / 8;
        if (chara_y_last >= areaHeight) {
            chara_y_last = areaHeight;
        }

        chara_x_num = (int)(chara_x_last - chara_x_begin);
        chara_y_num = (int)(chara_y_last - chara_y_begin);

        if ((chara_x_num < 0) || (chara_y_num < 0)) {
            return;
        }

        pChar = charBase + (pCC->param * chara_y_begin + chara_x_begin) * charSize;

        nextLineOffset = (pCC->param - chara_x_num) * charSize;

        ofs_x_base = (x < 0) ? x : x & 0x7;
        ofs_y = (y < 0) ? y : y & 0x7;
        ofs_x_end = ofs_x_base - 8 * chara_x_num;
        ofs_y_end = ofs_y - 8 * chara_y_num;
    }

    {
        LC_INFO i;

        i.src = pGlyph->image;
        i.width = glyphWidth;
        i.height = charHeight;
        i.cl = (unsigned int)(cl - 1);
        i.srcBpp = NNS_G2dFontGetBpp(pFont);
        i.dstBpp = pCC->dstBpp;
        i.dsrc = NNS_G2dFontGetCellWidth(pFont) * i.srcBpp;

        for (; ofs_y > ofs_y_end; ofs_y -= 8) {
            i.ofs_y = ofs_y;
            for (ofs_x = ofs_x_base; ofs_x > ofs_x_end; ofs_x -= 8) {
                i.dst = pChar;
                i.ofs_x = ofs_x;
                func_020b1300(&i);
                pChar += charSize;
            }
            pChar += nextLineOffset;
        }
    }
}
