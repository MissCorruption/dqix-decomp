#include <globaldefs.h>
#include "World/ZoneChest.h"

struct Struct_020fdd44;
extern "C" Struct_020fdd44* func_02027ca4();
extern "C" Struct_020fdd44* func_02028bd0(Struct_020fdd44* arg0, int arg1);

// USA: func_02013cb0
extern "C" ARM void func_02013cb0(Zone3D* arg0, unsigned int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_476_; var0++) {
        if (arg1 & (1 << var0)) {
            arg0->unknown_478_[var0].unknown_2_ = -1;
        }
    }
    Struct_020fdd44* var1 = func_02027ca4();
    Struct_020fdd44* var2 = func_02028bd0(var1, arg0->currentZoneID_);
    if (var2 == NULL) {
        return;
    }
    unsigned short* var3 = (unsigned short*)((unsigned char*)var2 + 2);
    unsigned int var4 = *var3;
    *var3 = (var4 & 0xffff000f) | ((arg1 << 20) >> 16);
}
