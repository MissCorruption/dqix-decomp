#include <globaldefs.h>

extern "C" void (* volatile data_ov031_02290fc8)(void*);

extern "C" void func_ov031_02240e1c(void*);

struct Struct_ov031_02240e70 {
	char unknown_0_[0x800];
	void* unknown_800_;
};

struct Struct_ov031_02240e70_2 {
	char unknown_0_[0x20];
	Struct_ov031_02240e70* unknown_20_;
	void* unknown_24_;
	char unknown_28_[0x34 - 0x28];
	void* unknown_34_;
	void* unknown_38_;
};

// USA: func_ov031_02240e70
extern "C" ARM int func_ov031_02240e70(Struct_ov031_02240e70_2* arg0) {
	func_ov031_02240e1c(arg0->unknown_34_);
	func_ov031_02240e1c(arg0->unknown_38_);

	if (arg0->unknown_20_) {
		if (arg0->unknown_20_->unknown_800_)
			data_ov031_02290fc8(arg0->unknown_20_->unknown_800_);
		data_ov031_02290fc8(arg0->unknown_20_);
	}
	data_ov031_02290fc8(arg0->unknown_24_);
	data_ov031_02290fc8(arg0);
	return 1;
}
