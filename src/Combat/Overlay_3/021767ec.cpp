#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_021767ec_2204 = 0x818 };
enum { Enum_ov003_021767ec_4166 = 0xfc2 };
enum { Enum_ov003_021767ec_4116 = 0xf90 };
enum { Enum_ov003_021767ec_2101 = 0x7b1 };
enum { Enum_ov003_021767ec_2120 = 0x7c4 };
enum { Enum_ov003_021767ec_2164 = 0x7f0 };
enum { Enum_ov003_021767ec_13 = 0xc };
enum { Enum_ov003_021767ec_4118 = 0xf92 };
#else
enum { Enum_ov003_021767ec_2204 = 0x89c };
enum { Enum_ov003_021767ec_4166 = 0x1046 };
enum { Enum_ov003_021767ec_4116 = 0x1014 };
enum { Enum_ov003_021767ec_2101 = 0x835 };
enum { Enum_ov003_021767ec_2120 = 0x848 };
enum { Enum_ov003_021767ec_2164 = 0x874 };
enum { Enum_ov003_021767ec_13 = 0xd };
enum { Enum_ov003_021767ec_4118 = 0x1016 };
#endif

struct Struct_0207fdcc_2;
extern "C" void func_02080c20(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
extern "C" void func_02080b54(void* arg0, int arg1);
extern "C" void func_02080608(void* arg0, int arg1);
extern "C" void func_02081130(void* arg0, int arg1, int arg2);

struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" unsigned int func_ov003_02175898(char* arg0, void* arg1);

extern "C" void func_0208077c(void* arg0, int arg1, short arg2);
extern "C" int func_02080b40(void* arg0, int arg1);

struct Struct_ov003_021767ec;
#if !defined(jpn)
extern "C" void func_ov003_0217818c(char* arg0, struct Struct_ov003_021767ec* arg1, int arg2, int arg3);
#endif

#if !defined(jpn)
extern "C" void func_020805f4(void* arg0, int arg1);
#endif

struct Struct_02080f8c;
extern "C" void func_02080f8c(struct Struct_02080f8c* arg0, int arg1, int arg2);
struct Struct_02080fa8;
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);

extern "C" void func_020806c4(void* arg0, int arg1);
extern "C" int func_020813ec(void* arg0, int arg1);

// USA: func_ov003_021767ec
extern "C" ARM int func_ov003_021767ec(char* arg0) {
    struct Struct_0207fdcc_2* var0 = *(struct Struct_0207fdcc_2**)(arg0 + Enum_ov003_021767ec_2204);
    short var1 = 7;
    short var2 = 13;
    short var3 = 19;

    func_02080c20(var0, 3);
    func_02080c68(var0, 3, 0);
    func_02080b54(var0, 3);
    func_02080608(var0, 3);

    unsigned short var4 = *(unsigned short*)(arg0 + Enum_ov003_021767ec_4166);
    func_02081130(var0, 3, (var4 & 0x400) != 0);

    short var5 = *(short*)(arg0 + Enum_ov003_021767ec_4116);
    unsigned char var6;
    unsigned char var7 = var5 * 6;
    var6 = var7 + 6;

    for (; var7 < var6; ) {
        int var8 = 0;
        unsigned int var9 = 0;
        unsigned char var10 = *(unsigned char*)(arg0 + Enum_ov003_021767ec_2101);
        if (var7 < var10) {
            short var11 = *(short*)(arg0 + Enum_ov003_021767ec_2120 + var7 * 2);
            struct Struct_0201099c_9* var12 = func_020dedd0((struct Struct_0201099c_10*)(arg0 + Enum_ov003_021767ec_2164), var11);
            if (var12 != NULL) {
                var8 = *(unsigned int*)((char*)var12 + 4);
                var9 = func_ov003_02175898(arg0, var12);
                func_0208077c(var0, var1, Enum_ov003_021767ec_13);
                func_02080b40(var0, var1);
                func_02080b40(var0, var2);
                func_02080b40(var0, var3);
#if !defined(jpn)
                func_ov003_0217818c(arg0, (struct Struct_ov003_021767ec*)var12, var2, var3);
#endif
            }
#if !defined(jpn)
            func_020805f4(var0, var1);
#endif
            func_02080f8c((struct Struct_02080f8c*)var0, var1, var8);
            func_02080fa8((struct Struct_02080fa8*)var0, var2, var9);
            func_020806c4(var0, var1);
        }
        var1 = var1 + 1;
        var2 = var2 + 1;
        var3 = var3 + 1;
        var7 = var7 + 1;
    }

    func_02080b40(var0, 0x19);
    func_02080b40(var0, 0x1a);
    func_02080b40(var0, 0x1b);
    func_02080fa8((struct Struct_02080fa8*)var0, 0x19, *(short*)(arg0 + Enum_ov003_021767ec_4116) + 1);
    func_02080fa8((struct Struct_02080fa8*)var0, 0x1a, *(short*)(arg0 + Enum_ov003_021767ec_4118));
    return func_020813ec(var0, 3);
}
