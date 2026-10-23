#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Interrupts.h"

// USA: func_ov031_022034ac
extern "C" ARM int func_ov031_022034ac(unsigned int* out, void* obj) {
	unsigned int v;
	int priorState;
	priorState = DisableIRQInterrupts();
	v = *(unsigned int*)((char*)obj + 0x44);
	if (v == 0) {
		do {
			*(unsigned int*)((char*)obj + 4) = 3;
			BlockCurrentContext(NULL);
			v = *(unsigned int*)((char*)obj + 0x44);
		} while (v == 0);
	}
	SetIRQInterruptState(priorState);
	*out = v;
	return *(int*)((char*)obj + 0x40);
}
