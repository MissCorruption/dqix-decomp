#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov023_021fb22c_60 = 0x3a };
#else
enum { Enum_ov023_021fb22c_60 = 0x3c };
#endif

// USA: func_ov023_021fb22c
extern "C" ARM void func_ov023_021fb22c(void* arg0, unsigned short arg1) {
    *(unsigned short*)((char*)arg0 + Enum_ov023_021fb22c_60) = arg1;
}
