#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_02169a84_1261 = 0x4e9 };
#else
enum { Enum_ov003_02169a84_1261 = 0x4ed };
#endif

struct Struct_0201099c_3;
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);

// USA: func_ov003_02169a84
extern "C" ARM void func_ov003_02169a84(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;

    signed char var0 = *(signed char*)(arg0 + Enum_ov003_02169a84_1261);
    if (arg2) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    struct Struct_0201099c_3* var1 = (struct Struct_0201099c_3*)(arg0 + 0x64);
    int var2 = 0;
    while (var2 < 3) {
        int var3 = func_020e0434(var1, (short)var2);
        func_02041b70(arg1, var2, (const char*)var3);
        if (var2 != 2) {
            int var4 = func_020e0434(var1, 0x64);
            func_02042058(arg1, (const char*)var4);
        }
        var2++;
    }
}
