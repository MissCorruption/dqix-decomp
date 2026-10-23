#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" void func_01ff8000(void);

struct Struct_ov031_0220f330 {
    BlockedContextList unknown_0_;
    void* unknown_8_;
    int unknown_c_;
};

// USA: func_ov031_0220f330
extern "C" ARM void func_ov031_0220f330(struct Struct_ov031_0220f330* arg0) {
    if (arg0->unknown_8_ != (void*)func_01ff8000) {
        return;
    }
    if (--arg0->unknown_c_ != 0) {
        return;
    }
    arg0->unknown_8_ = NULL;
    UnblockContexts(&arg0->unknown_0_);
}
