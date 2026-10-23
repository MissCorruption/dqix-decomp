#include <globaldefs.h>

// USA: func_02012078
extern "C" ARM int func_02012078(void* arg0) {
#if defined(jpn)
    enum { Enum_02012078_28672 = 0x6000, Enum_02012078_504 = 0xfb8 };
#else
    enum { Enum_02012078_28672 = 0x7000, Enum_02012078_504 = 0x1f8 };
#endif
    return *(int*)((unsigned char*)arg0 + Enum_02012078_28672 + Enum_02012078_504);
}
