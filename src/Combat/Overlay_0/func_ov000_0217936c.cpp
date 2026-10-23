#include <globaldefs.h>

struct Struct_0205c508;
struct Struct_0201099c_3;

struct Struct_ov000_0217936c_2 {
    char unknown_0_[0x1e];
    short unknown_1e_;
};

struct Struct_ov000_0217936c {
    char unknown_0_[0xb8];
    char unknown_b8_[0x1dc - 0xb8];
    char unknown_1dc_[4];
};

extern "C" void func_0205c508(struct Struct_0205c508* arg0, int* arg1, int* arg2);
extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int* func_ov000_0217199c(void* arg0, int arg1);
extern "C" int func_ov000_0217c4e8(void* arg0, int arg1);
extern "C" int func_02041e70(char* arg0, int arg1);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_020e4864(int arg0, char* arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_0206819c(const char* arg0, char* arg1, int arg2);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);

// USA: func_ov000_0217936c
extern "C" ARM void func_ov000_0217936c(struct Struct_ov000_0217936c* arg0, struct Struct_ov000_0217936c_2* arg1, char* arg2) {
#if !defined(jpn)
    char var0[0x80];
    char var1[0x80];
#endif
    int var2;
    int var3;
    if (arg1 == NULL || arg2 == NULL) {
        return;
    }
    func_0205c508((struct Struct_0205c508*)arg0->unknown_1dc_, &var2, &var3);
    short var4 = var2;
    short var5 = var3;
    short var6 = arg1->unknown_1e_;
    if (func_ov000_0217542c(arg0)) {
        func_02041c08(arg2, var6 - var4, 8, 5, 5, 5);
    }
    func_02041ea4(arg2, var6 - var4);
    for (short var7 = var4; var7 < var5; var7++) {
        int* var8 = func_ov000_0217199c(arg1, var7);
        if (var8 == NULL) {
            continue;
        }
#if defined(jpn)
        if (func_ov000_0217c4e8(arg1, var7)) {
            func_02041e70(arg2, 0xf);
        } else {
            func_02041e70(arg2, 3);
        }
        func_02041b70(arg2, var7 - var4, (const char*)*var8);
#else
        int var9 = 3;
        if (func_ov000_0217c4e8(arg1, var7)) {
            var9 = 0xf;
        }
        func_02041e70(arg2, var9);
        __clear(var0, sizeof(var0));
        __clear(var1, sizeof(var1));
        func_020e4864(*var8, var0, 1, 0, 0, 0);
        func_0206819c(var0, var1, 0);
        func_02041b70(arg2, var7 - var4, var0);
#endif
        if (var7 != var5 - 1) {
            func_02042058(arg2, (const char*)func_020e0434((struct Struct_0201099c_3*)arg0->unknown_b8_, 0));
        }
    }
}
