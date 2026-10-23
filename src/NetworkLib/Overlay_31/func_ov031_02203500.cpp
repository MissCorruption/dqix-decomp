#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Interrupts.h"

void CycleCurrentPriorityContexts();

// USA: func_ov031_02203500
extern "C" ARM int func_ov031_02203500(unsigned int* arg0, void* arg1) {
	if (*(unsigned int*)((char*)arg1 + 0x44) == 0 && *(unsigned char*)((char*)arg1 + 8) == 4) {
		int var0 = DisableIRQInterrupts();
		while (*(unsigned int*)((char*)arg1 + 0x44) == 0 && *(unsigned char*)((char*)arg1 + 8) == 4) {
			*(unsigned int*)((char*)arg1 + 4) = 2;
			BlockCurrentContext(NULL);
		}
		SetIRQInterruptState(var0);
	} else {
		CycleCurrentPriorityContexts();
	}
	unsigned int var1 = *(unsigned int*)((char*)arg1 + 0x44);
	*arg0 = var1;
	return var1 != 0 ? *(int*)((char*)arg1 + 0x40) : 0;
}
