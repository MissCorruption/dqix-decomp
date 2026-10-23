#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_0217199c_420 = 0x1e4 };
#else
enum { Enum_ov000_0217199c_420 = 0x1a4 };
#endif

// USA: func_ov000_0217199c
extern "C" ARM int func_ov000_0217199c(void* arg0, int arg1) {
    if (arg1 < 0 || arg1 >= 0x93) return 0;
    return *(int*)((char*)arg0 + Enum_ov000_0217199c_420 + (arg1 << 2));
}
