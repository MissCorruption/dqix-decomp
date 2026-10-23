#include <globaldefs.h>

#if defined(jpn)
enum { kHalfwordOffset = 0x3a };
#else
enum { kHalfwordOffset = 0x3c };
#endif

// USA: func_ov023_021fb22c
extern "C" ARM void func_ov023_021fb22c(void* obj, unsigned short v) {
    *(unsigned short*)((char*)obj + kHalfwordOffset) = v;
}
