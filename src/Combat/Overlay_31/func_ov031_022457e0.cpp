#include <globaldefs.h>
#include "NitroSDK/NetworkIdentity.h"

extern "C" int func_ov031_0221156c(void* arg0);
extern "C" int func_ov031_022115d0(void* arg0);
extern "C" void func_020d1b28(unsigned char* arg0, unsigned int arg1);
extern "C" unsigned char func_020d1ca0(const unsigned char* arg0, const unsigned char* arg1, unsigned int arg2);

// USA: func_ov031_022457e0
// KEEP-NAME: func_ov031_022457e0
extern "C" ARM unsigned long long func_ov031_022457e0(int arg0, Struct_ov031_02291e68 arg1) {
	if (!func_ov031_0221156c(&arg1)) return 0;
	int var0 = func_ov031_022115d0(&arg1);
	unsigned char var1[256];
	struct Struct_ov031_022457e0 { int unknown_0_; unsigned int unknown_4_; } var2;
	var2.unknown_0_ = var0;
	var2.unknown_4_ = 0x5944514a;
	func_020d1b28(var1, 7);
	unsigned char var3 = func_020d1ca0(var1, (unsigned char*)&var2, 8);
	return ((unsigned long long)(var3 & 0x7f) << 32) | (unsigned int)var0;
}
