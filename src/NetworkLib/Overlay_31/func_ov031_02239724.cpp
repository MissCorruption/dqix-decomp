#include <globaldefs.h>

extern "C" void func_ov031_02239368(int arg0);
extern "C" ARM void func_ov031_022393e4(int arg0);
extern "C" ARM int func_020d5898(int arg0, int arg1, int arg2, int arg3, unsigned short arg4, unsigned short arg5);
extern "C" void func_ov031_022397bc(void);

struct Struct_ov031_02239724 { unsigned char unknown_0_[0x40]; int unknown_40_; };
struct Struct_ov031_02290d18_11 { unsigned char unknown_0_[4]; Struct_ov031_02239724* unknown_4_; };
extern Struct_ov031_02290d18_11 data_ov031_02290d18;

// USA: func_ov031_02239724
extern "C" ARM int func_ov031_02239724(void) {
	if ((unsigned int)(data_ov031_02290d18.unknown_4_->unknown_40_ - 4) <= 2) {
		return 1;
	}
	func_ov031_02239368(4);
	char* var0 = (char*)data_ov031_02290d18.unknown_4_;
	int var1 = *(int*)(var0 + 0x1000 + 0x2a0);
	int var2 = (unsigned short)*(int*)(var0 + 0x1000 + 0x2a4);
	int var3 = func_020d5898((int)func_ov031_022397bc, (int)(var0 + 0x1060), var2, (int)(var0 + 0xf80), (unsigned short)var1, 1);
	if (var3 == 2) {
		return 1;
	}
	func_ov031_022393e4(var3);
	return 0;
}
