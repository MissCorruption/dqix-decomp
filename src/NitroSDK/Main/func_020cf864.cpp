#include <globaldefs.h>

// USA: func_020cf864
extern volatile int data_02111824;

extern "C" ARM asm void func_020cf864(void) {
    ldr r12, =data_02111824
loop:
    ldr r0, [r12, #0]
    cmp r0, #1
    beq loop
    bx lr
}
