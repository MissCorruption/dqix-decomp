#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_021815c8_7531 = 0x1fa3 };
#else
enum { Enum_ov000_021815c8_7531 = 0x1d6b };
#endif

// USA: func_ov000_021815c8
extern "C" ARM int func_ov000_021815c8(void* arg0) {
    signed char var0 = *((signed char*)arg0 + Enum_ov000_021815c8_7531);
    if (var0 < 0) return -1;
    return *((signed char*)arg0 + var0 + 0x70);
}
