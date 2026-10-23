#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"
#include "NitroSDK/Timing.h"

struct Struct_ov031_0224e3b8_3 {
	char unknown_0_[0x20];
	char unknown_20_[0x30];
	int unknown_50_;
	int unknown_54_;
	unsigned short unknown_58_;
	unsigned char unknown_5a_;
	char unknown_5b_[0x5c - 0x5b];
};

extern Struct_ov031_0224e3b8_3 data_ov031_0224e3b8[4];

// USA: func_ov031_02207b44
extern "C" ARM void func_ov031_02207b44(void* arg0, int arg1, int arg2) {
	int var0;
	Struct_ov031_0224e3b8_3* var1;
	unsigned int var2;
	int var3;
	unsigned int var4;
	Struct_ov031_0224e3b8_3* var5;
	var3 = DisableIRQInterrupts();
	var4 = (unsigned int)(GetCurrentTimestamp() >> 16);
	var1 = data_ov031_0224e3b8;
	var2 = 0;
	var0 = 0;
	var5 = var1;
	do {
		if (var5->unknown_5a_ != 0 && arg1 != 0 && arg1 == var5->unknown_54_ && arg2 != 0 && arg2 == var5->unknown_58_) {
			var1 = var5;
			break;
		}
		if (var2 != 0xffffffffu) {
			if (var5->unknown_5a_ == 0) {
				var2 = 0xffffffffu;
				var1 = var5;
			} else {
				unsigned int var6 = var4 - (unsigned int)var5->unknown_50_;
				if (var6 > var2) {
					var2 = var6;
					var1 = var5;
				}
			}
		}
		var0++;
		var5++;
	} while (var0 < 4);
	VectorizedInvertedMemcpy((char*)arg0 + 0x74, var1, 0x20);
	VectorizedInvertedMemcpy(arg0, (char*)var1 + 0x20, 0x30);
	var1->unknown_50_ = (int)var4;
	var1->unknown_5a_ = 1;
	var1->unknown_54_ = arg1;
	var1->unknown_58_ = arg2;
	SetIRQInterruptState(var3);
}
