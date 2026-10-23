#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Cache.h"

extern int data_ov031_0224e53c;

extern "C" void func_ov031_0220d73c(int, int, int);
extern "C" void func_ov031_0220da1c(int);
extern "C" void func_ov031_0220defc(void);

struct Struct_02101680;
extern "C" int func_020d5340(int arg0, struct Struct_02101680* arg1);

// USA: func_ov031_0220cdf4
extern "C" ARM int func_ov031_0220cdf4(int arg0, int arg1, int arg2) {
	int var0 = DisableIRQInterrupts();
	if (data_ov031_0224e53c == 0) {
		SetIRQInterruptState(var0);
		return 1;
	}
	int var1 = *(int*)((char*)data_ov031_0224e53c + 0x2260);
	switch (var1) {
	case 5:
		func_ov031_0220d73c(arg0, arg1, arg2);
		SetIRQInterruptState(var0);
		return 2;
	case 6:
		func_ov031_0220d73c(arg0, arg1, arg2);
		SetIRQInterruptState(var0);
		return 0;
	default:
		SetIRQInterruptState(var0);
		return 1;
	case 3: {
		func_ov031_0220d73c(arg0, arg1, arg2);
		InvalidateDataCacheRange(*(void**)((char*)data_ov031_0224e53c + 0x2288), *(unsigned short*)((char*)data_ov031_0224e53c + 0x228c));
		*(int*)((char*)data_ov031_0224e53c + 0x2284) += 1;
		int var2 = func_020d5340((int)func_ov031_0220defc, (struct Struct_02101680*)((char*)data_ov031_0224e53c + 0x2288));
		switch (var2) {
		case 2:
			func_ov031_0220da1c(5);
			*(unsigned short*)((char*)data_ov031_0224e53c + 0x2280) = 3;
			break;
		case 8:
			SetIRQInterruptState(var0);
			return 4;
		case 3:
		default:
			func_ov031_0220da1c(0xb);
			SetIRQInterruptState(var0);
			return 7;
		}
		SetIRQInterruptState(var0);
		return 3;
	}
	}
}
