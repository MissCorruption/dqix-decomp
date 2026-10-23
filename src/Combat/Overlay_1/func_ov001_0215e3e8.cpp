#include <globaldefs.h>

extern "C" int func_020421a0();
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov001_0215e3e8
extern "C" ARM int func_ov001_0215e3e8(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_0215e3e8_2464 = 0x870 };
#else
    enum { Enum_ov001_0215e3e8_2464 = 0x9a0 };
#endif
    int var0 = func_020421a0();
    if (var0 == 0) return 0;
    int var1 = *(int*)(var0 + Enum_ov001_0215e3e8_2464);
    func_ov017_021d6134(arg0, var1);
    return 1;
}
