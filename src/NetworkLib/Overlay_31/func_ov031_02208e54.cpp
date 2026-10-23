#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

extern "C" void func_ov031_0220b8a0(unsigned int* arg0);
extern "C" void func_ov031_0220b8f4(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void func_ov031_0220b9ac(void* arg0, void* arg1);
extern "C" void func_ov031_0220afe0(void* arg0);
extern "C" void func_ov031_0220b028(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void func_ov031_0220b0e0(void* arg0, void* arg1);

// USA: func_ov031_02208e54
extern "C" ARM void func_ov031_02208e54(void* arg0, const char* arg1, void* arg2) {
    char* var0 = (char*)arg2;
    func_ov031_0220b8a0((unsigned int*)(var0 + 0x348));
    unsigned int var1 = strlen(arg1);
    func_ov031_0220b8f4(var0 + 0x348, arg1, var1);
    func_ov031_0220b8f4(var0 + 0x348, arg2, 0x30);
    func_ov031_0220b8f4(var0 + 0x348, var0 + 0x34, 0x40);
    unsigned char var2[0x14];
    func_ov031_0220b9ac(var0 + 0x348, var2);

    func_ov031_0220afe0(var0 + 0x3fc);
    func_ov031_0220b028(var0 + 0x3fc, arg2, 0x30);
    func_ov031_0220b028(var0 + 0x3fc, var2, 0x14);
    func_ov031_0220b0e0(var0 + 0x3fc, arg0);
}
