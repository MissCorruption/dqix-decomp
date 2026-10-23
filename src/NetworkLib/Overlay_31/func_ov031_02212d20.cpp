#include <globaldefs.h>

extern "C" void func_ov031_0221c3f8(void *arg0);

// USA: func_ov031_02212d20
extern "C" ARM long long func_ov031_02212d20(void) {
	char var0[0x14];
	func_ov031_0221c3f8(var0);
	return *(long long*)var0;
}
