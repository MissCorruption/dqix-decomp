#include <globaldefs.h>

#if defined(jpn)
extern "C" void func_0206f230(int, int, int, int, void*, int);
#else
extern "C" void func_0206f230(int, int, int, int, void*, int, int, int);
#endif

// USA: func_0206f200
extern "C" ARM void func_0206f200(int arg0, int arg1, int arg2, int arg3, int arg4) {
#if defined(jpn)
    func_0206f230(arg0, arg1, arg2, arg3, &arg4, 1);
#else
    func_0206f230(arg0, arg1, arg2, arg3, &arg4, 1, 0, 0);
#endif
}
