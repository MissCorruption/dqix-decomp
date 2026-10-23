#include <globaldefs.h>
#include <Resource/MessageSystem.h>

extern "C" int func_020421a0();

// USA: func_ov001_0215e920
extern "C" ARM int func_ov001_0215e920() {
    ((MessageSystem*)func_020421a0())->b19c1 = 1;
    return 1;
}
