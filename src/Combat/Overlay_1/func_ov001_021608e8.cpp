#include <globaldefs.h>

extern "C" int func_020421a0();
extern "C" int func_ov017_021d60f4(void*);

// USA: func_ov001_021608e8
extern "C" ARM int func_ov001_021608e8(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_021608e8_2460 = 0x86c };
#else
    enum { Enum_ov001_021608e8_2460 = 0x99c };
#endif
    int var0 = func_ov017_021d60f4(arg0);
    *(int*)(func_020421a0() + Enum_ov001_021608e8_2460) = var0;
    return 1;
}
