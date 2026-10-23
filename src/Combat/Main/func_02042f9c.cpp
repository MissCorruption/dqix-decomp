#include <globaldefs.h>
#include "Resource/FontGlyphTable.h"

#if defined(jpn)
extern "C" void func_02042ea4(unsigned char*, const unsigned char*);

// JPN: func_02042f9c
extern "C" ARM int func_02042f9c(Struct_0203bebc* arg0, const unsigned char* arg1) {
    if (arg0 == NULL) return -1;
    if (arg1 == NULL || (signed char)arg1[0] == 0) return -1;

    Struct_020429e4 var0;
    func_02042ea4(reinterpret_cast<unsigned char*>(&var0), arg1);
    int var1 = arg0->unknown_6_;
    Struct_020429e4* var2 = arg0->unknown_8_;
    for (int var3 = 0; var3 < var1; ++var2, ++var3) {
        if (var0.unknown_0_ == var2->unknown_0_ && var0.unknown_1_ == var2->unknown_1_) {
            return var3;
        }
    }
    return -1;
}
#endif
