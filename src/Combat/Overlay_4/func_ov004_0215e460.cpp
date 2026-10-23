#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021bdbcc(void);

// USA: func_ov004_0215e460
extern "C" ARM int func_ov004_0215e460(void) {
    GetGameResources();
    return func_ov017_021bdbcc() != 0;
}
