#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02160f20_668 = 0x218, Enum_ov000_02160f20_1804 = 0x8fc, Enum_ov000_02160f20_1496 = 0x7c8 };
#else
enum { Enum_ov000_02160f20_668 = 0x29c, Enum_ov000_02160f20_1804 = 0x70c, Enum_ov000_02160f20_1496 = 0x5d8 };
#endif

// USA: func_ov000_02160f20
extern "C" ARM void* func_ov000_02160f20(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + Enum_ov000_02160f20_668);
    void* var1;
    if (var0 == 0) return 0;
    var1 = *(void**)((char*)arg0 + 0x7000 + Enum_ov000_02160f20_1804);
    if (var1 == 0) {
        int var2 = *(int*)((char*)arg0 + 0x5000 + Enum_ov000_02160f20_1496);
        var1 = (char*)var0 + 0x21c + 0x8000 + var2 * 0x28;
    }
    return var1;
}
