#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void*);

#if defined(jpn)
    enum { Enum_ov001_02160904_1744 = 0x4c0 };
#else
    enum { Enum_ov001_02160904_1744 = 0x6d0 };
#endif
struct Struct_ov001_02160904 { char unknown_0_[0x5a4]; int unknown_5a4_; };
struct Struct_ov001_02160904_2 { char unknown_0_[Enum_ov001_02160904_1744]; Struct_ov001_02160904* unknown_6d0_; };

// USA: func_ov001_02160904
extern "C" ARM int func_ov001_02160904(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    struct Struct_ov001_02160904_2* var1 = (struct Struct_ov001_02160904_2*)((char*)GetGameResources() + 0x3000);
    struct Struct_ov001_02160904* var2 = var1->unknown_6d0_;
    if (var0 != 0) {
        var2->unknown_5a4_ &= ~1;
    } else {
        var2->unknown_5a4_ |= 1;
    }
    return 1;
}
