#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern void* data_ov027_021e33ec;

// USA: func_ov027_021d8a40
extern "C" ARM void func_ov027_021d8a40(void* arg0) {
	int var0 = DisableIRQInterrupts();
	*(void**)((char*)data_ov027_021e33ec + 0x1000 + 0x4e4) = arg0;
	SetIRQInterruptState(var0);
}
