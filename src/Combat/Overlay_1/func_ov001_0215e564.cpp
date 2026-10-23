#include <globaldefs.h>

extern "C" int func_020421a0();

// USA: func_ov001_0215e564
extern "C" ARM int func_ov001_0215e564(void) {
#if defined(jpn)
    enum { Enum_ov001_0215e564_2482 = 0x7e2 };
#else
    enum { Enum_ov001_0215e564_2482 = 0x9b2 };
#endif
    int var0 = func_020421a0();
    if (var0 == 0) return 0;
    *(unsigned char*)(var0 + 0x1000 + Enum_ov001_0215e564_2482) = 0;
    return 1;
}
