#include <globaldefs.h>

#if defined(jpn)
#define func_020ca8e8 func_020cc3b4
#endif

void VerifyDMATimingChangePermitted_020c9fd0(int a, unsigned int b);
void VerifyDMASource(int channel, unsigned int source, unsigned int length, unsigned int sourceCtrlFlags);
void ConfigureDMATransferAtomic(int channel, unsigned int src, unsigned int dst, unsigned int ctrl);

// USA: func_020ca8e8
extern "C" ARM void func_020ca8e8(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
    VerifyDMATimingChangePermitted_020c9fd0(arg0, -1);
    VerifyDMASource(arg0, arg1, arg3, 0x1000000);
    if (arg3 == 0) return;
    volatile unsigned int* var0 = (volatile unsigned int*)(0x040000b0 + (arg0 * 3 + 2) * 4);
    while (*var0 & 0x80000000) {}
    ConfigureDMATransferAtomic(arg0, arg1, arg2, 0xaf000001);
}
