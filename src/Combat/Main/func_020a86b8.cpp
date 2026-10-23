#include <globaldefs.h>
#include "World/Zone3D.h"

extern "C" void* func_02012fe4(void);
extern "C" void* func_020a8a34(void*, int, int, int);

// USA: func_020a86b8
extern "C" ARM void* func_020a86b8(int arg0, int arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4, unsigned char arg5, unsigned char arg6, unsigned char arg7) {
    Zone3D* var0 = (Zone3D*)func_02012fe4();
    int var1 = 0;
    for (;;) {
        Struct_020134e0::Struct_02018300* var2 = func_0201e664(&var0->substruct_6c_, var1);
        var1++;
        if (!var2) return var2;
        if (var2->unknown_4_ != 0xc) continue;
        unsigned char* var3 = (unsigned char*)&var2->unknown_2c_.unknown7_0_;
        if (!var3) return var3;
        if (arg1 != 0) {
            if (var3[0] == arg2 && var3[1] == arg3 && var3[2] == arg4 && arg2 == 1) {
                return func_020a8a34(var3, arg5, arg6, arg7);
            }
        }
    }
}
