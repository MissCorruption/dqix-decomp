#include <globaldefs.h>
#include "NitroSDK/TouchScreen.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void* func_ov031_0223cf4c(unsigned int len, int align);
extern "C" void func_020c9be0(void);
extern "C" void func_ov031_0223d0a4();

struct Outer_0223cff0 { unsigned char pad0[4]; void* inner; };
extern struct Outer_0223cff0 data_ov031_02290d40;

// USA: func_ov031_0223cff0
extern "C" ARM void func_ov031_0223cff0(void) {
	data_ov031_02290d40.inner = func_ov031_0223cf4c(0x3a, 4);

	TouchScreenCalibration calibration;
	if (GetTouchScreenCalibration(&calibration) == 0) {
		func_020c9be0();
	}
	SaveTouchScreenCalibration(&calibration);

	EnableTouchScreen(0, 4, (TouchScreenSample*)data_ov031_02290d40.inner, 5);
	WaitForTouchScreenOperations(2);
	if (GetTouchScreenErrors(2) != 0) {
		func_020c9be0();
	}
	func_ov031_0223d0a4();
}
