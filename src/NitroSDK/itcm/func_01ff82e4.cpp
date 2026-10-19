#include <globaldefs.h>

// USA: func_01ff82e4
extern "C" ARM asm void func_01ff82e4(register unsigned int data, register void* destp, register unsigned int size)
{
    add ip, r1, r2
_loop:
    cmp r1, ip
    blt _store
    b _next
_store:
    stmia r1!, {r0}
_next:
    blt _loop
    bx lr
}
