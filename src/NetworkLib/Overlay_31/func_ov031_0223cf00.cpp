#include <globaldefs.h>
#include "NitroSDK/Memory/HPXEAllocator.h"
#include "NitroSDK/Interrupts.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);
extern HPXEAllocator* data_ov031_02290d3c;

// USA: func_ov031_0223cf00
extern "C" ARM void* func_ov031_0223cf00(unsigned int arg0, int arg1) {
	void* var0;
	unsigned int var1;
	var1 = DisableSpecificInterrupts(1);
	var0 = data_ov031_02290d3c->Allocate(arg0, arg1);
	if (var0 == NULL) {
		func_020c9be0();
	}
	EnableSpecificInterrupts(var1);
	return var0;
}
