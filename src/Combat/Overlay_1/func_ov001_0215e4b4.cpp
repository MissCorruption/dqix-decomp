#include <globaldefs.h>

extern "C" int func_020421a0();
extern "C" int func_ov017_021d60f4(void* arg0);

// USA: func_ov001_0215e4b4
extern "C" ARM int func_ov001_0215e4b4(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_0215e4b4_2395 = 0x789, Enum_ov001_0215e4b4_2472 = 0x878 };
#else
    enum { Enum_ov001_0215e4b4_2395 = 0x95b, Enum_ov001_0215e4b4_2472 = 0x9a8 };
#endif
    char* var0 = (char*)func_020421a0();
    if (var0 == NULL) return 0;
    int var1 = func_ov017_021d60f4(arg0);
    var0 += 0x1000;
    *(unsigned char*)(var0 + Enum_ov001_0215e4b4_2395) |= 0x4;
    *(int*)(var0 - 0x1000 + Enum_ov001_0215e4b4_2472) = var1;
    return 1;
}
