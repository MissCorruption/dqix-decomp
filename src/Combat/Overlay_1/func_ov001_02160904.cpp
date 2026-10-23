#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void*);

#if defined(jpn)
    enum { baseOffset = 0x4c0 };
#else
    enum { baseOffset = 0x6d0 };
#endif
struct FieldHolder_02160904 { char pad[0x5a4]; int field5a4; };
struct Base02160904 { char pad[baseOffset]; FieldHolder_02160904* p; };

// USA: func_ov001_02160904
extern "C" ARM int func_ov001_02160904(void* obj) {
    int flag = func_ov017_021d60f4(obj);
    struct Base02160904* base = (struct Base02160904*)((char*)GetGameResources() + 0x3000);
    struct FieldHolder_02160904* h = base->p;
    if (flag != 0) {
        h->field5a4 &= ~1;
    } else {
        h->field5a4 |= 1;
    }
    return 1;
}
