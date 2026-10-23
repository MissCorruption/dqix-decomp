#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_0217f62c_7538 = 0x1faa };
#else
enum { Enum_ov000_0217f62c_7538 = 0x1d72 };
#endif

extern "C" int func_ov000_0217f6bc(void* arg0);
extern "C" void* func_ov000_02161318(void* arg0, int arg1);
struct Struct_ov000_02170fd0;
extern "C" void func_ov000_02170fd0(struct Struct_ov000_02170fd0* arg0, int arg1);
extern "C" void func_ov000_02175258(void* arg0);
extern "C" void func_ov000_0217a8f4(void* arg0);

// USA: func_ov000_0217f62c
extern "C" ARM int func_ov000_0217f62c(void* arg0) {
    char* var0 = (char*)arg0;
    int var1 = func_ov000_0217f6bc(var0);
    int var2 = (var1 >= 0 && var1 <= 3) ? 1 : 0;
    if (var2) {
        struct Struct_ov000_02170fd0* var3 = (struct Struct_ov000_02170fd0*)func_ov000_02161318(var0, var1);
        if (var3 != 0) {
            *(int*)(var0 + 0x17c) = *(int*)((char*)var3 + 0x4c);
            func_ov000_02170fd0(var3, 0);
            *(int*)(var0 + 0x910) = 0;
            *(int*)(var0 + 0x914) = 0;
            *(int*)(var0 + 0x918) = 0;
            *(int*)(var0 + 0x91c) = 0;
            unsigned short var4 = *(unsigned short*)(var0 + Enum_ov000_0217f62c_7538);
            var4 = var4 & ~0x38;
            *(unsigned short*)(var0 + Enum_ov000_0217f62c_7538) = var4;
            func_ov000_02175258(var0);
            func_ov000_0217a8f4(var0);
            return 0;
        }
    }
    return 1;
}
