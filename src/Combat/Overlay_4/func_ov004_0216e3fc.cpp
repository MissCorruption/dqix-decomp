#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);

// USA: func_ov004_0216e3fc
extern "C" ARM int func_ov004_0216e3fc(void) {
    func_020466e4((unsigned int*)func_020d6c00(), 0x80);
    return 0;
}
