#include <globaldefs.h>
#include "Resource/MessageSystem.h"

extern "C" int func_020421a0();
extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov001_0215e374
extern "C" ARM int func_ov001_0215e374(void* self) {
    MessageSystem* messages = (MessageSystem*)func_020421a0();
    func_ov017_021d6134(self, messages->b19bd);
    return 1;
}
