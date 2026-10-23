#include <globaldefs.h>

#if defined(jpn)
#define func_0205b008 func_0205c3a4
#endif

extern "C" int func_0205b008(int arg0, void* arg1, int arg2, int arg3, int arg4, int arg5);

// USA: func_0205af84
extern "C" ARM void func_0205af84(int arg0, void* arg1, int arg2) {
    func_0205b008(arg0, arg1, 2, 0xc00, 0xa, (unsigned short)(arg2 & 0x3));
}
