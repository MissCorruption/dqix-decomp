#include <globaldefs.h>

#if defined(jpn)
#define func_020d1234 func_020d2d00
#endif

int DisableIRQInterrupts();
extern "C" void func_020d1144(unsigned int arg0, unsigned int arg1, unsigned int arg2);
void SetIRQInterruptState(int);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d1234
extern "C" ARM void func_020d1234(unsigned int arg0) {
    volatile unsigned long var0 = *(volatile unsigned long*)(*(unsigned short*)0x027ffc10 == 0 ? 0x027ff800 : 0x027ffc00);

    if (arg0 == (unsigned long)var0) {
        return;
    }
    int var1 = DisableIRQInterrupts();
    func_020d1144(14, 0x11, 0);
    SetIRQInterruptState(var1);
}
