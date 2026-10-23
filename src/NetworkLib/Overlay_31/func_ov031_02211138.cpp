#include <globaldefs.h>

extern "C" void func_020c9b10(void* arg0);
extern "C" void func_ov031_02209e28(void* arg0, int arg1);
extern "C" ARM int func_ov031_02211848(void);

struct Struct_ov031_02211138 {
	int unknown_0_;
	unsigned char unknown_4_[0xc];
	int unknown_10_;
	unsigned char unknown_14_[0x1c];
	int unknown_30_;
	int unknown_34_;
	int unknown_38_;
	unsigned char unknown_3c_[0x4];
	void (*unknown_40_)(void*, void*, int);
	int unknown_44_;
};

extern Struct_ov031_02211138* data_ov031_0224e590;

// USA: func_ov031_02211138
extern "C" ARM void func_ov031_02211138(void) {
	unsigned int var0[0x20 / 4];
	func_020c9b10(var0);
	func_ov031_02209e28(var0, 0x20);
	if (func_ov031_02211848()) return;

	Struct_ov031_02211138* var1 = data_ov031_0224e590;
	if (var1 == NULL) return;
	if (var1->unknown_0_ != 2) return;
	if (var1->unknown_10_ == 0 || var1->unknown_30_ == 0) return;

	var1->unknown_10_ = 0;
	data_ov031_0224e590->unknown_30_ = 0;
	var1 = data_ov031_0224e590;
	void (*var2)(void*, void*, int) = var1->unknown_40_;
	if (var2 == NULL) return;
	var2((void*)var1->unknown_34_, (void*)var1->unknown_38_, var1->unknown_44_);
}
