#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_ov031_02206ce8 { char unknown_0_[0x70]; short unknown_70_; char unknown_72_[0xa]; Struct_ov031_02206ce8* unknown_7c_; };

extern "C" void func_ov031_02206900(void* arg0);
extern void* data_ov031_0224e1cc;
extern Struct_ov031_02206ce8* data_ov031_0224e22c;
extern void* data_ov031_0224e230;

// USA: func_ov031_02206ce8
extern "C" ARM int func_ov031_02206ce8(void* arg0) {
	Struct_ov031_02206ce8* var0;
	for (;;) {
		int var1 = DisableIRQInterrupts();
		var0 = data_ov031_0224e22c;
		if (var0 != 0) {
			void* var2 = data_ov031_0224e1cc;
			for (;;) {
				if (var0 != var2) {
					if ((var0->unknown_70_ & 0x10) == 0) break;
				}
				var0 = var0->unknown_7c_;
				if (var0 == 0) break;
			}
		}
		SetIRQInterruptState(var1);
		if (var0 == 0) break;
		func_ov031_02206900(var0);
	}
	if (data_ov031_0224e22c != 0) {
		if (data_ov031_0224e22c != data_ov031_0224e1cc) goto FAIL;
		if (data_ov031_0224e22c->unknown_7c_ != 0) goto FAIL;
	}
	if (data_ov031_0224e230 != 0) goto FAIL;
	return 0;
FAIL:
	return -26;
}
