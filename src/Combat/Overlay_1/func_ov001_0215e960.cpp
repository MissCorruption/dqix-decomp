#include <globaldefs.h>
#include <Resource/MessageSystem.h>

extern "C" int func_020421a0();

// USA: func_ov001_0215e960
extern "C" ARM int func_ov001_0215e960(void) {
    ((MessageSystem*)func_020421a0())->b19ca = 0;
    return 1;
}
