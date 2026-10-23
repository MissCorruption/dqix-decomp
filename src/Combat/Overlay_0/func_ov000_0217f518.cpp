#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_0203c198(char* arg0);
extern "C" int func_ov000_021719f8(int* arg0);
extern "C" void __clear(void* arg0, int arg1);
#if defined(jpn)
extern "C" int func_ov000_02171a74(void* arg0);
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3*, int);
#else
extern "C" int func_ov000_02171a74(void* arg0, char* arg1);
#endif
struct Struct_0203c108_3;
extern "C" void func_0203c108(struct Struct_0203c108_3* arg0, char* arg1);
extern "C" void func_ov000_02170ffc(void* arg0);

// USA: func_ov000_0217f518
extern "C" ARM void func_ov000_0217f518(char* arg0) {
#if !defined(jpn)
    char var0[0x80];
#endif
    memset(arg0 + 0x10, 0, 8);
    *(unsigned char*)(arg0 + 0x10) = 0xd;
    *(unsigned char*)(arg0 + 0x18) = 0;
    *(unsigned char*)(arg0 + 0x1c) = 0;
    *(char*)(arg0 + 0x1d) = -1;
    *(char*)(arg0 + 0x20) = -1;
    *(short*)(arg0 + 0x1e) = -1;
    *(char*)(arg0 + 0x22) = -1;
    *(char*)(arg0 + 0x21) = -1;
    *(short*)(arg0 + 0x2c) = -1;
    *(char*)(arg0 + 0x2e) = -1;
    *(short*)(arg0 + 0x26) = 0;
    func_0203c198(arg0 + 0x50);
#if defined(jpn)
    *(char*)(arg0 + 0x47d) = -1;
#else
    *(char*)(arg0 + 0x43d) = -1;
#endif
    if (func_ov000_021719f8((int*)arg0)) {
#if defined(jpn)
        int var1 = func_ov000_02171a74(arg0);
        struct Struct_0201099c_3* var2 = *(struct Struct_0201099c_3**)(arg0 + 4);
        if (var2 && var1 >= 0) {
            func_0203c108((struct Struct_0203c108_3*)(arg0 + 0x50), (char*)func_020e0434(var2, var1));
        }
#else
        __clear(var0, 0x80);
        int var3 = func_ov000_02171a74(arg0, var0);
        if (var3 >= 0) {
            func_0203c108((struct Struct_0203c108_3*)(arg0 + 0x50), var0);
        }
#endif
        *(unsigned char*)(arg0 + 0x10) = 0x64;
    }
    func_ov000_02170ffc(arg0);
}
