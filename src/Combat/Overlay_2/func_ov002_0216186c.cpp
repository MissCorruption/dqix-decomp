#include <globaldefs.h>

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" int func_02041fac(char* arg0, int arg1, int arg2);
extern "C" int func_020e51cc(int arg0);

// USA: func_ov002_0216186c
#if defined(jpn)
extern "C" int func_02042638(char* arg0, int arg1, int arg2);
extern const char data_ov002_0216da9a[];
extern const char data_ov002_0216daa3[];
extern const char data_ov002_0216daa8[];

extern "C" ARM void func_ov002_0216186c(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) {
        return;
    }

    int var0 = *(short*)(arg0 + 0x1adc);
    if (arg2) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    func_02042638(arg1, (int)data_ov002_0216da9a, 0x10);

    func_02041b70(arg1, 0, data_ov002_0216daa3);

    void* var1 = *(void**)(arg0 + 0x1aa4);
    func_02042058(arg1, (const char*)var1);

    func_02041b70(arg1, 1, data_ov002_0216daa8);
}
#else
extern "C" ARM void func_ov002_0216186c(char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) {
        return;
    }

    int var2 = *(short*)(arg0 + 0x1c00 + 0x14);
    if (arg2) {
        func_02041c08(arg1, var2, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var2);

    int var3 = func_020e0434((struct Struct_0201099c_3*)(arg0 + 0x20), 0x23f0);
    func_02041fac(arg1, var3, 0x10);

    func_02041b70(arg1, 0, (const char*)func_020e51cc(0x1b));

    void* var4 = *(void**)(arg0 + 0x1000 + 0xbdc);
    func_02042058(arg1, (const char*)var4);

    func_02041b70(arg1, 1, (const char*)func_020e51cc(0x1c));
}
#endif
