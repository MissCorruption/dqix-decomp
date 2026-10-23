#include <globaldefs.h>
#include "Resource/FontGlyphTable.h"
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" int func_02042f9c(Struct_0203bebc*, const unsigned char*);

// JPN: func_02043014
extern "C" ARM int func_02043014(int arg0, unsigned short* arg1) {
    const unsigned char* var0 = reinterpret_cast<const unsigned char*>(arg1);
    if (var0 == NULL || (signed char)var0[0] == 0) return -1;

    int var1 = func_02042f9c(func_020429bc(arg0), var0);
    if (var1 >= 0) return var1;
    return func_02042f9c(
        static_cast<Struct_0203bebc*>(func_02094b44(func_02094a00(), arg0)), var0)
        | 0x40000000;
}
#endif
