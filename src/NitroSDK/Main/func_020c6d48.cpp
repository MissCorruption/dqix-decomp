#include <globaldefs.h>
#include <NitroSDK/DTCM.h>

extern "C" void SDK_IRQ_STACKSIZE();

// USA: func_020c6d48
extern "C" ARM void func_020c6d48()
{
    *(unsigned int*)((unsigned long)&data_027e0000 + 0x3f80 - sizeof(unsigned int)) = STACK_BOTTOM_MAGIC;
    *(unsigned int*)((unsigned long)&data_027e0000 + 0x3f80 - (long)SDK_IRQ_STACKSIZE) = STACK_TOP_MAGIC;
}
