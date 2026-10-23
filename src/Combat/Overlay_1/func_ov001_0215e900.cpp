#include <globaldefs.h>
#include <Resource/MessageSystem.h>

extern "C" int func_020421a0();

// USA: func_ov001_0215e900
extern "C" ARM int func_ov001_0215e900(void) {
    MessageSystem* messages = (MessageSystem*)func_020421a0();
    messages->b19c0 = 1;
    messages->b195d = 30;
    return 1;
}
