#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" int func_ov031_0220d60c(void);

// USA: func_ov031_0220f040
extern "C" ARM int func_ov031_0220f040(void) {
	int var0 = 0;
	int var1 = func_ov031_0220d60c();
	unsigned int var2 = DisableIRQInterrupts();
	if (var1 != 0) {
		if (*(int*)((char*)var1 + 0x2260) == 9 && *(unsigned char*)((char*)var1 + 0x226b) == 0) {
			var0 = (int)((char*)var1 + 0x2144);
		}
	}
	SetIRQInterruptState(var2);
	return var0;
}
