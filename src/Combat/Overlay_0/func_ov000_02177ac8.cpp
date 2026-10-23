#include <globaldefs.h>

#if defined(jpn)
#define data_ov000_021834e0 data_ov000_02184560
#endif
struct Struct_0201099c_3;

extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" int func_02041a28(char* arg0, int arg1);

extern int data_ov000_021834e0[6];

// USA: func_ov000_02177ac8
extern "C" ARM void func_ov000_02177ac8(char* arg0, char* arg1) {
    if (arg1 == NULL) {
        return;
    }
#if defined(jpn)
    enum { Enum_ov000_02177ac8_7532 = 0x1fa4 };
    int var0 = 0x4d;
#else
    enum { Enum_ov000_02177ac8_7532 = 0x1d6c };
    int var0 = 0;
#endif
    signed char var1 = *(signed char*)(arg0 + Enum_ov000_02177ac8_7532);
#if !defined(jpn)
    for (int var2 = 0; var2 < 3; var2++) {
        const char* var3 = (const char*)func_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), (short)(var2 + 30014));
        int var4 = func_020420e8(var3, 0);
        if (var0 < var4) {
            var0 = var4;
        }
    }
#endif
    if (func_ov000_0217542c(arg0)) {
        func_02041c08(arg1, var1, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var1);
    for (int var5 = 0; var5 < 6; var5++) {
        int var6 = data_ov000_021834e0[var5];
        func_02041b70(arg1, var6, (const char*)func_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), (short)(var6 + 30014)));
        if (var5 == 5) {
            break;
        }
        int var7 = var5 & 1;
        if (var7) {
            func_02042058(arg1, (const char*)func_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), 0));
        }
        if (!var7) {
            func_02041a28(arg1, var0 + 0x20);
        }
    }
}
