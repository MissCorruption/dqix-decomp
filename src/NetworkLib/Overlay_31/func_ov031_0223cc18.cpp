#include <globaldefs.h>

struct FourShorts_0223cb1c {
    unsigned short l;
    unsigned short t;
    unsigned short r;
    unsigned short b;
};

// USA: func_ov031_0223cc18
extern "C" ARM void func_ov031_0223cc18(int side, int window, const FourShorts_0223cb1c* bounds) {
    if (side == 1) {
        if (window == 0) {
            int x1 = bounds->l;
            int y1 = bounds->t;
            int x2 = bounds->r;
            int y2 = bounds->b;
            *(volatile unsigned short*)0x04001040 = ((x1 << 8) & 0xff00) | (x2 & 0xff);
            *(volatile unsigned short*)0x04001044 = ((y1 << 8) & 0xff00) | (y2 & 0xff);
        } else {
            int x1 = bounds->l;
            int y1 = bounds->t;
            int x2 = bounds->r;
            int y2 = bounds->b;
            *(volatile unsigned short*)0x04001042 = ((x1 << 8) & 0xff00) | (x2 & 0xff);
            *(volatile unsigned short*)0x04001046 = ((y1 << 8) & 0xff00) | (y2 & 0xff);
        }
    } else {
        if (window == 0) {
            int x1 = bounds->l;
            int y1 = bounds->t;
            int x2 = bounds->r;
            int y2 = bounds->b;
            *(volatile unsigned short*)0x04000040 = ((x1 << 8) & 0xff00) | (x2 & 0xff);
            *(volatile unsigned short*)0x04000044 = ((y1 << 8) & 0xff00) | (y2 & 0xff);
        } else {
            int x1 = bounds->l;
            int y1 = bounds->t;
            int x2 = bounds->r;
            int y2 = bounds->b;
            *(volatile unsigned short*)0x04000042 = ((x1 << 8) & 0xff00) | (x2 & 0xff);
            *(volatile unsigned short*)0x04000046 = ((y1 << 8) & 0xff00) | (y2 & 0xff);
        }
    }
}
