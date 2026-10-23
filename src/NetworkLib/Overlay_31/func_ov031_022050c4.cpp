#include <globaldefs.h>

struct Struct_ov031_0224e200 {
	int unknown_0_;
	char unknown_4_[0x14];
	int unknown_18_;
	char unknown_1c_[4];
	int unknown_20_;
};
extern Struct_ov031_0224e200 data_ov031_0224e200;

struct Struct_ov031_022050c4 {
	char unknown_0_[0x1c];
	void (*unknown_1c_)(int);
};
extern void* data_ov031_022496a4;

// USA: func_ov031_022050c4
extern "C" ARM int func_ov031_022050c4(void) {
	if (data_ov031_0224e200.unknown_20_ < data_ov031_0224e200.unknown_18_) return -1;
	((Struct_ov031_022050c4*)data_ov031_022496a4)->unknown_1c_(data_ov031_0224e200.unknown_0_);
	data_ov031_0224e200.unknown_0_ = 0;
	return 0;
}
