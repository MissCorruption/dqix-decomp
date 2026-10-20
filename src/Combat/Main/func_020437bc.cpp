#include <globaldefs.h>

struct Rectangle020437bc {
    short x, y, width, height;
};

#if defined(jpn)
// JPN: its own tile table (data_020e8453), tile bias 0x1d, and int row offsets.
extern const unsigned char data_020e8453[][8];

extern "C" ARM void func_020437bc(unsigned short* map, const Rectangle020437bc* rectangle, int style) {
    if (map == NULL || rectangle == NULL) return;
    if (rectangle->width == 0 || rectangle->height == 0) return;
    short bottom;
    short left = rectangle->x;
    short top = rectangle->y;
    const unsigned char* tiles = data_020e8453[style];
    short right = left + rectangle->width;
    bottom = top + rectangle->height;
    left >>= 3;
    top >>= 3;
    right >>= 3;
    bottom >>= 3;
    (map + top * 32)[left] = tiles[0] - 0x1d;
    (map + top * 32)[right] = tiles[1] - 0x1d;
    (map + bottom * 32)[left] = tiles[2] - 0x1d;
    (map + bottom * 32)[right] = tiles[3] - 0x1d;
    for (short x = left + 1; x < right; x++) {
        (map + top * 32)[x] = tiles[4] - 0x1d;
        (map + bottom * 32)[x] = tiles[5] - 0x1d;
    }
    for (short y = top + 1; y < bottom; y++) {
        (map + y * 32)[left] = tiles[6] - 0x1d;
        (map + y * 32)[right] = tiles[7] - 0x1d;
    }
    for (short y = top + 1; y < bottom; y++) {
        for (short x = left + 1; x < right; x++) {
            (map + y * 32)[x] = 1;
        }
    }
}
#else
extern const unsigned char data_020e7ade[][8];

// USA: func_020437bc
extern "C" ARM void func_020437bc(unsigned short* map, const Rectangle020437bc* rectangle, int style) {
    if (map == NULL || rectangle == NULL) return;
    if (rectangle->width == 0 || rectangle->height == 0) return;
    short bottom;
    const unsigned char* tiles = data_020e7ade[style];
    short left = rectangle->x;
    short top = rectangle->y;
    short right = left + rectangle->width;
    bottom = top + rectangle->height;
    left >>= 3;
    top >>= 3;
    right >>= 3;
    bottom >>= 3;
    short topRow = top * 32;
    short bottomRow = bottom * 32;
    (map + topRow)[left] = tiles[0] - 0x13;
    (map + topRow)[right] = tiles[1] - 0x13;
    (map + bottomRow)[left] = tiles[2] - 0x13;
    (map + bottomRow)[right] = tiles[3] - 0x13;
    for (short x = left + 1; x < right; x++) {
        (map + topRow)[x] = tiles[4] - 0x13;
        (map + bottomRow)[x] = tiles[5] - 0x13;
    }
    for (short y = top + 1; y < bottom; y++) {
        short row = y * 32;
        (map + row)[left] = tiles[6] - 0x13;
        (map + row)[right] = tiles[7] - 0x13;
    }
    for (short y = top + 1; y < bottom; y++) {
        short row = y * 32;
        for (short x = left + 1; x < right; x++) {
            (map + row)[x] = 1;
        }
    }
}
#endif
