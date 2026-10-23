#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov028_021d8c20(int);
extern "C" void func_020a1f4c(int arg0);

// USA: func_ov001_02161a60
extern "C" ARM int func_ov001_02161a60(void) {
#if defined(jpn)
    enum { Enum_ov001_02161a60_1844 = 0x524, Enum_ov001_02161a60_352 = 0x15c };
#else
    enum { Enum_ov001_02161a60_1844 = 0x734, Enum_ov001_02161a60_352 = 0x160 };
#endif
    char* var0 = *(char**)((char*)GetGameResources() + 0x3000 + Enum_ov001_02161a60_1844);
    int var1 = *(int*)(var0 + Enum_ov001_02161a60_352);
    func_ov028_021d8c20(var1);
    *(int*)(var0 + Enum_ov001_02161a60_352) = 0;
    func_020a1f4c(1);
    return 1;
}
