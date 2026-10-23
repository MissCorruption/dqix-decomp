#include <globaldefs.h>
#include "NitroSDK/DMA.h"
#include "NitroSDK/Interrupts.h"

#if defined(jpn)
#define func_020ca2ac func_020cbd78
#endif

extern "C" void func_020ca364(void);

struct Struct_02111684_4 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[8];
    DMACompletionCallback unknown_10_;
    int unknown_14_;
};
extern struct Struct_02111684_4 data_02111684;

// USA: func_020ca2ac
extern "C" ARM void func_020ca2ac(int arg0, unsigned int arg1, unsigned int arg2, DMACompletionCallback arg3, int arg4) {
    if (arg2 == 0) {
        if (arg3 != 0) {
            arg3(arg4);
        }
        return;
    }

    while (*(volatile int*)&data_02111684.unknown_0_ != 0) ;

    *(volatile int*)&data_02111684.unknown_0_ = 1;
    data_02111684.unknown_4_ = arg0;
    data_02111684.unknown_10_ = arg3;
    data_02111684.unknown_14_ = arg4;

    VerifyDMATimingChangePermitted_020c9fd0(arg0, 0x38000000);
    VerifyDMASource(arg0, arg1, arg2, 0);
    AwaitDMACompletion(arg0);
    SetDMACompletionCallback(arg0, (DMACompletionCallback)func_020ca364, 0);
    ConfigureDMATransferAtomic(arg0, arg1, 0x4000400, 0xfc400000 | (arg2 >> 2));
}
