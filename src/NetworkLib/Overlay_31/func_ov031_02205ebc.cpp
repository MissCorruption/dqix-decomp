#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" void func_ov031_02203670(void*);

// USA: func_ov031_02205ebc
extern "C" ARM void* func_ov031_02205ebc(void* arg0) {
	void* var0 = *(void**)((char*)arg0 + 0x64);
	int var1 = DisableIRQInterrupts();
	void* var2 = *(void**)((char*)var0 + 0xf8);
	if (var2 != NULL) {
		*(void**)((char*)var0 + 0xf8) = NULL;
		func_ov031_02203670(var2);
	}
	SetIRQInterruptState(var1);
	return var2;
}
