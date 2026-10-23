#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_ov031_02208e54(void* arg0, const void* arg1, void* arg2);
extern int data_ov031_02249748;
extern int data_ov031_0224974c;
extern int data_ov031_02249750;

// USA: func_ov031_02208ef0
extern "C" ARM void func_ov031_02208ef0(void* arg0) {
	unsigned char var0[0x30];
	func_ov031_02208e54(var0, &data_ov031_02249748, arg0);
	func_ov031_02208e54(var0 + 0x10, &data_ov031_0224974c, arg0);
	func_ov031_02208e54(var0 + 0x20, &data_ov031_02249750, arg0);
	VectorizedInvertedMemcpy(var0, arg0, 0x30);
}
