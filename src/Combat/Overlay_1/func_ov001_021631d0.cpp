#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov001_021631d0
extern "C" ARM int func_ov001_021631d0(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_021631d0_1844 = 0x524, Enum_ov001_021631d0_261 = 0x101 };
#else
    enum { Enum_ov001_021631d0_1844 = 0x734, Enum_ov001_021631d0_261 = 0x105 };
#endif
    unsigned char* var0 = (unsigned char*)GetGameResources();
    unsigned char* var1 = *(unsigned char**)(var0 + 0x3000 + Enum_ov001_021631d0_1844);
    unsigned char var2 = var1[Enum_ov001_021631d0_261];
    var1[Enum_ov001_021631d0_261] = 0;
    func_ov017_021d6134(arg0, var2);
    return 1;
}
