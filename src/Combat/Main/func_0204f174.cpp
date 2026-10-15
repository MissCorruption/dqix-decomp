#include <globaldefs.h>
#include "std_library_functions.h"

struct Window0204f174 {
    char pad0[8];
    unsigned char* pixels;      // 0x08
    char pad0c[0x9c - 0xc];
    int dirty;                  // 0x9c
    int offset;                 // 0xa0
    int pixelSize;              // 0xa4
    short width;                // 0xa8
    short height;               // 0xaa
    short x;                    // 0xac
    short y;                    // 0xae
    char padb0[0xc2 - 0xb0];
    short frame;                // 0xc2
    char padc4;
    unsigned char flags;        // 0xc5
    char padc6[2];
    short drawWidth;            // 0xc8
    short drawHeight;           // 0xca
    char padcc[4];
    int indexSize;              // 0xd0
    unsigned short* indices;    // 0xd4
};

extern "C" void func_0204f914(Window0204f174* window, int color, short x0, short y0, short x1, short y1);
extern "C" void func_0204ea5c(Window0204f174* window);
extern "C" void func_0204ecb4(Window0204f174* window, int x, int y, short w, short h, signed char* margins);

// USA: func_0204f174
extern "C" ARM void func_0204f174(Window0204f174* window, short x, short y, short width, short height,
                                  unsigned char frame, unsigned char noFrame, unsigned char noBorder,
                                  signed char* margins) {
    window->x = x;
    window->y = y;
    window->frame = frame;
    if (noFrame) {
        window->flags |= 4;
    } else {
        window->flags &= ~4;
    }
    if (noBorder) {
        window->flags |= 0x10;
    } else {
        window->flags &= ~0x10;
    }
    int indexSize = width * height * 2;
    if (window->flags & 1) {
        if (window->width < width) width = window->width;
        if (window->height < height) height = window->height;
        window->drawWidth = width;
        window->drawHeight = height;
        window->indexSize = indexSize;
        memset(window->pixels, 0, window->pixelSize);
        if (!noFrame) {
            short left = 0;
            short top = 0;
            short right = width << 3;
            short bottom = height << 3;
            if (margins) {
                top += margins[0];
                bottom -= margins[0] + margins[1];
                left += margins[2];
                right -= margins[2] + margins[3];
            }
            func_0204f914(window, 0x11, left, top, right, bottom);
        }
    } else {
        window->flags |= 1;
        window->width = width;
        window->height = height;
        window->pixelSize = width * height * 32;
        memset(window->pixels, 0, window->pixelSize);
        if (!noFrame) {
            short left = 0;
            short top = 0;
            short right = width << 3;
            short bottom = height << 3;
            if (margins) {
                top += margins[0];
                bottom -= margins[0] + margins[1];
                left += margins[2];
                right -= margins[2] + margins[3];
            }
            func_0204f914(window, 0x11, left, top, right, bottom);
        }
        memset(window->indices, 0, indexSize);
        short w = window->width;
        short h = window->height;
        window->drawWidth = w;
        window->drawHeight = h;
        window->indexSize = indexSize;
        window->dirty = 1;
    }
    if (!noBorder) {
        if (!noFrame) func_0204ea5c(window);
        func_0204ecb4(window, 0, 0, width, height, margins);
    } else {
        window->flags |= 0x80;
    }
}
