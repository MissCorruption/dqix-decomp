#include <globaldefs.h>

extern "C" int func_ov003_0217bdb4(void* arg0);

// USA: func_ov003_02173ef4
extern "C" ARM int func_ov003_02173ef4(void* arg0) {
#if defined(jpn)
    enum { Enum_ov003_02173ef4_480 = 0x1ec };
#else
    enum { Enum_ov003_02173ef4_480 = 0x1e0 };
#endif
    return func_ov003_0217bdb4((char*)arg0 + Enum_ov003_02173ef4_480);
}
