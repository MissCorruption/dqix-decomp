#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov012_02189fb0_5112 = 0x1450, Enum_ov012_02189fb0_4924 = 0x1314, Enum_ov012_02189fb0_4984 = 0x1348 };
#else
enum { Enum_ov012_02189fb0_5112 = 0x13f8, Enum_ov012_02189fb0_4924 = 0x133c, Enum_ov012_02189fb0_4984 = 0x1378 };
#endif

extern "C" ARM int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" ARM int func_02041ea4(char* arg0, int arg1);
extern "C" ARM int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" ARM int func_02042058(char* arg0, const char* arg1);

struct Struct_02072a68_2;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);

// USA: func_ov012_02189fb0
extern "C" ARM void func_ov012_02189fb0(char* arg0, char* arg1, int arg2) {
    if (arg1 == 0) return;

    int var0 = *(int*)(arg0 + Enum_ov012_02189fb0_5112);
    if (arg2 != 0) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    const char* var1 = (const char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov012_02189fb0_4924), 0x10);
    func_02041b70(arg1, 0, var1);

    func_02042058(arg1, *(const char**)(arg0 + Enum_ov012_02189fb0_4984));

    const char* var2 = (const char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov012_02189fb0_4924), 0x11);
    func_02041b70(arg1, 1, var2);
}
