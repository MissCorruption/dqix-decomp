#include <globaldefs.h>

#if defined(jpn)
#define func_020c9a88 func_020cb554
#endif

unsigned int DisableIRQInterrupts(void);
void SetIRQInterruptState(int state);
extern "C" unsigned int func_020c9a4c(unsigned int arg0);

extern int data_0211166c;
extern unsigned short data_02111670[9];

// USA: func_020c9a88
extern "C" ARM void func_020c9a88(int arg0, int arg1) {
    unsigned int var0;
    unsigned int var1 = DisableIRQInterrupts();
    var0 = arg0 & data_0211166c & 0x1ff;
    for (;;) {
        int var2 = 0x1f - func_020c9a4c(var0);
        if (var2 < 0) break;
        unsigned int var3 = 1 << var2;
        unsigned short var4 = data_02111670[var2];
        var0 &= ~var3;
        if (arg1 != var4) continue;
        data_02111670[var2] = 0;
        data_0211166c &= ~var3;
    }
    SetIRQInterruptState(var1);
}
