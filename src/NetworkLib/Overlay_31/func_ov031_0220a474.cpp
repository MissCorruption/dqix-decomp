#include <globaldefs.h>

struct Struct_ov031_0220a474_2 {
	unsigned char unknown_0_[0x30];
	unsigned char unknown_30_;
	unsigned char unknown_31_;
	unsigned char unknown_32_[0x455 - 0x32];
	unsigned char unknown_455_;
};

struct Struct_ov031_0220a474 {
	unsigned char unknown_0_[0xc];
	Struct_ov031_0220a474_2* unknown_c_;
	unsigned char unknown_10_[0x18 - 0x10];
	unsigned short unknown_18_;
	int unknown_1c_;
};

extern "C" void func_ov031_02209ff0(Struct_ov031_0220a474* arg0);
extern "C" int func_ov031_02209b58(Struct_ov031_0220a474* arg0);
extern "C" void func_ov031_02208f50(Struct_ov031_0220a474_2* arg0);
extern "C" ARM int func_ov031_0220a444(int arg0);
extern "C" void func_ov031_02209e98(Struct_ov031_0220a474* arg0);
extern "C" void func_ov031_0220a184(Struct_ov031_0220a474* arg0);
extern "C" ARM void func_ov031_02208ef0(void* arg0);
extern "C" void func_ov031_02207b44(void* arg0, int arg1, int arg2);

// USA: func_ov031_0220a474
extern "C" ARM int func_ov031_0220a474(Struct_ov031_0220a474* arg0) {
	Struct_ov031_0220a474_2* var0 = arg0->unknown_c_;
	func_ov031_02209ff0(arg0);
	int var1;
	do {
		var1 = func_ov031_02209b58(arg0);
		if (var1 == 9) return 1;
		if (var1 == 4) break;
	} while (var0->unknown_31_ == 0);

	if (var0->unknown_31_ != 0) {
		func_ov031_02208f50(var0);
		if (func_ov031_0220a444((int)arg0) != 0) return 1;
		func_ov031_02209e98(arg0);
	} else {
		func_ov031_0220a184(arg0);
		func_ov031_02208ef0(var0);
		if (var0->unknown_30_ != 0) {
			func_ov031_02207b44(var0, arg0->unknown_1c_, arg0->unknown_18_);
		}
		func_ov031_02208f50(var0);
		func_ov031_02209e98(arg0);
		if (func_ov031_0220a444((int)arg0) != 0) return 1;
	}
	var0->unknown_455_ = 8;
	return 0;
}
