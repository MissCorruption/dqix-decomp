#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021bbc04(int arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov001_02163164
extern "C" ARM int func_ov001_02163164(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_02163164_1844 = 0x524 };
#else
    enum { Enum_ov001_02163164_1844 = 0x734 };
#endif
    void* var0 = GetGameResources();
    int var1 = *(int*)((char*)var0 + 0x3000 + Enum_ov001_02163164_1844);
    int var2 = func_ov017_021bbc04(var1);
    if (var2 != 0) {
        func_ov017_021d6134(arg0, 1);
    } else {
        func_ov017_021d6134(arg0, 0);
    }
    return 1;
}
