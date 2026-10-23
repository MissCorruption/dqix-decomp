#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_0215e13c_961 = 0x3d9 };
enum { Enum_ov003_0215e13c_100 = 0x7c };
enum { Enum_ov003_0215e13c_960 = 0x3d8 };
enum { Enum_ov003_0215e13c_957 = 0x3d5 };
#else
enum { Enum_ov003_0215e13c_961 = 0x3c1 };
enum { Enum_ov003_0215e13c_100 = 0x64 };
enum { Enum_ov003_0215e13c_960 = 0x3c0 };
enum { Enum_ov003_0215e13c_957 = 0x3bd };
#endif

struct Struct_0201099c_3;
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);

extern char data_ov003_0217ff3e;

// USA: func_ov003_0215e13c
extern "C" ARM void func_ov003_0215e13c(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;

    signed char var0 = *(signed char*)(arg0 + Enum_ov003_0215e13c_961);
    if (arg2) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    struct Struct_0201099c_3* var1 = (struct Struct_0201099c_3*)(arg0 + Enum_ov003_0215e13c_100);
    int var2 = 0;
    while (var2 < *(unsigned char*)(arg0 + Enum_ov003_0215e13c_960)) {
        unsigned char var3 = *(unsigned char*)(arg0 + var2 + Enum_ov003_0215e13c_957);
        int var4 = func_020e0434(var1, var3);
        func_02041b70(arg1, var2, (const char*)var4);
        if (var2 != *(unsigned char*)(arg0 + Enum_ov003_0215e13c_960) - 1) {
            func_02042058(arg1, &data_ov003_0217ff3e);
        }
        var2++;
    }
}
