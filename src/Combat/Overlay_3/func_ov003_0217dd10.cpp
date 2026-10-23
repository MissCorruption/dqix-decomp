#include <globaldefs.h>
#include "Resource/MessageSystem.h"
#if defined(jpn)
enum { Enum_ov003_0217dd10_204 = 0xc8 };
#else
enum { Enum_ov003_0217dd10_204 = 0xcc };
#endif

extern "C" int func_020421a0();
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);

// USA: func_ov003_0217dd10
extern "C" ARM void func_ov003_0217dd10(char* arg0, int arg1) {
    Struct_02021b84* var0 = (Struct_02021b84*)func_020421a0();
    const char* var1 = (const char*)func_020e0434((struct Struct_0201099c_3*)(arg0 + Enum_ov003_0217dd10_204), (short)arg1);
#if defined(jpn)
    func_0204500c(var0, var1, 0);
#else
    func_0204500c(var0, var1, 0, 0xe3);
#endif
    var0->unknown_19b2_ = 1;
    var0->unknown_99c_ = 2;
}
