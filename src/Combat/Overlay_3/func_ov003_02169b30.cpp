#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02169b30_1257 = 0x4e5 };
enum { Enum_ov003_02169b30_228 = 0xe0 };
enum { Enum_ov003_02169b30_1439 = 0x59b };
enum { Enum_ov003_02169b30_1261 = 0x4e9 };
enum { Enum_ov003_02169b30_1258 = 0x4e6 };
#else
enum { Enum_ov003_02169b30_1257 = 0x4e9 };
enum { Enum_ov003_02169b30_228 = 0xe4 };
enum { Enum_ov003_02169b30_1439 = 0x59f };
enum { Enum_ov003_02169b30_1261 = 0x4ed };
enum { Enum_ov003_02169b30_1258 = 0x4ea };
#endif


extern "C" void func_ov003_02169594(void* arg0);
extern "C" int func_ov003_0216950c(void* arg0);
extern "C" void func_ov003_0216a974(void* arg0, int arg1, int arg2);
extern "C" void func_ov003_0216aa28(void* arg0);

extern "C" void func_0205cef8(void* arg0);
extern "C" void func_0205cf04(void* arg0);
extern "C" void func_0205cf10(void* arg0);

struct Struct_0205cf1c;
extern "C" void func_0205cf1c(struct Struct_0205cf1c* arg0);

struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* arg0);

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

extern "C" int func_ov003_02169554(void* arg0);

extern int data_02108760;

// USA: func_ov003_02169b30
extern "C" ARM int func_ov003_02169b30(void* arg0) {
    char* var0 = (char*)arg0;
    unsigned char var1 = *(unsigned char*)(var0 + Enum_ov003_02169b30_1257);
    if (var1 == 0) {
        func_ov003_02169594(var0);
        func_0205cef8(var0 + Enum_ov003_02169b30_228);
        func_0205cf04(var0 + Enum_ov003_02169b30_228);
        *(unsigned char*)(var0 + Enum_ov003_02169b30_1257) = *(unsigned char*)(var0 + Enum_ov003_02169b30_1257) + 1;
    } else if (var1 == 1) {
        *(unsigned char*)(var0 + Enum_ov003_02169b30_1439) |= 1;
        int var2 = func_0205d794((struct Struct_0205c570*)(var0 + Enum_ov003_02169b30_228));
        *(unsigned char*)(var0 + Enum_ov003_02169b30_1261) = (unsigned char)var2;
        if (func_ov003_0216950c(var0) != 0) {
            func_ov003_0216a974(var0, 1, 1);
            *(unsigned char*)(var0 + Enum_ov003_02169b30_1439) &= ~1;
            func_ov003_0216aa28(var0);
            *(unsigned char*)(var0 + Enum_ov003_02169b30_1258) = 0;
            func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);
            func_0205cf10(var0 + Enum_ov003_02169b30_228);
            func_0205cf1c((struct Struct_0205cf1c*)(var0 + Enum_ov003_02169b30_228));
            *(unsigned char*)(var0 + Enum_ov003_02169b30_1257) = 0;
            return *(signed char*)(var0 + Enum_ov003_02169b30_1261);
        } else {
            if (func_ov003_02169554(var0) != 0) {
                *(unsigned char*)(var0 + Enum_ov003_02169b30_1439) &= ~1;
                func_0205cf10(var0 + Enum_ov003_02169b30_228);
                func_0205cf1c((struct Struct_0205cf1c*)(var0 + Enum_ov003_02169b30_228));
                *(unsigned char*)(var0 + Enum_ov003_02169b30_1257) = 0;
                return -2;
            }
        }
    }
    return -1;
}
