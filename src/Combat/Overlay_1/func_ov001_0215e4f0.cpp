#include <globaldefs.h>

extern "C" int func_020421a0();

// USA: func_ov001_0215e4f0
extern "C" ARM int func_ov001_0215e4f0(void) {
#if defined(jpn)
    enum { Enum_ov001_0215e4f0_2481 = 0x7e1 };
#else
    enum { Enum_ov001_0215e4f0_2481 = 0x9b1 };
#endif
    int var0 = func_020421a0();
    if (var0 == 0) return 0;
    *(unsigned char*)(var0 + 0x1000 + Enum_ov001_0215e4f0_2481) = 0;
    return 1;
}
