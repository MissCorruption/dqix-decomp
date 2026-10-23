#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02160f60_668 = 0x218, Enum_ov000_02160f60_1496 = 0x7c8 };
#else
enum { Enum_ov000_02160f60_668 = 0x29c, Enum_ov000_02160f60_1496 = 0x5d8 };
#endif

// USA: func_ov000_02160f60
extern "C" ARM void* func_ov000_02160f60(void* arg0) {
    int var0 = *(int*)((char*)arg0 + 0x5000 + Enum_ov000_02160f60_1496);
    if (var0 == 0) return 0;
    void* var1 = *(void**)((char*)arg0 + Enum_ov000_02160f60_668);
    return var1 ? (char*)var1 + 0x21c + 0x8000 + (var0 - 1) * 0x28 : 0;
}
