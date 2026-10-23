#include <globaldefs.h>

extern "C" int func_ov031_022134b0(void);
extern "C" int func_ov031_02214334(void);
extern "C" int func_ov031_022151d4(void);
extern "C" int func_ov031_02214a04(void);
extern "C" void func_ov031_02213450(int);
extern "C" int func_ov031_02213c9c(void);
extern "C" int func_ov031_02214928(void);
extern "C" int func_ov031_0221525c(void);
extern "C" int func_ov031_022135f4(void);
extern "C" void func_ov031_022135bc(void);
unsigned int DisableIRQInterrupts(void);
void SetIRQInterruptState(int);

// USA: func_ov031_02212ee8
extern "C" ARM int func_ov031_02212ee8(void) {
	unsigned int var0 = func_ov031_022134b0();
	if (var0 == 1) {
		var0 = func_ov031_022151d4();
	} else if (var0 < 7) {
		unsigned int var1 = DisableIRQInterrupts();
		var0 = func_ov031_02214a04();
		func_ov031_02213450(var0);
		SetIRQInterruptState(var1);
	} else if (var0 < 9) {
		var0 = func_ov031_02213c9c();
	} else if (var0 < 0xa) {
		var0 = func_ov031_02214928();
	} else if (var0 < 0x10) {
		var0 = func_ov031_0221525c();
	} else if (var0 == 0x11) {
		var0 = func_ov031_02214334();
	}
	func_ov031_02213450(var0);
	if (var0 == 0x10) {
		int var2 = func_ov031_022135f4();
		func_ov031_022135bc();
		return var2;
	} else if (var0 != 0x12) {
		return 0;
	} else {
		func_ov031_022135bc();
		return -1;
	}
}
