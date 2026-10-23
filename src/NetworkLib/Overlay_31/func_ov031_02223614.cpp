#include <globaldefs.h>
#include "Resource/UiArrayEntry.h"

extern Struct_ov031_022276b4* data_ov031_02290c4c;
extern unsigned short data_ov031_02248976[];
extern unsigned short data_ov031_02248974[];

extern "C" void* func_ov031_0223c560(int arg0, int arg1);
extern "C" int func_ov031_022236d0(void);
extern "C" void func_ov031_0223c980(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" unsigned char func_ov031_02227548(void);
extern "C" void func_ov031_0223c7e8(void* arg0, int arg1, int arg2, int arg3, int arg4, void* arg5);
extern "C" void func_ov031_0223caec(void* arg0);

// USA: func_ov031_02223614
extern "C" ARM void func_ov031_02223614(void* arg0, unsigned int arg1) {
	void* var0 = func_ov031_0223c560(0, 0);
	int var1 = func_ov031_022276b4(data_ov031_02290c4c, arg1);
	int var2 = func_ov031_022236d0();
	func_ov031_0223c980(var0, 0xd, 0x3c, 0xe6, 0x5e, 2, var2, var1);
	unsigned char var3 = func_ov031_02227548();
	unsigned char var4 = func_ov031_02227548();
	func_ov031_0223c7e8(var0, data_ov031_02248974[var3 * 2], data_ov031_02248976[var4 * 2], 2, 0x209, arg0);
	func_ov031_0223caec(var0);
}
