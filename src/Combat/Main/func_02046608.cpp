#include <globaldefs.h>

extern "C" void __clear(void*, int);
extern "C" void func_0206831c(void*, int, void*);
extern "C" void func_02068418(void*, void*, int, int);
extern "C" void func_02068f40(void*, int, void*, int);
extern "C" void func_02069234(void*, void*, int, int);
extern "C" void func_020695f4(void*, int, void*, int);
extern "C" void func_0206b974(void*, int, void*, int, int, int, int, int);

// USA: func_02046608
extern "C" ARM void func_02046608(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    char var0[0x960];
    if (arg2 != 0 && arg3 != 0) {
        __clear(var0, 0x960);
        func_0206831c(arg0, arg2, var0);
        func_02068418(arg0, var0, arg3, arg6);
        func_02068f40(arg0, arg3, var0, arg6);
        func_02069234(arg0, var0, arg3, arg6);
        func_020695f4(arg0, arg3, var0, arg6);
        func_0206b974(arg0, 0, var0, arg3, arg4, arg5, 0, arg6);
    }
}
