#include <globaldefs.h>

extern "C" int func_0202c508(int arg0);
extern "C" void func_ov017_02192654(int arg0, unsigned short arg1, unsigned char arg2);
extern "C" void func_ov017_021a23b0(int arg0, unsigned short arg1);

struct Struct_ov017_021d0ae4 {
	unsigned char unknown_0_[4];
	unsigned short unknown_4_;
	unsigned char unknown_6_;
};

// USA: func_ov017_021d0ae4
extern "C" ARM void func_ov017_021d0ae4(int arg0, Struct_ov017_021d0ae4* arg1, int arg2, int arg3, int arg4) {
	if (func_0202c508(arg4) != 0) {
		func_ov017_02192654(arg0, arg1->unknown_4_, arg1->unknown_6_);
		return;
	}
	if (arg0 != 0) {
		return;
	}
	func_ov017_021a23b0(arg3, arg1->unknown_4_);
}
