#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021b2074(void* obj, void* extra);

// USA: func_ov003_02172570
extern "C" ARM int func_ov003_02172570(unsigned char* obj, void* extra) {
#if defined(jpn)
    enum { regionalField = 0x3928 };
#else
    enum { regionalField = 0x3b48 };
#endif
    if (*obj != 9) {
        return 0;
    }
    char* base = (char*)GetGameResources();
    func_ov017_021b2074(*(void**)(base + regionalField), extra);
    return 1;
}
