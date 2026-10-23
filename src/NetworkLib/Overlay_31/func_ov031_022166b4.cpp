#include <globaldefs.h>

extern "C" void func_ov031_02211b98(int arg0, void *arg1, int arg2);

struct Struct_ov031_0224e5dc_4 {
	void *unknown_0_;
	void *unknown_4_;
};
extern struct Struct_ov031_0224e5dc_4 data_ov031_0224e5dc;

// USA: func_ov031_022166b4
extern "C" ARM void func_ov031_022166b4(void) {
	if (data_ov031_0224e5dc.unknown_4_ != 0) {
		func_ov031_02211b98(1, data_ov031_0224e5dc.unknown_4_, 0);
		data_ov031_0224e5dc.unknown_4_ = 0;
	}
	if (data_ov031_0224e5dc.unknown_0_ != 0) {
		func_ov031_02211b98(1, data_ov031_0224e5dc.unknown_0_, 0);
		data_ov031_0224e5dc.unknown_0_ = 0;
	}
}
