#include <globaldefs.h>

struct Struct_0201099c_14 {
    unsigned char unknown_0_[0x14];
    int unknown_14_;
};

extern "C" void* func_020dfc2c(void* arg0);
extern "C" void func_020dfc40(struct Struct_0201099c_14* arg0);

#if defined(jpn)
extern "C" int func_020e2168(char* arg0, const char* arg1,
    int arg2, int arg3, bool arg4);
extern const char data_020f2b82[];
#else
extern "C" int func_020e04f4(int arg0, void* arg1, int arg2, int arg3, unsigned char arg4, int arg5);

extern const char data_020f2994[];
extern const char data_020f29a8[];
#endif

// JPN: func_020dea34
// USA: func_020dd040
extern "C" ARM void func_020dd040(int arg0, char* arg1) {
    const char* var0;
#if !defined(jpn)
    const char* var1;
#endif
    if (arg0 > 0 && arg1 != NULL) {
        struct Struct_0201099c_14 var2;
#if defined(jpn)
        var0 = data_020f2b82;
#else
        var1 = data_020f2994;
        var0 = data_020f29a8;
#endif
        arg1[0] = 0;
        func_020dfc2c(&var2);
        func_020dfc40(&var2);
    } else {
        return;
    }
#if defined(jpn)
    func_020e2168(arg1, var0, arg0, 0, true);
#else
    func_020e04f4((int)arg1, (void*)var0, arg0, 0, 1, (int)var1);
#endif
}
