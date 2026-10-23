#include <globaldefs.h>

extern "C" int func_020d68d0(void* arg0);
extern "C" void func_ov031_022393e4(int arg0);

struct Struct_ov031_02290d18_13 { unsigned char unknown_0_[4]; char* unknown_4_; };
extern struct Struct_ov031_02290d18_13 data_ov031_02290d18;

// USA: func_ov031_02239924
extern "C" ARM int func_ov031_02239924(void) {
	void* var0 = data_ov031_02290d18.unknown_4_ + 0x1e00;
	int var1 = func_020d68d0(var0);
	if (var1 == 2) {
		return 1;
	}
	func_ov031_022393e4(var1);
	return 0;
}
