#include <globaldefs.h>

struct Struct_ov031_02224a20 { unsigned char unknown_0_[0x11f]; signed char unknown_11f_; };
extern Struct_ov031_02224a20* data_ov031_02250bfc;
extern "C" void func_ov031_02224fa4(int arg0, int arg1);

// USA: func_ov031_02224a20
extern "C" ARM void func_ov031_02224a20(int arg0) {
	if (arg0 == data_ov031_02250bfc->unknown_11f_) {
		return;
	}
	func_ov031_02224fa4(arg0, 1);
	func_ov031_02224fa4(data_ov031_02250bfc->unknown_11f_, 0);
	data_ov031_02250bfc->unknown_11f_ = (signed char)arg0;
}
