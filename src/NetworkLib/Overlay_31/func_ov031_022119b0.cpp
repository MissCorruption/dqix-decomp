#include <globaldefs.h>

struct Struct_ov031_0224e5a4 {
	int unknown_0_;
	int unknown_4_;
};
extern Struct_ov031_0224e5a4 data_ov031_0224e5a4;

// USA: func_ov031_022119b0
extern "C" ARM int func_ov031_022119b0(int *arg0) {
	if (arg0 != 0) {
		*arg0 = data_ov031_0224e5a4.unknown_4_;
	}
	return data_ov031_0224e5a4.unknown_0_;
}
