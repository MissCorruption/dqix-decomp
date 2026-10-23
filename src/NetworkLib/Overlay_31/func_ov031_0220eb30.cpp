#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" int func_ov031_0220d60c(void);

struct Struct_ov031_0220eb30 { char unknown_0_[0x270]; int* unknown_270_; unsigned int unknown_274_; };

// USA: func_ov031_0220eb30
extern "C" ARM int func_ov031_0220eb30(void) {
	int var0 = DisableIRQInterrupts();
	int var1 = func_ov031_0220d60c();
	int var2 = 0;
	if (var1 == 0) {
		SetIRQInterruptState(var0);
		return var2;
	}
	struct Struct_ov031_0220eb30* var3 = (struct Struct_ov031_0220eb30*)(var1 + 0x2000);
	if (var3->unknown_270_ != NULL) {
		if (var3->unknown_274_ > 0xc) {
			var2 = *var3->unknown_270_;
		}
	}
	SetIRQInterruptState(var0);
	return var2;
}
