#include <globaldefs.h>

extern "C" int func_ov027_021d9de8();
extern "C" void func_ov027_021d8c6c(int arg0, int arg1, int arg2);

struct Struct_ov027_021e33ec {
	void *unknown_0_;
};

extern struct Struct_ov027_021e33ec data_ov027_021e33ec;

// USA: func_ov027_021d8c20
extern "C" ARM void func_ov027_021d8c20(int arg0, int arg1, int arg2) {
	if (func_ov027_021d9de8() != 0) {
		((int *)((char *)data_ov027_021e33ec.unknown_0_ + 0x14e8))[arg0 - 1] = arg1;
	}
	func_ov027_021d8c6c(arg0, arg1, arg2);
}
