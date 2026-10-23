#include <globaldefs.h>

extern unsigned short* data_ov031_02290d14;
extern "C" void func_ov031_02239108(unsigned short arg0);
unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);
extern "C" void func_ov031_02238a88(int);
#if defined(jpn)
extern "C" void func_ov027_021dcd5c(void* arg0);
#else
extern "C" void func_ov025_021dcd5c(void* arg0);
#endif

// USA: func_ov031_02238b60
extern "C" ARM void func_ov031_02238b60(void) {
    func_ov031_02239108(3);
    unsigned short var0 = 1;
    do {
        if (!(data_ov031_02290d14[1] & (1 << var0))) goto next;
        if (data_ov031_02290d14[2] & (1 << var0)) goto next;
        if (!(data_ov031_02290d14[3] & (1 << var0))) {
            unsigned short var1 = (unsigned short)~(1 << var0);
            unsigned int var2 = DisableIRQInterrupts();
            data_ov031_02290d14[1] &= var1;
            data_ov031_02290d14[2] &= var1;
            data_ov031_02290d14[3] &= var1;
            data_ov031_02290d14[4] &= var1;
            data_ov031_02290d14[5] &= var1;
            data_ov031_02290d14[6] &= var1;
            SetIRQInterruptState(var2);
#if defined(jpn)
            func_ov027_021dcd5c((void*)(int)var0);
#else
            func_ov025_021dcd5c((void*)(int)var0);
#endif
        } else {
            func_ov031_02238a88(var0);
        }
    next:
        var0++;
    } while (var0 < 0x10);
}
