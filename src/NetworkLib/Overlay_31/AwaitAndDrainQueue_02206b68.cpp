#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Interrupts.h"

extern "C" int func_020c7ea0(void* arg0, unsigned int* arg1, int arg2);
extern "C" void func_020c7e0c(void* arg0, int arg1, int arg2);
extern "C" void func_ov031_02205174(int arg0);

struct Struct_ov031_02206b68 { char unknown_0_[8]; void* unknown_8_; };

// USA: func_ov031_02206b68
extern "C" ARM void func_ov031_02206b68(char* arg0) {
	if (arg0 == 0) {
		return;
	}
	AwaitContextCompletion((ProcessorContext*)(arg0 + 0x20));
	int var0 = DisableIRQInterrupts();
	AddContextSwitchLock();

	unsigned int var1;
	if (func_020c7ea0(arg0, &var1, 0)) {
		do {
			if (var1 != 0) {
				if (((struct Struct_ov031_02206b68*)var1)->unknown_8_ != 0) {
					func_020c7e0c(((struct Struct_ov031_02206b68*)var1)->unknown_8_, -11, 0);
				}
				func_ov031_02205174((int)var1);
			}
		} while (func_020c7ea0(arg0, &var1, 0));
	}

	RemoveContextSwitchLock();
	SwitchContextUninterrupted();
	SetIRQInterruptState(var0);
}
