#include <globaldefs.h>

#if defined(jpn)
namespace { enum { Enum_0206b7b0_2324 = 0x7e4, Enum_0206b7b0_324 = 0x104 }; }
// JPN: func_0206cfd4
extern "C" ARM void func_0206cfd4(char* arg0) {
#else
namespace { enum { Enum_0206b7b0_2324 = 0x914, Enum_0206b7b0_324 = 0x144 }; }
// USA: func_0206b7b0
extern "C" ARM void func_0206b7b0(char* arg0) {
#endif
    short var0 = *(short*)(arg0 + Enum_0206b7b0_2324);
    short var1 = *(short*)(arg0 + Enum_0206b7b0_2324 + 4);
    short var2 = *(short*)(arg0 + Enum_0206b7b0_324 + 4);
    short var3 = *(short*)(arg0 + Enum_0206b7b0_324 + 6);
    short var4 = *(short*)(arg0 + Enum_0206b7b0_2324 + 2);
    short var5 = var0 + var1 - var2;
    if (var5 < 0) var5 = 0;
    short var6 = var4 - var3;
    if (var6 < 0) var6 = 0;
    *(short*)(arg0 + Enum_0206b7b0_324) = var5;
    *(short*)(arg0 + Enum_0206b7b0_324 + 2) = var6;
}
