#include <globaldefs.h>

#include "Resource/UiArrayEntry.h"

extern "C" void func_ov031_022234d8(int arg0, void* arg1);
extern "C" ARM int LoadToSubBG0ScreenData(int arg0, int arg1, unsigned int arg2);
extern "C" int func_ov031_0223c560(int arg0, int arg1);
extern "C" ARM int func_ov031_022236d0(void);
extern "C" void func_ov031_0223c980(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" ARM void func_ov031_0223caec(void* arg0);

extern unsigned char data_ov031_02250bac;
extern int data_ov031_0224b1dc;
extern void* data_ov031_02290c4c;

// USA: func_ov031_0222336c
extern "C" ARM int func_ov031_0222336c(int arg0, int arg1, int arg2) {
	if (data_ov031_02250bac != 0) {
		return 0;
	}
	func_ov031_022234d8((int)&data_ov031_0224b1dc, (void*)LoadToSubBG0ScreenData);
	*(int*)0x4001010 = 0x1920000;
	int var0 = func_ov031_0223c560(1, 0);
	int var1 = func_ov031_022276cc(data_ov031_02290c4c, arg0, arg1, arg2);
	int var2 = func_ov031_022236d0();
	func_ov031_0223c980(var0, 0x14, 0, 0xd8, 0x40, 2, var2, var1);
	func_ov031_0223caec((void*)var0);
	data_ov031_02250bac = 1;
	return 1;
}
