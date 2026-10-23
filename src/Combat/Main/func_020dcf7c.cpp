#include <globaldefs.h>

#if defined(jpn)
struct Struct_0201099c_14;
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
extern "C" void* func_020dfc2c(void* arg0);
extern "C" int func_020e2168(char* arg0, const char* arg1,
    int arg2, int arg3, bool arg4);
extern const char data_020f2b6c[];
struct Struct_020dcf7c { unsigned char unknown_0_[0x18]; };
#define func_020dcf7c func_020de968
extern "C" void func_020de968(int arg0, void* arg1);
#else
extern char data_020f296c;
extern char data_020f297e;
extern "C" void func_020e54bc(int, void*, int, int, unsigned char, int);
#endif

// JPN: func_020de968
// USA: func_020dcf7c
extern "C" ARM void func_020dcf7c(int arg0, void* arg1) {
#if defined(jpn)
    const char* var0;
    if (arg0 > 0 && arg1 != NULL) {
        Struct_020dcf7c var1;
        var0 = data_020f2b6c;
        *(char*)arg1 = 0;
        func_020dfc2c(&var1);
        func_020dfc40((Struct_0201099c_14*)&var1);
    } else {
        return;
    }
    func_020e2168((char*)arg1, var0, arg0, 0, true);
#else
    if (arg0 <= 0) return;
    if (arg1 == NULL) return;
    func_020e54bc((int)arg1, &data_020f296c, arg0, 0, 1, (int)&data_020f297e);
#endif
}
