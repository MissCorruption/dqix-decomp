#include <globaldefs.h>
#include "std_library_functions.h"

inline void* operator new(unsigned long, void* arg1) { return arg1; }

struct Struct_ov012_0218afbc { char unknown_0_[5]; };
extern Struct_ov012_0218afbc data_ov012_0218afbc[];
extern "C" int func_020424e4(int arg0, int arg1);

// Actual callers provide their initialized checker char[0x3c]. Representation
// writes do not create or access an unrelated Obj021845f8 object.
// USA: func_ov012_021845f8
extern "C" ARM void func_ov012_021845f8(void* arg0) {
    unsigned char* var0 = static_cast<unsigned char*>(arg0);
    memset(var0 + 0x18, 0, 0xc);
    int* var1 = new (var0 + 0x24) int;
    *var1 = 0;
    short* var2 = new (var0 + 0x28) short;
    *var2 = 0;
    unsigned char* var3 = var0 + 0x2a;
    int var4;
    for (var4 = 0; var4 < 15; ++var4)
        *var3++ = (unsigned char)func_020424e4((int)&data_ov012_0218afbc[var4], 1);
}
