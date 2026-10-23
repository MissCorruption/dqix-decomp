#include <globaldefs.h>

#if defined(jpn)
enum { kHalfwordOffset = 0x3a };
#else
enum { kHalfwordOffset = 0x3c };
#endif

// USA: func_ov023_021fb234
extern "C" ARM unsigned short func_ov023_021fb234(void* obj) {
    return *(unsigned short*)((char*)obj + kHalfwordOffset);
}
