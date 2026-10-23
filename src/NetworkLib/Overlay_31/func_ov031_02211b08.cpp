#include <globaldefs.h>

struct Struct_ov031_0224e5a4_4 {
	int unknown_0_;
	int unknown_4_;
};

extern Struct_ov031_0224e5a4_4 data_ov031_0224e5a4;

// USA: func_ov031_02211b08
extern "C" ARM void func_ov031_02211b08(int arg0, int arg1) {
	if (data_ov031_0224e5a4.unknown_0_ != 9) {
		data_ov031_0224e5a4.unknown_0_ = arg0;
		data_ov031_0224e5a4.unknown_4_ = arg1;
	}
}
