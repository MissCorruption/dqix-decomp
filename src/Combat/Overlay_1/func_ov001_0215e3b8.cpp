#include <globaldefs.h>

extern "C" int func_020421a0();
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov001_0215e3b8
extern "C" ARM int func_ov001_0215e3b8(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_0215e3b8_6580 = 0x17e4 };
#else
    enum { Enum_ov001_0215e3b8_6580 = 0x19b4 };
#endif
    int var0 = func_020421a0();
    if (var0 == 0) return 0;
    unsigned char var1 = *(unsigned char*)(var0 + Enum_ov001_0215e3b8_6580);
    func_ov017_021d6134(arg0, var1);
    return 1;
}
