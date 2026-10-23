#include <globaldefs.h>

extern "C" void func_020939ac(void*);

// USA: func_020939fc
extern "C" ARM void func_020939fc(unsigned char* arg0) {
#if defined(jpn)
    arg0[0x139] &= ~1;
#else
    arg0[0x3c9] &= ~1;
#endif
    func_020939ac(arg0);
}
