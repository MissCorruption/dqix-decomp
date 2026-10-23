#include <globaldefs.h>

// USA: func_02053ec8
extern "C" ARM void func_02053ec8(void* arg0, int arg1) {
#if defined(jpn)
    *(int*)((char*)arg0 + 0x14c) = arg1;
#else
    *(int*)((char*)arg0 + 0x158) = arg1;
#endif
}
