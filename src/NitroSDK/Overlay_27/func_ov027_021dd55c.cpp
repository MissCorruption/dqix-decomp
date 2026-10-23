#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" int func_ov027_021dd3b0();
extern "C" void func_ov027_021dd3f8(void *arg0, int arg1, int arg2, int arg3);

struct Struct_ov027_021e3420_4 {
	void *unknown_0_;
};

extern struct Struct_ov027_021e3420_4 data_ov027_021e3420;

// USA: func_ov027_021dd55c
extern "C" ARM void func_ov027_021dd55c(int arg0) {
	int var0 = DisableIRQInterrupts();
	int var1 = func_ov027_021dd3b0();
	if (var1 != 0) {
		func_ov027_021dd3f8((char *)data_ov027_021e3420.unknown_0_ + 0xc4, 0, arg0, 0);
	}
	SetIRQInterruptState(var0);
}
