#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" int func_ov027_021d9de8(unsigned int arg0);
extern "C" void VectorizedInvertedMemcpy(const void* src, void* dst, unsigned int len);

extern char* data_ov027_021e33ec;

// USA: func_ov027_021d8a68
extern "C" ARM void* func_ov027_021d8a68(int arg0) {
    int var0 = DisableIRQInterrupts();
    if (data_ov027_021e33ec == 0) goto fail;
    if (!func_ov027_021d9de8(arg0)) goto fail;
    VectorizedInvertedMemcpy(data_ov027_021e33ec + 0x1340 + (arg0 - 1) * 0x16, data_ov027_021e33ec + 0x1772, 0x16);
    SetIRQInterruptState(var0);
    return data_ov027_021e33ec + 0x1772;
fail:
    SetIRQInterruptState(var0);
    return 0;
}
