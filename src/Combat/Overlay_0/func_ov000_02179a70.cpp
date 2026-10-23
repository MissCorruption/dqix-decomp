#include <globaldefs.h>

struct Struct_0201099c_3;

extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" int func_02041dd0(char* arg0, int arg1);
#if defined(jpn)
extern "C" void func_0203bdf4(char* arg0, int arg1);
#define func_0203c248 func_0203bdf4
#else
extern "C" void func_0203c248(char* arg0, int arg1);
#endif
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov000_02179a70_3 {
    char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x88 - 0x50];
    char unknown_68_[0x488 - 0x88];
#else
    char unknown1_50_[0x68 - 0x50];
    char unknown_68_[0x448 - 0x68];
#endif
};

extern "C" int func_ov000_02170c7c(struct Struct_ov000_02179a70_3* arg0);

struct Struct_ov000_02179a70 {
    char unknown_0_[0x74];
    signed char unknown_74_[4];
    signed char unknown_78_;
    char unknown_79_[0xb8 - 0x79];
    char unknown_b8_[0x958 - 0xb8];
    struct Struct_ov000_02179a70_3 unknown_958_[1];
};

struct Struct_ov000_02179a70_2 {
    char unknown_0_[0x21];
    signed char unknown_21_;
};

// USA: func_ov000_02179a70
extern "C" ARM void func_ov000_02179a70(struct Struct_ov000_02179a70* arg0, struct Struct_ov000_02179a70_2* arg1, int arg2, char* arg3) {
    if (arg1 == NULL) return;

    signed char var0 = arg1->unknown_21_;
    int var1 = 0;

    if (func_ov000_0217542c(arg0)) {
        func_02041c08(arg3, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg3, var0);

    struct Struct_ov000_02179a70_3* var2;
    for (int var3 = 0; var3 < arg0->unknown_78_; var3++) {
        var2 = &arg0->unknown_958_[arg0->unknown_74_[var3]];
        if (var2->unknown_4c_ >= 0) {
            if (var1 != 0) {
                func_02042058(arg3, (const char*)func_020e0434((struct Struct_0201099c_3*)arg0->unknown_b8_, 0));
            }
            func_02041dd0(arg3, func_ov000_02170c7c(var2));
#if defined(jpn)
            char var4[0x20];
#else
            char var4[0x80];
#endif
            __clear(var4, sizeof(var4));
            func_0203c248(var2->unknown_68_, (int)var4);
            func_02041b70(arg3, var1, var4);
            var1++;
        }
    }
}
