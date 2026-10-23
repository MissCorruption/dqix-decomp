#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void* arg0);

// USA: func_ov001_021631a4
extern "C" ARM int func_ov001_021631a4(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_021631a4_1844 = 0x524, Enum_ov001_021631a4_132 = 0x80 };
#else
    enum { Enum_ov001_021631a4_1844 = 0x734, Enum_ov001_021631a4_132 = 0x84 };
#endif
    char* var0 = (char*)GetGameResources();
    char* var1 = *(char**)(var0 + 0x3000 + Enum_ov001_021631a4_1844);
    int var2 = func_ov017_021d60f4(arg0);
    *(short*)(var1 + 0x100 + Enum_ov001_021631a4_132) = (short)var2;
    return 1;
}
