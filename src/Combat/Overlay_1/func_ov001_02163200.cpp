#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov001_02163200
extern "C" ARM int func_ov001_02163200(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_02163200_14132 = 0x3524, Enum_ov001_02163200_263 = 0x103 };
#else
    enum { Enum_ov001_02163200_14132 = 0x3734, Enum_ov001_02163200_263 = 0x107 };
#endif
    char* var0 = (char*)GetGameResources();
    unsigned char var1 = *(unsigned char*)(*(char**)(var0 + Enum_ov001_02163200_14132) + Enum_ov001_02163200_263);
    func_ov017_021d6134(arg0, var1);
    return 1;
}
