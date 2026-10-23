#include <globaldefs.h>

extern "C" int func_020421a0(void);

// USA: func_ov004_02165af4
extern "C" ARM int func_ov004_02165af4(void) {
#if defined(jpn)
    enum { Enum_ov004_02165af4_2482 = 0x7e2, Enum_ov004_02165af4_2460 = 0x86c };
#else
    enum { Enum_ov004_02165af4_2482 = 0x9b2, Enum_ov004_02165af4_2460 = 0x99c };
#endif
    int var0 = func_020421a0();
    *(unsigned char*)(var0 + 0x1000 + Enum_ov004_02165af4_2482) = 1;
    *(int*)(var0 + Enum_ov004_02165af4_2460) = 1;
    return 0;
}
