#include <globaldefs.h>

// USA: func_ov003_021685cc
extern "C" ARM void func_ov003_021685cc(void* arg0) {
#if defined(jpn)
    *((unsigned char*)arg0 + 0x59b) |= 0x2;
#else
    *((unsigned char*)arg0 + 0x59f) |= 0x2;
#endif
}
