#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov023_021fb24c_66 = 0x40 };
#else
enum { Enum_ov023_021fb24c_66 = 0x42 };
#endif

// USA: func_ov023_021fb24c
extern "C" ARM void func_ov023_021fb24c(void* arg0, unsigned short arg1) {
    *(unsigned short*)((char*)arg0 + Enum_ov023_021fb24c_66) = arg1;
}
