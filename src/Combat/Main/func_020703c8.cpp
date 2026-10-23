#if defined(jpn)
enum { Enum_020703c8_17604 = 0x4214 };
#else
enum { Enum_020703c8_17604 = 0x44c4 };
#endif

#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" int* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);
extern "C" void func_ov017_021d0924(int arg0, unsigned char arg1, int arg2, unsigned short arg3);

struct Struct_0206dee8;
struct Struct_0206dec8;
extern "C" void func_0206dee8(Struct_0206dee8* arg0, unsigned char arg1, unsigned char* arg2, unsigned char* arg3, unsigned char* arg4);
extern "C" void func_0206dec8(Struct_0206dec8* arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3, unsigned char arg4);

extern "C" void func_0206e080(char* arg0, int arg1);
extern "C" void func_0206e0d0(char* arg0, int arg1);
extern "C" void func_0206ebf4(char* arg0);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void func_0206df14(unsigned char* arg0);

// USA: func_020703c8
extern "C" ARM void func_020703c8(int arg0, int arg1, int arg2, int arg3) {
    unsigned char var0;
    unsigned char var1;
    unsigned char var2;
    void* var3 = func_0205ec34();
    int* var4 = func_0202ae18();
    char* var5 = *(char**)((char*)GetGameResources() + Enum_020703c8_17604);

    func_0206dee8((Struct_0206dee8*)var3, arg0, &var0, &var1, &var2);
    if (var2 + (var0 * 10000 + var1 * 100) >= arg3 + (arg1 * 10000 + arg2 * 100)) {
        return;
    }
    if (var0 != arg1) {
        func_0206e080((char*)var3, arg0);
        func_0206ebf4(var5);
    } else if (var1 != arg2) {
        func_0206e0d0((char*)var3, arg0);
        func_0206ebf4(var5);
    }
    func_0206dec8((Struct_0206dec8*)var3, arg0, arg1, arg2, arg3);
    if (func_0202b7d8(var4) != 0 && func_0202c508(var4) != 0) {
        func_ov017_021d0924(2, arg0, 0, arg3 | (arg1 << 10 | arg2 << 5));
    }
    func_0206df14((unsigned char*)var3);
}
