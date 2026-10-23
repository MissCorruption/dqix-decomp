#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021d3d40
extern "C" ARM void func_ov017_021d3d40(const void* arg0, int arg1, int arg2, int arg3, int arg4) {
	void* var0 = func_0202ae24();
	unsigned char var1[0x14];
	unsigned char* var2 = var1 + 4;
	unsigned char var3 = *(unsigned char*)(var2 + 0xd);
	var3 = (var3 & ~0x70) | ((arg3 & 0x7) << 4);
	var1[0] = 0xb9;
	var3 = (var3 & ~0x80) | ((arg2 & 1) << 7);
	var3 = (var3 & ~0xf) | (arg1 & 0xf);
	*(unsigned char*)(var2 + 0xd) = var3;
	*(short*)(var2 + 0xe) = (short)arg4;
	VectorizedInvertedMemcpy(arg0, var2, arg1);
	func_0205e330(var0, var1, 0);
}
