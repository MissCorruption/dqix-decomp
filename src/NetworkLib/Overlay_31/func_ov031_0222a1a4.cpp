#include <globaldefs.h>

extern int data_ov031_0224b94c;
extern "C" ARM int LoadToMainBG2ScreenData(int, int, unsigned int);
typedef void (*Type_ov031_022234d8)(void*, int, int);
extern "C" ARM void func_ov031_022234d8(int arg0, Type_ov031_022234d8 arg1);

// USA: func_ov031_0222a1a4
extern "C" ARM void func_ov031_0222a1a4(void) {
	func_ov031_022234d8((int)&data_ov031_0224b94c, (Type_ov031_022234d8)LoadToMainBG2ScreenData);
	volatile unsigned short* var0 = (volatile unsigned short*)0x4001008;
	volatile unsigned short* var1 = (volatile unsigned short*)0x400000a;
	var0[0] = (var0[0] & ~3) | 3;
	var0[1] = (var0[1] & ~3) | 3;
	var1[0] = (var1[0] & ~3) | 3;
	var1[1] = (var1[1] & ~3) | 3;
}
