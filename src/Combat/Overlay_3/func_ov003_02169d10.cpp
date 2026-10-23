#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define PANEL_SHIFT 4
extern "C" void func_02042428(char*, int);
#define func_02041d9c func_02042428
#define data_ov003_02180156 data_ov003_0217e8e5
#define data_ov003_02180159 data_ov003_0217e8e8
#else
#define PANEL_SHIFT 0
#endif
struct Struct_0201099c_3;

struct Struct_ov003_02169d10
{
    char unknown_0_[0x64];
    char unknown_64_[0x4ee - PANEL_SHIFT - 0x64];
    signed char unknown_4ee_;
    signed char unknown_4ef_[7];
    char unknown_4f6_[0x5a6 - 0x4f6];
    unsigned char unknown_5a6_;
    unsigned char unknown_5a7_;
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02041a90(char* arg0, int arg1, int arg2);
extern "C" void func_02041e70(char* arg0, int arg1);
extern "C" void func_02042058(char* arg0, const char* arg1);
extern "C" void func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_02041ed8(char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02041f24(char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02041d9c(char* arg0, int arg1);
extern "C" void func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" void func_02041a28(char* arg0, int arg1);
extern "C" const char* func_020e0434(Struct_0201099c_3* arg0, int arg1);

extern "C" const char data_ov003_02180137[];
extern "C" const char data_ov003_02180145[];
extern "C" const char data_ov003_02180156[];
extern "C" const char data_ov003_02180159[];

// USA: func_ov003_02169d10
extern "C" ARM void func_ov003_02169d10(Struct_ov003_02169d10* arg0, char* arg1, int arg2)
{
    if (arg1 == 0)
        return;

    char var0[2];
    __clear(var0, 2);
    int var1 = arg0->unknown_4ee_;
#if !defined(jpn)
    func_02041a90(arg1, var1 * 8 + 0x23, 5);
    if (arg0->unknown_5a6_)
        func_02041e70(arg1, 0xd);
    else
        func_02041e70(arg1, 0xf);
    func_02042058(arg1, data_ov003_02180137);
    func_02041a90(arg1, var1 * 8 + 0x23, 0x1b);
    if (arg0->unknown_5a7_)
        func_02041e70(arg1, 0xd);
    else
        func_02041e70(arg1, 0xf);
    func_02042058(arg1, data_ov003_02180145);
    func_02041e70(arg1, 0xf);
 #endif
    if (arg2)
        func_02041c08(arg1, var1, 3, 0xb, 3, 0xa);
    func_02041ed8(arg1, var1, arg0->unknown_5a6_, 2);
    func_02041f24(arg1, var1, arg0->unknown_5a7_, 2);
    func_02041d9c(arg1, 0xc);
    for (int var2 = 0; var2 < 7; var2++)
    {
        memset(var0, 0, 2);
        sprintf(var0, data_ov003_02180156, arg0->unknown_4ef_[var2]);
#if !defined(jpn)
        func_02041a90(arg1, var2 * 8 + 0x24, 0x10);
#endif
        if (var2 < 4)
            func_02041b70(arg1, var2, var0);
        else
            func_02042058(arg1, data_ov003_02180159);
    }
#if !defined(jpn)
    func_02041a28(arg1, 0x5c);
#endif
    func_02042058(arg1, func_020e0434((Struct_0201099c_3*)arg0->unknown_64_, 0x66));
}
