#include <globaldefs.h>

#include "World/ZoneResourceInitialization.h"
#include <globaldefs.h>

// USA: func_02014a24
extern "C" ARM int func_02014a24(Zone3D *arg0, void *arg1) {
    Struct_02014a24_2 *var0   = static_cast<Struct_02014a24_2 *>(arg1);
    int var1                = var0->unknown_8_;
    SafeAllocator *var2 = arg0->pAllocator_68_;
    var0->unknown_40_           = static_cast<Struct_02012ff0 *>(var2->Allocate(var1 * sizeof(Struct_02012ff0)));
    if (var0->unknown_40_ == NULL) return 0;

    for (int var3 = 0; var3 < var1; var3++) {
        Struct_02014a24 *var4 =
            static_cast<Struct_02014a24 *>(func_0201f144(reinterpret_cast<unsigned char *>(&var0->unknown_4_), var3));
        Struct_02012ff0 *var5 = var0->unknown_40_;
        func_02012ff0(var5 + var3);
        if (var4 != NULL) {
            if (reinterpret_cast<char *>(var4->unknown_4_)[3] == 'A') {
                func_02015134(arg0, var5 + var3, var4);
            } else if (static_cast<unsigned char>(var4->unknown_0_[2]) & 0x10) {
                func_020151cc(arg0, var5 + var3, var4);
            } else {
                func_02014d80(arg0, var0, var5 + var3, var4);
            }
        }
    }
    func_020177d4(arg0, var0, var2);
    return 1;
}
