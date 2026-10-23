#if defined(jpn)
#define func_0204f7e8 func_02050cc0
#endif
#include <globaldefs.h>

#pragma opt_common_subs off

extern "C" void* __clear(void* dst, int count);
extern "C" int sprintf(char* dst, const char* fmt, ...);
extern "C" int func_02042190(int x);
extern "C" int func_020420e8(char* str, int id);
extern "C" void func_0204f41c(int a, short b, short c, char* buf, int d, int e, void* f, void* g, int h);
extern char data_020f02f5;
extern char data_020f02fc;
extern char data_020f0300;
#if defined(jpn)
extern char data_020f0315;
extern char data_020f031c;
extern char data_020f0327;
extern "C" void func_02050678(int a, short b, short c, char* buf, int d, int e, void* f, void* g);
#endif

// USA: func_0204f7e8
extern "C" ARM void func_0204f7e8(int target, short width, short height, int value,
                                  unsigned char style, unsigned char color, void* palette, void* font,
                                  unsigned char measure, unsigned char digits,
                                  unsigned char showSign, unsigned char zeroPad) {
#if defined(jpn)
    unsigned char count = 0;
    int v = value;
    do {
        count++;
        v = v / 10;
    } while (v != 0);

    int pad = 0;
    if (measure) {
        if (count <= digits) {
            pad = style * (digits - count);
        } else {
            pad = -(style * (count - digits));
        }
    }

    char buf[0x40];
    __clear(buf, 0x40);
    if (zeroPad) {
        char fmt[8];
        __clear(fmt, 8);
        sprintf(fmt, &data_020f0315, digits);
        sprintf(buf, fmt, value);
    } else if (showSign && value > 0) {
        sprintf(buf, &data_020f031c, pad, value);
    } else {
        sprintf(buf, &data_020f0327, pad, value);
    }
    func_02050678(target, width, height, buf, style, color, palette, font);
#else
    int v = value;
    do {
        v = v / 10;
    } while (v != 0);

    char buf[0x40];
    __clear(buf, 0x40);
    if (zeroPad) {
        char fmt[8];
        __clear(fmt, 8);
        sprintf(fmt, &data_020f02f5, digits);
        sprintf(buf, fmt, value);
    } else if (showSign && value > 0) {
        sprintf(buf, &data_020f02fc, value);
    } else {
        sprintf(buf, &data_020f0300, value);
    }

    int index = func_02042190(style);
    if (measure) {
        width = width - func_020420e8(buf, index);
    }
    func_0204f41c(target, width, height, buf, style, color, palette, font, index);
#endif
}
