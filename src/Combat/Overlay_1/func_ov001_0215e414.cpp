#include <globaldefs.h>

extern "C" int func_020421a0();
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov001_0215e414
extern "C" ARM int func_ov001_0215e414(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_0215e414_36 = 0x24 };
#else
    enum { Enum_ov001_0215e414_88 = 0x58 };
#endif
    int var0 = func_020421a0();
    if (var0 == 0) return 0;
#if defined(jpn)
    unsigned short var1 = **(unsigned short**)(var0 + Enum_ov001_0215e414_36);
#else
    unsigned char var1 = **(unsigned char**)(var0 + Enum_ov001_0215e414_88);
#endif
    func_ov017_021d6134(arg0, var1);
    return 1;
}
