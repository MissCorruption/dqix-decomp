#include <globaldefs.h>
#include "NitroSDK/DMA.h"
#include "NitroSDK/Interrupts.h"

extern "C" void func_020ca24c(void);

struct Struct_02111684_2 {
    char unknown_0_[4];
    int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};
extern struct Struct_02111684_2 data_02111684;

// USA: func_020ca1a0
extern "C" ARM void func_020ca1a0(void) {
    unsigned int var0;
    unsigned int var1;
    if (data_02111684.unknown_c_ == 0) return;
    var1 = data_02111684.unknown_c_;
    if (var1 >= 0x1d8) var1 = 0x1d8;
    var0 = data_02111684.unknown_8_;
    unsigned int var2 = *(unsigned int*)&data_02111684.unknown_c_ - var1;
    data_02111684.unknown_c_ = var2;
    data_02111684.unknown_8_ = var0 + var1;
    if (var2 == 0) {
        SetDMACompletionCallback(data_02111684.unknown_4_, (DMACompletionCallback)func_020ca24c, 0);
        ConfigureDMATransferAtomic(data_02111684.unknown_4_, var0, 0x04000400, 0xc4400000 | (var1 >> 2));
        AcknowledgeSpecificInterrupts(0x200000);
    } else {
        ConfigureDMATransferAtomic(data_02111684.unknown_4_, var0, 0x04000400, 0x84400000 | (var1 >> 2));
        AcknowledgeSpecificInterrupts(0x200000);
    }
}
