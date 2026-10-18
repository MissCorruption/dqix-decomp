#include <globaldefs.h>

#if defined(jpn)
#define func_020d1234 func_020d2d00
#endif

int DisableIRQInterrupts();
void DispatchType0x11InitOnce_020d1144(unsigned int context, unsigned int code, unsigned int error);
void SetIRQInterruptState(int);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d1234
extern "C" ARM void func_020d1234(unsigned int id) {
    volatile unsigned long cardID = *(volatile unsigned long*)(*(unsigned short*)0x027ffc10 == 0 ? 0x027ff800 : 0x027ffc00);

    if (id == (unsigned long)cardID) {
        return;
    }
    int priorState = DisableIRQInterrupts();
    DispatchType0x11InitOnce_020d1144(14, 0x11, 0);
    SetIRQInterruptState(priorState);
}
