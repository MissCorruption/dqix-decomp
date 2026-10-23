#include <globaldefs.h>

// USA: func_02042b30
extern "C" ARM void func_02042b30(void* arg0, void* arg1) {
#if defined(jpn)
    *(void**)((char*)arg0 + 0x1c4c) = arg1;
#else
    *(void**)((char*)arg0 + 0x1e28) = arg1;
#endif
}
