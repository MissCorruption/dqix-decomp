#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_020c0328;
extern "C" void func_020c0328(struct Struct_020c0328* arg0);

extern "C" void func_020c0368(struct Struct_020c0328* arg0, const void* arg1, unsigned int arg2);
extern "C" void func_020c0430(void* arg0, struct Struct_020c0328* arg1);

// USA: func_ov031_022158fc
extern "C" ARM void func_ov031_022158fc(void* arg0, void* arg1) {
	char var0[0x58];
	char var1[0x14];
	func_020c0328((struct Struct_020c0328*)var0);
	func_020c0368((struct Struct_020c0328*)var0, arg0, 0x18);
	func_020c0430(var1, (struct Struct_020c0328*)var0);
	VectorizedInvertedMemcpy(var1 + 3, arg1, 0xd);
}
