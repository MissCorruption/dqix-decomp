#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

bool IsContextInactive(ProcessorContext* context);
extern void* data_ov031_0224e580;

// USA: func_ov031_0220f558
extern "C" ARM void func_ov031_0220f558(void) {
	volatile unsigned short* var0 = (volatile unsigned short*)0x4000208;
	unsigned short var1 = *var0;
	*var0 = 0;
	AddContextSwitchLock();
	if (!IsContextInactive((ProcessorContext*)((char*)data_ov031_0224e580 + 0x34))) {
		MarkContextReadyAndSwitch((ProcessorContext*)((char*)data_ov031_0224e580 + 0x34));
	}
	RemoveContextSwitchLock();
	(void)*var0;
	*var0 = var1;
}
