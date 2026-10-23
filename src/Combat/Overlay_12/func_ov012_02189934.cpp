#if defined(jpn)
#define R(j,u) (j)
extern const char data_ov012_0218bfd7[];
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_02072a68_2;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" int func_02041e70(char* arg0, int arg1);

struct Struct_ov012_02189934 {
    unsigned short unknown_0_0_ : 5;
};

// USA: func_ov012_02189934
extern "C" ARM void func_ov012_02189934(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;

    int var0 = *(int*)(arg0 + R(0x1430, 0x13d8));
    if (arg2 != 0) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    func_02041b70(arg1, 0, (const char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + R(0x1314, 0x133c)), 7));
    func_02042058(arg1, *(char**)(arg0 + R(0x1348, 0x1378)));

    func_02041b70(arg1, 1, (const char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + R(0x1314, 0x133c)), 8));
    func_02042058(arg1, *(char**)(arg0 + R(0x1348, 0x1378)));

    if (((struct Struct_ov012_02189934*)(arg0 + R(0x141c, 0x13c4)))->unknown_0_0_ == 0) {
        func_02041e70(arg1, 3);
    }

    func_02041b70(arg1, 2, (const char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + R(0x1314, 0x133c)), 9));
    func_02042058(arg1, *(char**)(arg0 + R(0x1348, 0x1378)));

    if (((struct Struct_ov012_02189934*)(arg0 + R(0x141c, 0x13c4)))->unknown_0_0_ == 0) {
#if defined(jpn)
        func_02042058(arg1, data_ov012_0218bfd7);
#else
        func_02041e70(arg1, 0xf);
#endif
    }

    func_02041b70(arg1, 3, (const char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + R(0x1314, 0x133c)), 0x6d));
}
