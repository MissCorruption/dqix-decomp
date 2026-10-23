#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" int func_0205ec34(int);
extern "C" void func_0209645c(int, int);
extern "C" void func_02095ff0(int, int);
extern "C" void func_0206e100(int arg0, int arg1);

// USA: func_02095cfc
extern "C" ARM void func_02095cfc(int arg0, int arg1) {
    func_0206e100(func_0205ec34(arg0), arg1);
    func_0209645c(arg0, arg1);
    func_02095ff0(arg0, arg1);
}
