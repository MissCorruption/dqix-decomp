#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" ARM void func_ov031_0220b8a0(unsigned int* arg0);
extern "C" ARM void func_ov031_0220b9ac(void* arg0, void* arg1);
extern "C" void func_ov031_0220b8f4(void* arg0, void* arg1, int arg2);
extern unsigned char data_ov031_0224e528[0x14];
extern unsigned char data_ov031_0224e3b0;

// USA: func_ov031_02209e28
extern "C" ARM void func_ov031_02209e28(void* arg0, int arg1) {
    unsigned int var0[0x5c / 4];
    func_ov031_0220b8a0(var0);
    int var1 = DisableIRQInterrupts();
    func_ov031_0220b8f4(var0, data_ov031_0224e528, 0x14);
    func_ov031_0220b8f4(var0, arg0, arg1);
    func_ov031_0220b9ac(var0, data_ov031_0224e528);
    SetIRQInterruptState(var1);
    data_ov031_0224e3b0 = 1;
}
