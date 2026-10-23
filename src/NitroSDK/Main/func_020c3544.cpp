#include <globaldefs.h>

extern "C" int fix32_Divide(unsigned int arg0, unsigned int arg1);
extern short data_020ed554[];

// USA: func_020c3544
extern "C" ARM int func_020c3544(int arg0, int arg1) {
    int var0, var1, var2, var3;

    if (arg0 > 0) {
        if (arg1 > 0) {
            if (arg1 > arg0) {
                var0 = arg0; var1 = arg1; var2 = 0; var3 = 1;
            } else {
                if (arg1 < arg0) {
                    var0 = arg1; var1 = arg0; var2 = 0x4000; var3 = 0;
                } else {
                    return 0x2000;
                }
            }
        } else {
            if (arg1 < 0) {
                int var4 = -arg1;
                if (var4 < arg0) {
                    var0 = var4; var1 = arg0; var2 = 0x4000; var3 = 1;
                } else {
                    if (var4 > arg0) {
                        var0 = arg0; var1 = var4; var2 = 0x8000; var3 = 0;
                    } else {
                        return 0x6000;
                    }
                }
            } else {
                return 0x4000;
            }
        }
    } else {
        if (arg0 < 0) {
            int var5 = -arg0;
            if (arg1 < 0) {
                int var6 = -arg1;
                if (var6 > var5) {
                    var0 = var5; var1 = var6; var2 = -0x8000; var3 = 1;
                } else {
                    if (var6 < var5) {
                        var0 = var6; var1 = var5; var2 = -0x4000; var3 = 0;
                    } else {
                        return 0xa000;
                    }
                }
            } else {
                if (arg1 > 0) {
                    if (arg1 < var5) {
                        var0 = arg1; var1 = var5; var2 = -0x4000; var3 = 1;
                    } else {
                        if (arg1 > var5) {
                            var0 = var5; var1 = arg1; var2 = 0; var3 = 0;
                        } else {
                            return 0xe000;
                        }
                    }
                } else {
                    return 0xc000;
                }
            }
        } else {
            return (arg1 >= 0) ? 0 : 0x8000;
        }
    }

    if (var1 == 0) {
        return 0;
    }
    if (var3) {
        int var7 = data_020ed554[fix32_Divide(var0, var1) >> 5];
        return (unsigned short)(var2 + var7);
    } else {
        int var8 = data_020ed554[fix32_Divide(var0, var1) >> 5];
        return (unsigned short)(var2 - var8);
    }
}
