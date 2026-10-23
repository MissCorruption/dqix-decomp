#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_ov031_022035e0 {
	unsigned char unknown_0_[0x8];
	unsigned char unknown_8_;
	unsigned char unknown_9_[0x33];
	int unknown_3c_;
	void* unknown_40_;
	int unknown_44_;
};

extern "C" void* memmove(void*, const void*, unsigned int);
extern "C" int func_ov031_02201f84(int, int);

// USA: func_ov031_022035e0
extern "C" ARM void func_ov031_022035e0(int arg0, Struct_ov031_022035e0* arg1) {
	int var0 = DisableIRQInterrupts();
	int var1 = arg1->unknown_44_;
	int var2 = arg1->unknown_3c_;
	int var3 = 0;
	if (var1 == var2) {
		if (arg0 != 0) var3 = 1;
	}
	if ((unsigned int)arg0 >= (unsigned int)var1) {
		arg1->unknown_44_ = 0;
	} else {
		void* var4 = arg1->unknown_40_;
		int var5 = var1 - arg0;
		arg1->unknown_44_ = var5;
		memmove(var4, (char*)var4 + arg0, var5);
	}
	SetIRQInterruptState(var0);
	if (arg1->unknown_8_ == 10) return;
	if (arg1->unknown_8_ == 11) return;
	if (arg1->unknown_44_ != 0 && var3 == 0) return;
	func_ov031_02201f84((int)arg1, 0x1b);
}
