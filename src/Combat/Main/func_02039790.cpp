#include <globaldefs.h>

// USA: func_02039790
extern "C" ARM int func_02039790(void* arg0, int arg1) {
#if defined(jpn)
    return *(unsigned char*)((char*)arg0 + 0x1c2) & arg1;
#else
    return *(unsigned char*)((char*)arg0 + 0x1ce) & arg1;
#endif
}
