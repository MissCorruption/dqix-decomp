#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov001_02161a1c
extern "C" ARM int func_ov001_02161a1c(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_02161a1c_1844 = 0x524, Enum_ov001_02161a1c_352 = 0x15c, Enum_ov001_02161a1c_356 = 0x160 };
#else
    enum { Enum_ov001_02161a1c_1844 = 0x734, Enum_ov001_02161a1c_352 = 0x160, Enum_ov001_02161a1c_356 = 0x164 };
#endif
    char* var0 = (char*)GetGameResources() + 0x3000;
    char* var1 = *(char**)(var0 + Enum_ov001_02161a1c_1844);
    int var2 = *(int*)(var1 + Enum_ov001_02161a1c_352);
    if (var2 == 0) {
        func_ov017_021d6134(arg0, 1);
    } else {
        func_ov017_021d6134(arg0, *(unsigned char*)(var1 + Enum_ov001_02161a1c_356));
    }
    return 1;
}
