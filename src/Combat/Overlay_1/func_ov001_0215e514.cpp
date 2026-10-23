#include <globaldefs.h>

extern "C" int func_020421a0();

// USA: func_ov001_0215e514
extern "C" ARM int func_ov001_0215e514(void) {
#if defined(jpn)
    enum { Enum_ov001_0215e514_2395 = 0x789 };
#else
    enum { Enum_ov001_0215e514_2395 = 0x95b };
#endif
    int var0 = func_020421a0();
    if (var0 == 0) return 0;
    *(unsigned char*)(var0 + 0x1000 + Enum_ov001_0215e514_2395) |= 0x40;
    return 1;
}
