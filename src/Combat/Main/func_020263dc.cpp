#include <globaldefs.h>

// USA: func_020263dc
extern "C" ARM void func_020263dc(unsigned char* arg0, void* arg1) {
#if defined(jpn)
    *(void**)(arg0 + 0x6c0) = arg1;
#else
    *(void**)(arg0 + 0x76c) = arg1;
#endif
}
