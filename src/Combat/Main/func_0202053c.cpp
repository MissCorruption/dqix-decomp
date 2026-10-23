#include <globaldefs.h>

// USA: func_0202053c
extern "C" ARM unsigned short func_0202053c(void* arg0) {
#if defined(jpn)
    char* var0 = *(char**)((char*)arg0 + 0x144);
#else
    char* var0 = *(char**)((char*)arg0 + 0x150);
#endif
#if defined(jpn)
    int var1 = *(int*)(var0 + 0x8b8);
#else
    int var1 = *(int*)(var0 + 0x950);
#endif
    return *(unsigned short*)(var0 + var1 * 2 + 0x16c);
}
