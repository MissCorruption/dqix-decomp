#include <globaldefs.h>

extern "C" unsigned int* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);

// USA: func_020dc2bc
extern "C" ARM void func_020dc2bc(void) {
    func_020466e4(func_020d6c00(), 0x40);
}
