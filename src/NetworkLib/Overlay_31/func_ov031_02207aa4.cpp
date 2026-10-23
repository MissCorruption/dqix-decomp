#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"
#include "NitroSDK/Timing.h"

struct Struct_ov031_0224e3b8_2 {
	char unknown_0_[0x20];
	char unknown_20_[0x30];
	int unknown_50_;
	int unknown_54_;
	unsigned short unknown_58_;
	unsigned char unknown_5a_;
	char unknown_5b_[0x5c - 0x5b];
};

extern Struct_ov031_0224e3b8_2 data_ov031_0224e3b8[4];

// USA: func_ov031_02207aa4
extern "C" ARM void func_ov031_02207aa4(void* arg0, int arg1, int arg2) {
	int var0;
	int var1;
	Struct_ov031_0224e3b8_2* var2;
	var1 = DisableIRQInterrupts();
	*(unsigned char*)((char*)arg0 + 0x30) = 0;
	var2 = data_ov031_0224e3b8;
	var0 = 0;
	do {
		if (var2->unknown_5a_ != 0 && var2->unknown_54_ == arg1 && var2->unknown_58_ == arg2) {
			VectorizedInvertedMemcpy(var2, (char*)arg0 + 0x74, 0x20);
			VectorizedInvertedMemcpy(var2->unknown_20_, arg0, 0x30);
			var2->unknown_50_ = (int)(GetCurrentTimestamp() >> 16);
			*(unsigned char*)((char*)arg0 + 0x30) = 1;
			break;
		}
		var0++;
		var2++;
	} while (var0 < 4);
	SetIRQInterruptState(var1);
}
