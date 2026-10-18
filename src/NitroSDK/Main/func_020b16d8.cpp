#include <globaldefs.h>

struct CharCanvas020b16d8 {
    unsigned char* charBase;
    int areaWidth;
    int areaHeight;
    unsigned char dstBpp;
    unsigned char padD[3];
    unsigned int param;
};

struct FontGlyph020b16d8 {
    unsigned char cellWidth;
    unsigned char cellHeight;
    unsigned short cellSize;
    signed char baselinePos;
    unsigned char maxCharWidth;
    unsigned char bpp;
    unsigned char flags;
};

struct FontInformation020b16d8 {
    unsigned char fontType;
    signed char linefeed;
    unsigned short alterCharIndex;
    unsigned char defaultWidth[3];
    unsigned char encoding;
    struct FontGlyph020b16d8* pGlyph;
};

struct Font020b16d8 {
    struct FontInformation020b16d8* pRes;
};

struct CharWidths020b16d8 {
    signed char left;
    unsigned char glyphWidth;
    signed char charWidth;
};

struct Glyph020b16d8 {
    const struct CharWidths020b16d8* pWidths;
    const unsigned char* image;
};

struct LCInfo020b16d8 {
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

union OBJ1DParam020b16d8 {
    unsigned int packed;
    struct {
        unsigned baseWidthShift : 8;
        unsigned baseHeightShift : 8;
    } s;
};

extern "C" unsigned int func_020b10b4(unsigned int cx, unsigned int cy, unsigned int areaWidth, unsigned int areaHeight, unsigned int objWidth, unsigned int objHeight);
extern "C" void func_020b1300(struct LCInfo020b16d8* i);

static inline int GetCharacterSize(const struct CharCanvas020b16d8* pCC) {
    return 8 * 8 * pCC->dstBpp / 8;
}

static inline unsigned char FontGetCellHeight(const struct Font020b16d8* pFont) {
    return pFont->pRes->pGlyph->cellHeight;
}

static inline unsigned char FontGetCellWidth(const struct Font020b16d8* pFont) {
    return pFont->pRes->pGlyph->cellWidth;
}

static inline unsigned char FontGetBpp(const struct Font020b16d8* pFont) {
    return pFont->pRes->pGlyph->bpp;
}

// USA: func_020b16d8
extern "C" ARM void func_020b16d8(const struct CharCanvas020b16d8* pCC, const struct Font020b16d8* pFont, int x, int y, int cl, const struct Glyph020b16d8* pGlyph) {
    int ofs_x_base;
    int ofs_x;
    int ofs_y;
    int ofs_x_end;
    int ofs_y_end;
    int cx, cx_base;
    int cy;
    unsigned char glyphWidth;
    unsigned char charHeight;
    int charSize;

    charSize = GetCharacterSize(pCC);

    {
        int chara_x_num;
        int chara_y_num;

        unsigned int areaWidth = (unsigned int)pCC->areaWidth;
        unsigned int areaHeight = (unsigned int)pCC->areaHeight;

        unsigned int chara_x_begin;
        unsigned int chara_x_last;
        unsigned int chara_y_begin;
        unsigned int chara_y_last;

        glyphWidth = pGlyph->pWidths->glyphWidth;
        charHeight = FontGetCellHeight(pFont);

        if (glyphWidth <= 0) {
            return;
        }

        if ((x + glyphWidth < 0) || (y + charHeight) < 0) {
            return;
        }

        chara_x_begin = (x <= 0) ? 0 : ((unsigned int)x / 8);
        chara_y_begin = (y <= 0) ? 0 : ((unsigned int)y / 8);

        chara_x_last = (unsigned int)(x + glyphWidth + 7) / 8;
        if (chara_x_last >= areaWidth) {
            chara_x_last = areaWidth;
        }

        chara_y_last = (unsigned int)(y + charHeight + 7) / 8;
        if (chara_y_last >= areaHeight) {
            chara_y_last = areaHeight;
        }

        chara_x_num = (int)(chara_x_last - chara_x_begin);
        chara_y_num = (int)(chara_y_last - chara_y_begin);

        if ((chara_x_num < 0) || (chara_y_num < 0)) {
            return;
        }

        cx_base = (int)chara_x_begin;
        cy = (int)chara_y_begin;

        ofs_x_base = (x < 0) ? x : x & 0x7;
        ofs_y = (y < 0) ? y : y & 0x7;
        ofs_x_end = ofs_x_base - 8 * chara_x_num;
        ofs_y_end = ofs_y - 8 * chara_y_num;
    }

    {
        struct LCInfo020b16d8 i;
        unsigned char* const pCharBase = pCC->charBase;
        union OBJ1DParam020b16d8 p;

        i.src = pGlyph->image;
        i.width = glyphWidth;
        i.height = charHeight;
        i.cl = (unsigned int)(cl - 1);
        i.srcBpp = FontGetBpp(pFont);
        i.dstBpp = pCC->dstBpp;
        i.dsrc = FontGetCellWidth(pFont) * i.srcBpp;

        p.packed = pCC->param;

        {
            const unsigned int areaWidth = (unsigned int)pCC->areaWidth;
            const unsigned int areaHeight = (unsigned int)pCC->areaHeight;
            const unsigned int baseWidthShift = p.s.baseWidthShift;
            const unsigned int baseHeightShift = p.s.baseHeightShift;

            for (; ofs_y > ofs_y_end; ofs_y -= 8) {
                i.ofs_y = ofs_y;
                cx = cx_base;
                for (ofs_x = ofs_x_base; ofs_x > ofs_x_end; ofs_x -= 8) {
                    const unsigned int iChar = func_020b10b4((unsigned int)cx, (unsigned int)cy, areaWidth, areaHeight, baseWidthShift, baseHeightShift);

                    i.ofs_x = ofs_x;
                    i.dst = pCharBase + iChar * charSize;

                    func_020b1300(&i);
                    cx++;
                }
                cy++;
            }
        }
    }
}
