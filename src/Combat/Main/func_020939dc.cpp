#include <globaldefs.h>

extern "C" void func_020938f0(void* arg0);

// USA: func_020939dc
extern "C" ARM void func_020939dc(void* arg0) {
    func_020938f0(arg0);
#if defined(jpn)
    *((unsigned char*)arg0 + 0x139) = (*((unsigned char*)arg0 + 0x139) & ~1) | 1;
#else
    *((unsigned char*)arg0 + 0x3c9) = (*((unsigned char*)arg0 + 0x3c9) & ~1) | 1;
#endif
}
