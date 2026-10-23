#include <globaldefs.h>

#if defined(jpn)
enum { MEMBER_OFFSET = 0x1a4 };
#else
enum { MEMBER_OFFSET = 0x1b0 };
#endif

// USA: func_02053f74
extern "C" ARM unsigned char func_02053f74(void* obj) {
    return *(unsigned char*)((char*)obj + MEMBER_OFFSET);
}
