#include <globaldefs.h>

// USA: func_ov031_0223cd30
extern "C" ARM void func_ov031_0223cd30(int arg0, int arg1, unsigned short arg2, int arg3) {
    switch (arg1) {
    case 0: {
        if (arg0 == 1) {
            unsigned var0 = *(volatile unsigned short*)0x4001048;
            var0 = (var0 & ~0x3f) | arg2;
            if (arg3) var0 |= 0x20;
            *(volatile unsigned short*)0x4001048 = var0;
        } else {
            unsigned var1 = *(volatile unsigned short*)0x4000048;
            var1 = (var1 & ~0x3f) | arg2;
            if (arg3) var1 |= 0x20;
            *(volatile unsigned short*)0x4000048 = var1;
        }
        break;
    }
    case 1: {
        if (arg0 == 1) {
            unsigned var2 = *(volatile unsigned short*)0x4001048;
            var2 = (var2 & ~0x3f00) | (arg2 << 8);
            if (arg3) var2 |= 0x2000;
            *(volatile unsigned short*)0x4001048 = var2;
        } else {
            unsigned var3 = *(volatile unsigned short*)0x4000048;
            var3 = (var3 & ~0x3f00) | (arg2 << 8);
            if (arg3) var3 |= 0x2000;
            *(volatile unsigned short*)0x4000048 = var3;
        }
        break;
    }
    case 2: {
        if (arg0 == 1) {
            unsigned var4 = *(volatile unsigned short*)0x400104a;
            var4 = (var4 & ~0x3f00) | (arg2 << 8);
            if (arg3) var4 |= 0x2000;
            *(volatile unsigned short*)0x400104a = var4;
        } else {
            unsigned var5 = *(volatile unsigned short*)0x400004a;
            var5 = (var5 & ~0x3f00) | (arg2 << 8);
            if (arg3) var5 |= 0x2000;
            *(volatile unsigned short*)0x400004a = var5;
        }
        break;
    }
    case 3: {
        if (arg0 == 1) {
            unsigned var6 = *(volatile unsigned short*)0x400104a;
            var6 = (var6 & ~0x3f) | arg2;
            if (arg3) var6 |= 0x20;
            *(volatile unsigned short*)0x400104a = var6;
        } else {
            unsigned var7 = *(volatile unsigned short*)0x400004a;
            var7 = (var7 & ~0x3f) | arg2;
            if (arg3) var7 |= 0x20;
            *(volatile unsigned short*)0x400004a = var7;
        }
        break;
    }
    }
}
