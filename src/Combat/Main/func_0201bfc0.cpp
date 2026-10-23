#include <globaldefs.h>

#if defined(jpn)
enum { FLAG_BYTE_OFFSET = 0x2784 };
#else
enum { FLAG_BYTE_OFFSET = 0x2744 };
#endif

// USA: func_0201bfc0
extern "C" ARM int func_0201bfc0(unsigned char* obj, int bit) {
    return obj[FLAG_BYTE_OFFSET] & (1 << bit);
}
