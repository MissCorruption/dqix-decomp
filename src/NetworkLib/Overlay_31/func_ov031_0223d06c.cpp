#include <globaldefs.h>
#include "NitroSDK/TouchScreen.h"

extern "C" void func_ov031_0223cf70(void** arg0);
extern void* data_ov031_02290d44;

// USA: func_ov031_0223d06c
extern "C" ARM void func_ov031_0223d06c(void) {
	int var0 = 4;
	int var1 = var0;
	do {
		DisableTouchScreen();
		WaitForTouchScreenOperations(var0);
	} while (GetTouchScreenErrors(var1) != 0);
	func_ov031_0223cf70(&data_ov031_02290d44);
}
