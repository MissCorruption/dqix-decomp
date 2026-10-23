#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02160f14_24 = 0x394, Enum_ov000_02160f14_3072 = 0x800 };
#else
enum { Enum_ov000_02160f14_24 = 0x18, Enum_ov000_02160f14_3072 = 0xc00 };
#endif

// USA: func_ov000_02160f14
extern "C" ARM void* func_ov000_02160f14(void* arg0) {
    char* var0 = (char*)arg0 + Enum_ov000_02160f14_24;
    return var0 + Enum_ov000_02160f14_3072;
}
