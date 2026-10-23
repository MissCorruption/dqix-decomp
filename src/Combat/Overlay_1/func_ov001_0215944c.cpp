#include <globaldefs.h>

extern "C" void func_ov001_021579ac(void* arg0);
extern "C" void func_ov001_02157ae0(void* arg0, void* arg1, void* arg2);

struct Struct_ov001_02157acc {
	unsigned char unknown_0_[0xc4];
	int unknown_c4_;
	unsigned char unknown_c8_[0x464 - 0xc8];
	int unknown_464_;
};
extern "C" void func_ov001_02157acc(struct Struct_ov001_02157acc* arg0);

struct Struct_ov001_0215944c {
	unsigned char unknown_0_[0x48];
	int unknown_48_;
	unsigned char unknown_4c_[0x74 - 0x4c];
	int unknown_74_;
	unsigned char unknown_78_[0x84 - 0x78];
	int unknown_84_;
	unsigned char unknown_88_[0x11c - 0x88];
	unsigned char unknown_11c_[1];
	unsigned char unknown_11d_[0x580 - 0x11d];
	int unknown_580_;
};

// USA: func_ov001_0215944c
extern "C" ARM int func_ov001_0215944c(void* arg0, struct Struct_ov001_0215944c* arg1) {
	if (arg1->unknown_48_ <= 0) {
		func_ov001_021579ac(&arg1->unknown_11c_);
		func_ov001_02157acc((struct Struct_ov001_02157acc*)&arg1->unknown_11c_);
		arg1->unknown_48_ = 1;
	}
	func_ov001_02157ae0(&arg1->unknown_11c_, &arg1->unknown_74_, &arg1->unknown_84_);
	int var0 = (arg1->unknown_580_ == 0) ? 1 : 0;
	if (var0) {
		var0 = 0;
		arg1->unknown_48_ = var0;
	} else {
		var0 = 1;
	}
	return var0;
}
