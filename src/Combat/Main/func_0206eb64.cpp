#include <globaldefs.h>

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);

// USA: func_0206eb64
extern "C" ARM void func_0206eb64(unsigned char* arg0, int arg1, int arg2) {
    if (arg1 >= 0x400) {
        func_0206df6c(arg0, arg0 + 0x8c, arg1 + 0x6fa, arg2);
        return;
    }
    func_0206df6c(arg0, arg0 + 0x8c, arg1, arg2);
}
