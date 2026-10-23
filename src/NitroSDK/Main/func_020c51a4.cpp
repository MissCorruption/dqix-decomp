#include <globaldefs.h>

#if defined(jpn)
#define func_020c51a4 func_020c6c70
#endif

extern "C" void func_020c6914(int cmd);

// USA: func_020c51a4
extern "C" ARM void func_020c51a4(int arg0) {
    *(int*)0x4000400 = 0x19;
    func_020c6914(arg0);
}
