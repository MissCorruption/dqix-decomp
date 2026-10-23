#include <globaldefs.h>
#include "World/ZoneChest.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34();

// USA: func_02018c74
extern "C" ARM void func_02018c74(Zone3D* arg0, unsigned int arg1) {
    func_0205ec34();
    int var0;
    for (var0 = 0; var0 < 16; var0++) {
        if (arg1 & (1 << var0)) {
            Struct_020134e0::Struct_02018300* var1 = func_02018c20(arg0, var0);
            if (var1) {
                if (!(var1->unknown_2c_.unknown1_0_.unknown_2_4_ & 8)) {
                    var1->unknown_2c_.unknown1_0_.unknown_2_4_ = var1->unknown_2c_.unknown1_0_.unknown_2_4_ | 0x101;
                }
                func_02018300(arg0, var1, 0, 0, 0);
            }
        }
    }
    arg0->unknown_281e_ = 0;
}
