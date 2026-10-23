#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Interrupts.h"

// USA: func_ov031_022034ac
extern "C" ARM int func_ov031_022034ac(unsigned int* arg0, void* arg1) {
	unsigned int var0;
	int var1;
	var1 = DisableIRQInterrupts();
	var0 = *(unsigned int*)((char*)arg1 + 0x44);
	if (var0 == 0) {
		do {
			*(unsigned int*)((char*)arg1 + 4) = 3;
			BlockCurrentContext(NULL);
			var0 = *(unsigned int*)((char*)arg1 + 0x44);
		} while (var0 == 0);
	}
	SetIRQInterruptState(var1);
	*arg0 = var0;
	return *(int*)((char*)arg1 + 0x40);
}
