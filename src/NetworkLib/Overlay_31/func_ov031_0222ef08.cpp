#include <globaldefs.h>

struct Struct_ov031_0222ef08 {
	unsigned char unknown_0_[0x38];
	int unknown_38_;
	unsigned char unknown_3c_[4];
	unsigned char unknown_40_;
	unsigned char unknown_41_[4];
	unsigned char unknown_45_;
	unsigned char unknown_46_[1];
	unsigned char unknown_47_;
};

struct Struct_ov031_02290ca0_3 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned short unknown_4_;
	unsigned char unknown_6_[2];
	struct Struct_ov031_0222ef08* unknown_8_;
};

extern struct Struct_ov031_02290ca0_3 data_ov031_02290ca0;

extern "C" int func_ov031_0222f188(void);
extern "C" ARM int func_ov031_0223d354(int arg0);
extern "C" int func_ov031_0223d394(int arg0);
extern "C" ARM int func_ov031_0223d3d4(int arg0);
extern "C" int func_ov031_02236878(int arg0);
extern "C" void func_ov031_0222f20c(int arg0);
extern "C" void func_ov031_022306d4(void);
extern "C" void func_ov031_0223060c(void);
extern "C" void func_ov031_0222f68c(void);
extern "C" void func_ov031_022309b4(int arg0);
extern "C" ARM void func_ov031_022274c0(int arg0);
extern "C" ARM void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);

// USA: func_ov031_0222ef08
extern "C" ARM void func_ov031_0222ef08(void) {
	if (data_ov031_02290ca0.unknown_8_->unknown_38_ != 0 || data_ov031_02290ca0.unknown_8_->unknown_45_ != 0) {
		return;
	}
	if (func_ov031_0222f188() != 0) {
		return;
	}
	if (func_ov031_0223d354(1) != 0) {
		func_ov031_0222f20c(data_ov031_02290ca0.unknown_0_);
		return;
	}
	if (func_ov031_0223d354(2) != 0) {
		func_ov031_02236878(7);
		data_ov031_02290ca0.unknown_8_->unknown_40_ = 0xd;
		func_ov031_022274c0((int)func_ov031_0222f68c);
		return;
	}
	if (func_ov031_0223d394(0x200) != 0) {
		if (data_ov031_02290ca0.unknown_4_ == 0x91) {
			if (data_ov031_02290ca0.unknown_8_->unknown_47_ != 0) {
				return;
			}
			func_ov031_02236878(9);
			data_ov031_02290ca0.unknown_8_->unknown_47_ = 1;
			return;
		}
		func_ov031_02236878(0x13);
		data_ov031_02290ca0.unknown_8_->unknown_38_ = (int)func_ov031_0223e218(0, (void*)func_ov031_022306d4, 0, 0x78);
		return;
	}
	if (func_ov031_0223d3d4(0x200) != 0) {
		data_ov031_02290ca0.unknown_8_->unknown_47_ = 0;
		return;
	}
	if (func_ov031_0223d394(0x100) != 0) {
		if (data_ov031_02290ca0.unknown_4_ == 0) {
			if (data_ov031_02290ca0.unknown_8_->unknown_47_ != 0) {
				return;
			}
			func_ov031_02236878(9);
			data_ov031_02290ca0.unknown_8_->unknown_47_ = 1;
			return;
		}
		func_ov031_02236878(0x13);
		data_ov031_02290ca0.unknown_8_->unknown_38_ = (int)func_ov031_0223e218(0, (void*)func_ov031_0223060c, 0, 0x78);
		return;
	}
	if (func_ov031_0223d3d4(0x100) != 0) {
		data_ov031_02290ca0.unknown_8_->unknown_47_ = 0;
		return;
	}
	if (func_ov031_0223d394(0x40) != 0) {
		func_ov031_022309b4(1);
		return;
	}
	if (func_ov031_0223d3d4(0x40) != 0) {
		data_ov031_02290ca0.unknown_8_->unknown_47_ = 0;
		return;
	}
	if (func_ov031_0223d394(0x80) != 0) {
		func_ov031_022309b4(3);
		return;
	}
	if (func_ov031_0223d3d4(0x80) != 0) {
		data_ov031_02290ca0.unknown_8_->unknown_47_ = 0;
		return;
	}
	if (func_ov031_0223d394(0x20) != 0) {
		func_ov031_022309b4(0);
		return;
	}
	if (func_ov031_0223d394(0x10) != 0) {
		func_ov031_022309b4(2);
	}
}
