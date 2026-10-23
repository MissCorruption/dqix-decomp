#include <globaldefs.h>
#include "Resource/MessageSystem.h"
#if defined(jpn)
enum { Enum_ov003_0216d8d4_4900 = 0x11b4 };
#else
enum { Enum_ov003_0216d8d4_4900 = 0x1324 };
#endif

extern "C" int func_020421a0();
extern "C" void func_02046380(void);
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
struct Struct_02046574_2;
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
struct Struct_020465c0;
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);

// USA: func_ov003_0216d8d4
#if defined(jpn)
extern "C" ARM void func_ov003_0216d8d4(char* arg0, int arg1) {
#else
extern "C" ARM void func_ov003_0216d8d4(char* arg0, int arg1, int arg2, int arg3, int arg4) {
#endif
    Struct_02021b84* var0 = (Struct_02021b84*)func_020421a0();
#if !defined(jpn)
    func_02046380();

    if (arg2 >= 0) {
        struct Struct_0201099c_3* var1 = (struct Struct_0201099c_3*)(arg0 + Enum_ov003_0216d8d4_4900);
        int var2 = func_020e0434(var1, (short)arg2);
        func_02046574((struct Struct_02046574_2*)var0, 5, (char*)var2);
    }
    if (arg3 >= 0) {
        func_020465c0((struct Struct_020465c0*)var0, 1, arg3);
    }
    if (arg4 >= 0) {
        func_020465c0((struct Struct_020465c0*)var0, 0, arg4);
    }

#endif
    struct Struct_0201099c_3* var3 = (struct Struct_0201099c_3*)(arg0 + Enum_ov003_0216d8d4_4900);
    const char* var4 = (const char*)func_020e0434(var3, (short)arg1);
#if defined(jpn)
    func_0204500c(var0, var4, 0);
#else
    func_0204500c(var0, var4, 0, 0xe3);
#endif

    var0->unknown_19b2_ = 1;
    var0->unknown_99c_ = 2;
}
