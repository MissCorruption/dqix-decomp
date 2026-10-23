#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

bool IsContextInactive(ProcessorContext* context);
extern void* data_ov031_0224e588;

// USA: func_ov031_02210618
extern "C" ARM void func_ov031_02210618(void) {
	volatile unsigned short* var0 = (volatile unsigned short*)0x4000208;
	unsigned short var1 = *var0;
	*var0 = 0;
	AddContextSwitchLock();
	if (!IsContextInactive((ProcessorContext*)((char*)data_ov031_0224e588 + 0xa10))) {
		MarkContextReadyAndSwitch((ProcessorContext*)((char*)data_ov031_0224e588 + 0xa10));
	}
	RemoveContextSwitchLock();
	(void)*var0;
	*var0 = var1;
}
