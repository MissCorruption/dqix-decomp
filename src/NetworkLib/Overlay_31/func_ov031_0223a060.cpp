#include <globaldefs.h>

extern "C" void func_ov031_02239368(int arg0);
extern "C" ARM void func_ov031_022393e4(int arg0);
extern "C" ARM int func_ov031_0223a0ac(short* arg0);
extern "C" int func_020d4f7c(int arg0, int arg1, int arg2);

struct Struct_ov031_02290d18_22 { void* unknown_0_; void* unknown_4_; };
extern struct Struct_ov031_02290d18_22 data_ov031_02290d18;

// USA: func_ov031_0223a060
extern "C" ARM int func_ov031_0223a060(void) {
	func_ov031_02239368(3);
	int var0 = func_020d4f7c((int)((char*)data_ov031_02290d18.unknown_4_ + 0x80), (int)func_ov031_0223a0ac, 2);
	if (var0 == 2) {
		return 1;
	}
	func_ov031_022393e4(var0);
	func_ov031_02239368(0xa);
	return 0;
}
