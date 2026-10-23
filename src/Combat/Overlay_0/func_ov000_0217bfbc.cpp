#include <globaldefs.h>
#include "Input/Input.h"
#if defined(jpn)
enum { Enum_ov000_0217bfbc_1092 = 0x484, Enum_ov000_0217bfbc_2 = 0, Enum_ov000_0217bfbc_1 = 2, Enum_ov000_0217bfbc_0 = 1 };
#else
enum { Enum_ov000_0217bfbc_1092 = 0x444, Enum_ov000_0217bfbc_2 = 2, Enum_ov000_0217bfbc_1 = 1, Enum_ov000_0217bfbc_0 = 0 };
#endif

extern "C" int func_0205d97c(int);
extern "C" void func_ov000_0217629c(void* arg0);
extern "C" void func_ov000_0217ab8c(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02176e3c(int arg0, void* arg1, int arg2, int arg3, int arg4, int arg5);

extern int data_ov000_02184294[3];

// USA: func_ov000_0217bfbc
extern "C" ARM int func_ov000_0217bfbc(void* arg0, int arg1, int arg2) {
    char* var0 = (char*)arg0;
    int var1 = g_keyManager.TestKeysPressed(0x601);
    var1 |= g_keyManager.TestKeysPressed(0x802);
    int var2 = (func_0205d97c(*(int*)(var0 + 0x38)) == 2) ? 1 : 0;
    if ((var1 | var2) != 0) {
        *(unsigned char*)(var0 + Enum_ov000_0217bfbc_1092) = 0;
        func_ov000_0217629c(var0);
        signed char var3 = *(signed char*)(var0 + 0x18);
        *(unsigned char*)(var0 + var3 + 0x10) = 0;
        var3 = *(signed char*)(var0 + 0x18);
        *(unsigned char*)(var0 + 0x18) = var3 - 1;
        func_ov000_0217ab8c(var0, arg1, arg2);
        signed char var4 = *(signed char*)(var0 + 0x18);
        signed char var5 = *(signed char*)(var0 + var4 + 0x10);
        func_ov000_02176e3c(data_ov000_02184294[Enum_ov000_0217bfbc_2], var0, var5, data_ov000_02184294[Enum_ov000_0217bfbc_1], data_ov000_02184294[Enum_ov000_0217bfbc_0], 0);
    }
    return -1;
}
