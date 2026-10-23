#include <globaldefs.h>

// USA: func_ov003_021685c4
extern "C" ARM int func_ov003_021685c4(void* arg0) {
#if defined(jpn)
    return *(int*)((char*)arg0 + 0xdc);
#else
    return *(int*)((char*)arg0 + 0xe0);
#endif
}
