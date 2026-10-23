#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int state);
extern "C" int func_020d4f3c(int arg0);
extern "C" void func_ov031_0220da1c(int arg0);
extern "C" void func_ov031_0220dc40(void);
extern int data_ov031_0224e53c;

// USA: func_ov031_0220cce4
extern "C" ARM int func_ov031_0220cce4(void) {
    unsigned int var0 = DisableIRQInterrupts();
    if (data_ov031_0224e53c == 0) {
        SetIRQInterruptState(var0);
        return 1;
    }
    int var1 = *(int*)((char*)data_ov031_0224e53c + 0x2260);
    if (var1 == 1) goto L_ret0;
    if (var1 == 3) goto L_slot;
    if (var1 != 4) goto L_default;
    SetIRQInterruptState(var0);
    return 2;

L_ret0:
    SetIRQInterruptState(var0);
    return 0;

L_default:
    SetIRQInterruptState(var0);
    return 1;

L_slot: {
    int var2 = func_020d4f3c((int)func_ov031_0220dc40);
    switch (var2) {
    case 2:
        func_ov031_0220da1c(4);
        *(unsigned short*)((char*)data_ov031_0224e53c + 0x2280) = 2;
        break;
    case 8:
        SetIRQInterruptState(var0);
        return 4;
    case 3:
    default:
        func_ov031_0220da1c(0xb);
        SetIRQInterruptState(var0);
        return 7;
    }
    SetIRQInterruptState(var0);
    return 3;
}
}
