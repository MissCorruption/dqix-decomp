#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "Memory/SafeAllocator.h"

extern SafeAllocator data_ov031_02291e3c;

// USA: func_ov031_022434b4
extern "C" ARM void* func_ov031_022434b4(int arg0, unsigned int arg1) {
	int var0 = DisableIRQInterrupts();
	void* var1 = data_ov031_02291e3c.Allocate(arg1);
	SetIRQInterruptState(var0);
	return var1;
}
