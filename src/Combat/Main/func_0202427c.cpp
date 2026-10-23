#include <globaldefs.h>
#include "World/Zone3D.h"

extern "C" void *func_02012fe4(void);
extern "C" int func_0201b588(int arg0);
extern "C" int func_020d2ff0(const char *arg0);
extern "C" void func_0202756c(void *arg0, int arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5,
                              unsigned short arg6, unsigned char arg7, int arg8, int arg9);

static inline int inline_0202427c(int arg0) {
    return arg0 << 12;
}

// USA: func_0202427c
extern "C" ARM void func_0202427c(void *arg0) {
    unsigned char *var0 = static_cast<unsigned char *>(arg0);
    Zone3D *var1 = static_cast<Zone3D *>(func_02012fe4());
    unsigned short var2 = var1->currentZoneID_;
    if (!var0[0x5a8] || func_0201b588(var2) || var2 == 10000 || var2 == 10100) {
        return;
    }

    int var3 = 256;
#if defined(jpn)
    int var4 = 10 * (func_020d2ff0(var1->substruct_c_.unknown1_2a_) / 2);
    int var5 = var4 / 8 + 1;
    *reinterpret_cast<unsigned short *>(var0 + 0x4d0) = var5;
    int var6 = var5 * 8;
#else
    int var6 = (*reinterpret_cast<int *>(var0 + 0xbe4) + 7) & ~7;
    if (var6 > 144) {
        var6 = 144;
    }
    *reinterpret_cast<unsigned short *>(var0 + 0x4d0) = static_cast<unsigned short>(var6) >> 3;
#endif

    var3 -= 8;
    func_0202756c(arg0, inline_0202427c(var3), 0, 26, 0x53, 0, 8, 0xff, 4096, 4096);
    var3 -= var6;
    func_0202756c(arg0, inline_0202427c(var3), 0, 25, 0x41, 0, 8, 0xff, 4096, 4096);
    func_0202756c(arg0, inline_0202427c(var3 - 8), 0, 24, 0x40, 0, 8, 0xff, 4096, 4096);
}
