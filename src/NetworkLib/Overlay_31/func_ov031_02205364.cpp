#include <globaldefs.h>

extern "C" void* func_ov031_02205414(void* arg0);

struct Struct_ov031_02205194;
extern "C" void* func_ov031_02205134(void* arg0, void* arg1, int arg2);
extern "C" int func_ov031_0220529c(Struct_ov031_02205194* arg0, void* arg1);

extern "C" void func_ov031_022053a0(void);

// USA: func_ov031_02205364
extern "C" ARM int func_ov031_02205364(void* arg0) {
	void* var0 = func_ov031_02205414(arg0);
	if (!var0) return -0x31;
	void* var1 = func_ov031_02205134((void*)func_ov031_022053a0, var0, 1);
	func_ov031_0220529c((Struct_ov031_02205194*)var0, var1);
	return (int)var0;
}
