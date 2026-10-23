#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_ov031_0220b028(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void func_ov031_0220afe0(void* arg0);
extern "C" void func_ov031_0220b0e0(void* arg0, void* arg1);
extern unsigned char data_ov031_02249754[];
extern unsigned char data_ov031_0224975c[];

// USA: func_ov031_02209158
extern "C" ARM void func_ov031_02209158(void* arg0, void* arg1, int arg2) {
	unsigned char var0[0x30];
	void* var1 = (char*)arg0 + 0x3a4;
	if ((*(unsigned char*)((char*)arg0 + 0x454) ^ arg2) != 0) {
		func_ov031_0220b028(var1, data_ov031_02249754, 4);
	} else {
		func_ov031_0220b028(var1, data_ov031_0224975c, 4);
	}
	func_ov031_0220b028(var1, arg0, 0x30);
	VectorizedMemset(var0, 0x36, 0x30);
	func_ov031_0220b028(var1, var0, 0x30);
	func_ov031_0220b0e0(var1, arg1);
	func_ov031_0220afe0(var1);
	func_ov031_0220b028(var1, arg0, 0x30);
	VectorizedMemset(var0, 0x5c, 0x30);
	func_ov031_0220b028(var1, var0, 0x30);
	func_ov031_0220b028(var1, arg1, 0x10);
	func_ov031_0220b0e0(var1, arg1);
}
