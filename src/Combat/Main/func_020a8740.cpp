#include <globaldefs.h>
#include "World/Zone3D.h"

extern "C" void* func_02012fe4(void);
extern "C" void func_ov017_021d1874(unsigned char arg0, unsigned char arg1, unsigned char arg2, int arg3, int arg4, int arg5, int arg6);

// USA: func_020a8740
extern "C" ARM void func_020a8740(void) {
    Zone3D* var0 = (Zone3D*)func_02012fe4();
    int var1 = 0;
    for (;;) {
        Struct_020134e0::Struct_02018300* var2 = func_0201e664(&var0->substruct_6c_, var1);
        var1++;
        if (!var2) return;
        if (var2->unknown_4_ != 0xc) continue;
        unsigned char* var3 = (unsigned char*)&var2->unknown_2c_.unknown7_0_;
        unsigned short var4 = var0->unknown_4_;
        if (!var3) return;
        if (var4 == 0x1130 && var3[0] == 1) {
            func_ov017_021d1874(var3[0], var3[1], var3[2], 2, 0, 0, 0);
        }
    }
}
