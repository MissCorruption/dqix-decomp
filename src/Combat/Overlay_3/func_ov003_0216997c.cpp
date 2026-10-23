#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216997c_228 = 0xe0 };
enum { Enum_ov003_0216997c_388 = 0x180 };
enum { Enum_ov003_0216997c_390 = 0x182 };
enum { Enum_ov003_0216997c_392 = 0x184 };
enum { Enum_ov003_0216997c_394 = 0x186 };
enum { Enum_ov003_0216997c_396 = 0x188 };
enum { Enum_ov003_0216997c_398 = 0x18a };
enum { Enum_ov003_0216997c_400 = 0x18c };
enum { Enum_ov003_0216997c_402 = 0x18e };
enum { Enum_ov003_0216997c_405 = 0x191 };
enum { Enum_ov003_0216997c_409 = 0x195 };
enum { Enum_ov003_0216997c_1261 = 0x4e9 };
enum { Enum_ov003_0216997c_2400 = 0x800 };
#else
enum { Enum_ov003_0216997c_228 = 0xe4 };
enum { Enum_ov003_0216997c_388 = 0x184 };
enum { Enum_ov003_0216997c_390 = 0x186 };
enum { Enum_ov003_0216997c_392 = 0x188 };
enum { Enum_ov003_0216997c_394 = 0x18a };
enum { Enum_ov003_0216997c_396 = 0x18c };
enum { Enum_ov003_0216997c_398 = 0x18e };
enum { Enum_ov003_0216997c_400 = 0x190 };
enum { Enum_ov003_0216997c_402 = 0x192 };
enum { Enum_ov003_0216997c_405 = 0x195 };
enum { Enum_ov003_0216997c_409 = 0x199 };
enum { Enum_ov003_0216997c_1261 = 0x4ed };
enum { Enum_ov003_0216997c_2400 = 0x960 };
#endif

#if defined(jpn)
extern "C" void func_0205d304(void*, void*, int, int, int, int, int);
#endif
#include "std_library_functions.h"

struct Struct_0205de24_2;
extern "C" ARM void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" void func_ov003_02169a84(char* arg0, char* arg1, int arg2);
#if !defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov003_0216997c
extern "C" ARM void func_ov003_0216997c(void* arg0) {
    char* var0 = (char*)arg0;
    func_0205de24((struct Struct_0205de24_2*)(var0 + Enum_ov003_0216997c_228), 0, 2);

#if defined(jpn)
    int var6 = 8;
#else
    struct Struct_0201099c_3* var1 = (struct Struct_0201099c_3*)(var0 + 0x64);
    short var2 = 0;
    for (int var3 = 0; var3 < 3; var3++) {
        int var4 = func_020e0434(var1, (short)var3);
        short var5 = (short)func_020420e8((char*)var4, 0);
        if (var2 < var5) var2 = var5;
    }

    int var6 = ((var2 + 0x18) << 13) >> 16;
#endif
    *(short*)(var0 + Enum_ov003_0216997c_388) = var6;
    *(short*)(var0 + Enum_ov003_0216997c_390) = 6;
    *(short*)(var0 + Enum_ov003_0216997c_392) = 0x1f - var6;
    *(short*)(var0 + Enum_ov003_0216997c_394) = 2;
    *(short*)(var0 + Enum_ov003_0216997c_396) = 0xc;
    *(short*)(var0 + Enum_ov003_0216997c_398) = 8;
    *(short*)(var0 + Enum_ov003_0216997c_400) = 0xa;
    *(short*)(var0 + Enum_ov003_0216997c_402) = 0xe;

    *(unsigned char*)(var0 + Enum_ov003_0216997c_405) = 1;
    *(unsigned char*)(var0 + Enum_ov003_0216997c_409) = 1;
    *(unsigned char*)(var0 + Enum_ov003_0216997c_1261) = 0;

    memset(*(char**)(var0 + 0x7c), 0, Enum_ov003_0216997c_2400);
    func_ov003_02169a84(var0, *(char**)(var0 + 0x7c), 0);
#if defined(jpn)
    func_0205d304(var0 + Enum_ov003_0216997c_228, *(char**)(var0 + 0x7c), 0, 1, 0, 1, 0);
#else
    func_0205d304(var0 + Enum_ov003_0216997c_228, *(char**)(var0 + 0x7c), 0, 1, 0, 1, 0, 0);
#endif
}
