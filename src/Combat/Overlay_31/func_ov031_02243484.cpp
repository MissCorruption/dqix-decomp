#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "Memory/SafeAllocator.h"

extern SafeAllocator data_ov031_02291e3c;

// USA: func_ov031_02243484
extern "C" ARM void func_ov031_02243484(int arg0, void* arg1) {
	if (arg1 == NULL) {
		return;
	}
	int var0 = DisableIRQInterrupts();
	data_ov031_02291e3c.Free(arg1);
	SetIRQInterruptState(var0);
}
