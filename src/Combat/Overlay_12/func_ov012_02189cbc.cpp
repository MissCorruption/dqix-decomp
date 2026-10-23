#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov012_02189cbc_5088 = 0x1438, Enum_ov012_02189cbc_4924 = 0x1314, Enum_ov012_02189cbc_4984 = 0x1348 };
#else
enum { Enum_ov012_02189cbc_5088 = 0x13e0, Enum_ov012_02189cbc_4924 = 0x133c, Enum_ov012_02189cbc_4984 = 0x1378 };
#endif

extern "C" ARM int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" ARM int func_02041ea4(char* arg0, int arg1);
extern "C" ARM int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" ARM int func_02042058(char* arg0, const char* arg1);

struct Struct_02072a68_2;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);

// USA: func_ov012_02189cbc
extern "C" ARM void func_ov012_02189cbc(char* arg0, char* arg1, int arg2) {
    if (arg1 == 0) return;

    int var0 = *(int*)(arg0 + Enum_ov012_02189cbc_5088);
    if (arg2 != 0) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    int var1;
    for (var1 = 0; var1 < 8; var1++) {
        if (var1 != 0) {
            func_02042058(arg1, *(const char**)(arg0 + Enum_ov012_02189cbc_4984));
        }
        const char* var2 = (const char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov012_02189cbc_4924), (short)(var1 + 0x27d8));
        func_02041b70(arg1, var1, var2);
    }
}
