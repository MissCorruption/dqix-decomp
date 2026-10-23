#include <globaldefs.h>

// USA: func_ov003_02167240
extern "C" ARM void func_ov003_02167240(void* arg0) {
#if defined(jpn)
    enum { Enum_ov003_02167240_1200 = 0x2d8 };
#else
    enum { Enum_ov003_02167240_1200 = 0x4b0 };
#endif
    *(int*)((char*)arg0 + Enum_ov003_02167240_1200) = 1;
}
