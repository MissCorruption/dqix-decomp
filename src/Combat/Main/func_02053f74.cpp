#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02053f74_432 = 0x1a4 };
#else
enum { Enum_02053f74_432 = 0x1b0 };
#endif

// USA: func_02053f74
extern "C" ARM unsigned char func_02053f74(void* arg0) {
    return *(unsigned char*)((char*)arg0 + Enum_02053f74_432);
}
