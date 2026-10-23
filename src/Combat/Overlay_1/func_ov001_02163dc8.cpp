#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_02012fe4(void);
extern "C" void func_02017c58(void*);

// USA: func_ov001_02163dc8
extern "C" ARM int func_ov001_02163dc8(void) {
#if defined(jpn)
    enum { Enum_ov001_02163dc8_2908 = 0x93c };
#else
    enum { Enum_ov001_02163dc8_2908 = 0xb5c };
#endif
    func_02017c58(func_02012fe4());
    char* var0 = *(char**)(((char*)GetGameResources() + 0x3000) + Enum_ov001_02163dc8_2908);
    var0[8] = 1;
    return 1;
}
