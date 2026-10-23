#include <globaldefs.h>

struct Struct_0201099c_3;

extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02041a28(char* arg0, int arg1);
extern "C" int func_02041fac(char* arg0, int arg1, int arg2);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);

#if defined(jpn)
extern "C" int func_02042638(char* arg0, int arg1, int arg2);
#endif

// USA: func_ov002_0215fbd4
#if defined(jpn)
extern "C" ARM void func_ov002_0215fbd4(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;

    int var0 = *(short*)(arg0 + 0x1a00 + 0xcc);
    short var1 = 0x109c;

    if (arg2) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    func_02041a28(arg1, 0xf);
    struct Struct_0201099c_3* var2 = (struct Struct_0201099c_3*)(arg0 + 0x8);
    var0 = func_020e0434(var2, 0x109a);
    func_02042638(arg1, var0, 0x10);

    char* var3;
    int var4;
    var4 = 0;
    for (; var4 < 6; var4++) {
        var3 = arg0 + 0x1000;
        short var5 = var1;
        var1++;
        int var6 = func_020e0434(var2, var5);
        func_02041b70(arg1, var4, (const char*)var6);
        if (var4 != 5) {
            func_02042058(arg1, *(char**)(var3 + 0xaa4));
        }
    }
}
#else
extern "C" ARM void func_ov002_0215fbd4(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;

    int var7 = *(short*)(arg0 + 0x1c00 + 0x4);
    short var8 = 0x109c;

    if (arg2) {
        func_02041c08(arg1, var7, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var7);

    struct Struct_0201099c_3* var9 = (struct Struct_0201099c_3*)(arg0 + 0x20);
    var7 = func_020e0434(var9, 0x109a);
    int var10 = func_020420e8((const char*)var7, 0);
    func_02041a28(arg1, (0x78 - var10) >> 1);
    func_02041fac(arg1, var7, 0x10);

    char* var11;
    int var12;
    var12 = 0;
    var11 = arg0 + 0x1000;
    for (; var12 < 6; var12++) {
        short var13 = var8;
        var8++;
        int var14 = func_020e0434(var9, var13);
        func_02041b70(arg1, var12, (const char*)var14);
        if (var12 != 5) {
            func_02042058(arg1, *(char**)(var11 + 0xbdc));
        }
    }
}
#endif
