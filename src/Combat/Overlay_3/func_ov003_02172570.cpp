#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021b2074(void* arg0, void* arg1);

// USA: func_ov003_02172570
extern "C" ARM int func_ov003_02172570(unsigned char* arg0, void* arg1) {
#if defined(jpn)
    enum { Enum_ov003_02172570_15176 = 0x3928 };
#else
    enum { Enum_ov003_02172570_15176 = 0x3b48 };
#endif
    if (*arg0 != 9) {
        return 0;
    }
    char* var0 = (char*)GetGameResources();
    func_ov017_021b2074(*(void**)(var0 + Enum_ov003_02172570_15176), arg1);
    return 1;
}
