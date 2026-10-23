#include <globaldefs.h>

// USA: func_02042b10
extern "C" ARM void func_02042b10(void* arg0, void* arg1) {
#if defined(jpn)
    *(void**)((char*)arg0 + 0x1c44) = arg1;
#else
    *(void**)((char*)arg0 + 0x1e20) = arg1;
#endif
}
