#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov023_021fb234_60 = 0x3a };
#else
enum { Enum_ov023_021fb234_60 = 0x3c };
#endif

// USA: func_ov023_021fb234
extern "C" ARM unsigned short func_ov023_021fb234(void* arg0) {
    return *(unsigned short*)((char*)arg0 + Enum_ov023_021fb234_60);
}
