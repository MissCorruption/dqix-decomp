#include <globaldefs.h>

struct Bitmap0204f914 {
    unsigned char padding0[8];
    unsigned char* pixels;
    unsigned char paddingc[0x9c];
    short width;
    short height;
};

static inline int HalfColumn0204f914(short column) { return column >> 1; }

// USA: func_0204f914
extern "C" ARM void func_0204f914(Bitmap0204f914* bitmap, unsigned char color, short originX, short originY, short endX, short endY) {
    if (endX < 0 || endY < 0) return;
    short pixelHeight = bitmap->height * 8;
    short pixelWidth = bitmap->width * 8;
    if (endX > pixelWidth) return;
    if (pixelHeight < endY) return;
    if (originX == endX || originY == endY) return;
    unsigned char highColor;
    unsigned char lowColor;
    lowColor = color & 15;
    highColor = lowColor << 4;
    for (short y = originY; y < endY; ++y) {
        short rowPart = y & 7;
        short rowOffset = rowPart * 4;
        int tileRow = (short)(y >> 3) * bitmap->width;
        for (short x = originX; x < endX; ++x) {
            short tile = tileRow + (short)(x >> 3);
            short columnPart = x & 7;
            short offset = HalfColumn0204f914(columnPart) + (short)(tile * 32);
            offset += rowOffset;
            unsigned char& pixel = bitmap->pixels[offset];
            if (x & 1) {
                pixel &= 15;
                pixel |= highColor;
            } else {
                pixel &= 0xf0;
                pixel |= lowColor;
            }
        }
    }
}
