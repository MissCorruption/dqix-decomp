#include <globaldefs.h>

// USA: func_ov004_0215eb20
extern "C" ARM unsigned short func_ov004_0215eb20(void* arg0, int arg1) {
#if defined(jpn)
    enum { Enum_ov004_0215eb20_336 = 0x144, Enum_ov004_0215eb20_2388 = 0x8bc };
#else
    enum { Enum_ov004_0215eb20_336 = 0x150, Enum_ov004_0215eb20_2388 = 0x954 };
#endif
    void* var0 = *(void**)((char*)arg0 + Enum_ov004_0215eb20_336);
    unsigned short var1 = *(unsigned short*)((char*)var0 + Enum_ov004_0215eb20_2388);
    return (unsigned short)(var1 & (1 << arg1));
}
