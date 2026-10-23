#include <globaldefs.h>

struct Struct_0201099c_14;
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
extern "C" void* func_020dfc2c(void* arg0);
#if defined(jpn)
extern "C" int func_020e2168(char* arg0, const char* arg1,
    int arg2, int arg3, bool arg4);
extern const char* data_020f2ca0;
#else
extern "C" int func_020e04f4(int arg0, void* arg1, int arg2, int arg3, unsigned char arg4, int arg5);
extern int data_020f2a3c;
extern int data_020f2a24;
#endif

struct Struct_020dcfc8 { unsigned char unknown_0_[0x18]; };

// JPN: func_020de9cc
// USA: func_020dcfc8
extern "C" ARM void func_020dcfc8(int arg0, char* arg1) {
    if (arg0 > 0 && arg1 != NULL) {
        Struct_020dcfc8 var0;
#if defined(jpn)
        const char* var1;
        arg1[0] = 0;
        var1 = data_020f2ca0;
#else
        int var2, var3;
        arg1[0] = 0;
        var3 = data_020f2a3c;
        var2 = data_020f2a24;
#endif
        func_020dfc2c(&var0);
        func_020dfc40((Struct_0201099c_14*)&var0);
#if defined(jpn)
        func_020e2168(arg1, var1, arg0, 0, true);
#else
        func_020e04f4((int)arg1, (void*)var2, arg0, 0, 1, var3);
#endif
    }
}
