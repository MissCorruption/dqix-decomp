#include <globaldefs.h>
#include "Resource/MessageSystem.h"

struct Struct_0201099c_3;
extern "C" int func_020421a0();
extern "C" int func_020e0434(Struct_0201099c_3* arg0, int arg1);

// USA: func_ov013_02185774
extern "C" ARM void func_ov013_02185774(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    Struct_02021b84* var1 = (Struct_02021b84*)func_020421a0();
#if defined(jpn)
    unsigned char var2 = var0[0x5c8];
    if (var2 == 4) {
        func_0204500c(var1, (const char*)func_020e0434((Struct_0201099c_3*)(var0 + 0x5ac), 1000), 0);
    } else if (var2 == 3) {
        func_0204500c(var1, (const char*)func_020e0434((Struct_0201099c_3*)(var0 + 0x5ac), 1001), 0);
    } else if (var2 == 2) {
        func_0204500c(var1, (const char*)func_020e0434((Struct_0201099c_3*)(var0 + 0x5ac), 1002), 0);
    }
    var1->unknown_19b2_ = 0;
    var1->unknown_998_ = 1;
#else
    unsigned char var3 = var0[0x63c];
    if (var3 == 4) {
        func_0204500c(var1, (const char*)func_020e0434((Struct_0201099c_3*)(var0 + 0x620), 1000), 0, 0xe3);
    } else if (var3 == 3) {
        func_0204500c(var1, (const char*)func_020e0434((Struct_0201099c_3*)(var0 + 0x620), 1001), 0, 0xe3);
    } else if (var3 == 2) {
        func_0204500c(var1, (const char*)func_020e0434((Struct_0201099c_3*)(var0 + 0x620), 1002), 0, 0xe3);
    }
    var1->unknown_19b2_ = 0;
    var1->unknown_998_ = 1;
#endif
}
