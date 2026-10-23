#include <globaldefs.h>

// USA: func_02012060
extern "C" ARM unsigned char func_02012060(void* arg0) {
#if defined(jpn)
    enum { Enum_02012060_981 = 0x175 };
#else
    enum { Enum_02012060_981 = 0x3d5 };
#endif
    return ((unsigned char*)arg0 + 0x6000)[Enum_02012060_981];
}
