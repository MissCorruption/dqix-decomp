#include <globaldefs.h>

#include "Resource/TextEncoding.h"

extern Struct_020e743c data_020e74ec[];
extern Struct_020e743c data_020e74c8[];
extern Struct_020e743c data_020e74bc[];
extern Struct_020e743c data_020e743c[];
extern Struct_020e743c data_020e752c[];

// USA: func_020328bc
extern "C" ARM void func_020328bc(unsigned char *arg0, unsigned short *arg1, unsigned short arg2) {
    while (*arg1 != 0 && arg2-- != 0) {
        unsigned short var0 = *arg1++;
        unsigned short var1;
        if (var0 == 0xa5) {
            var1 = 0x5c;
        } else if (var0 == 0x5c) {
            var1 = 0x815f;
        } else if (var0 == 0x203e) {
            var1 = 0x7e;
        } else if (var0 == 0xd || var0 == 0xa) {
            var1 = var0;
        } else if (var0 >= 0x20 && var0 < 0x7e) {
            var1 = var0;
        } else if (var0 >= 0xa2 && var0 <= 0xf7) {
            var1 = func_02032e24(var0, data_020e74ec, 0xab);
        } else if (var0 >= 0xff61 && var0 <= 0xff9f) {
            var1 = var0 - 0xfec0;
        } else if (var0 == 0x4edd) {
            var1 = 0x8157;
        } else if (var0 >= 0xff01 && var0 <= 0xffe5) {
            if (var0 >= 0xff10 && var0 <= 0xff19) {
                var1 = var0 - 0x7cc1;
            } else if (var0 >= 0xff21 && var0 <= 0xff3a) {
                var1 = var0 - 0x7cc1;
            } else if (var0 >= 0xff41 && var0 <= 0xff5a) {
                var1 = var0 - 0x7cc0;
            } else {
                var1 = func_02032e24(var0, data_020e74c8, 0x54);
            }
        } else if (var0 >= 0x3000 && var0 <= 0x30fe) {
            if (var0 >= 0x3041 && var0 <= 0x3093) {
                var1 = var0 + 0x525e;
            } else if (var0 >= 0x30a1 && var0 <= 0x30f6) {
                var1 = var0 + 0x529f;
                if (var0 >= 0x30e0) var1++;
            } else {
                var1 = func_02032e24(var0, data_020e74bc, 0x6c);
            }
        } else if (var0 >= 0x391 && var0 <= 0x3a9) {
            var1 = var0 + 0x800e;
            if (var0 >= 0x3a3) var1--;
        } else if (var0 >= 0x3b1 && var0 <= 0x3c9) {
            var1 = var0 + 0x800e;
            if (var0 >= 0x3c3) var1--;
        } else if (var0 == 0x401) {
            var1 = 0x8446;
        } else if (var0 >= 0x410 && var0 <= 0x42f) {
            var1 = var0 + 0x8030;
            if (var0 >= 0x416) var1++;
        } else if (var0 >= 0x430 && var0 <= 0x44f) {
            var1 = var0 + 0x8040;
            if (var0 >= 0x436) {
                var1++;
                if (var0 >= 0x43e) var1++;
            }
        } else if (var0 == 0x451) {
            var1 = 0x8476;
        } else if (var0 >= 0x2500 && var0 <= 0x254b) {
            var1 = func_02032e24(var0, data_020e743c, 0x20);
        } else if ((var0 >= 0x2010 && var0 <= 0x2312) || (var0 >= 0x25a0 && var0 <= 0x266f)) {
            var1 = func_02032e24(var0, data_020e752c, 0xa0);
        } else {
            var1 = 0x8140;
        }
        if (var1 & 0xff00) *arg0++ = var1 >> 8;
        *arg0++ = var1;
    }
}
