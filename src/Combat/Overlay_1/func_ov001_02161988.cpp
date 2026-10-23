#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" int func_ov017_021d60f4(void* arg0);

// USA: func_ov001_02161988
extern "C" ARM int func_ov001_02161988(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_02161988_261 = 0x125 };
#else
    enum { Enum_ov001_02161988_261 = 0x105 };
#endif
    unsigned char* var0 = (unsigned char*)func_02012fe4();
    int var1 = func_ov017_021d60f4(arg0);
    if (var1 != 0)
        var0[Enum_ov001_02161988_261] &= ~1;
    else
        var0[Enum_ov001_02161988_261] |= 1;
    return 1;
}
