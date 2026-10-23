#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern void* data_ov031_0224e5d8;

extern "C" int func_ov031_02215fcc(void);
extern "C" void func_020d1ba0(unsigned short* arg0, unsigned short arg1);
extern "C" int func_020d4f8c(int arg0, int arg1, int arg2, int arg3);

// USA: func_ov031_02215fd8
extern "C" ARM int func_ov031_02215fd8(void* arg0, int arg1, int arg2, int arg3) {
	if (arg1 == 0) return -1;
	data_ov031_0224e5d8 = arg0;
	int var0 = func_ov031_02215fcc();
	VectorizedMemset(data_ov031_0224e5d8, 0, var0);
	*(int*)((char*)data_ov031_0224e5d8 + 0x1000 + 0xa90) = 0;
	*(unsigned short*)((char*)data_ov031_0224e5d8 + 0x1a00 + 0x94) = 0;
	func_020d1ba0((unsigned short*)((char*)data_ov031_0224e5d8 + 0x1a00 + 0x96), 0xa001);
	int var1 = func_020d4f8c((int)data_ov031_0224e5d8, arg1, arg2, arg3);
	return (var1 == 2) ? 0 : var1;
}
