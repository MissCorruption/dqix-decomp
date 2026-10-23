#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d612c(void* arg0);
extern char data_ov001_02165745;

// USA: func_ov001_021613d0
extern "C" ARM int func_ov001_021613d0(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_021613d0_1844 = 0x524, Enum_ov001_021613d0_216 = 0xd4 };
#else
    enum { Enum_ov001_021613d0_1844 = 0x734, Enum_ov001_021613d0_216 = 0xd8 };
#endif
    char* var0 = (char*)GetGameResources();
    char* var1 = *(char**)(var0 + 0x3000 + Enum_ov001_021613d0_1844);
    int var2 = func_ov017_021d612c(arg0);
    sprintf(var1 + Enum_ov001_021613d0_216, &data_ov001_02165745, var2);
    return 1;
}
