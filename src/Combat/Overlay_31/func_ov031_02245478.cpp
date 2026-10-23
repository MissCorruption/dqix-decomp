#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov031_022119d0(int* arg0, int* arg1);

struct Struct_02245528;
extern "C" void func_ov031_02245528(Struct_02245528* arg0, int arg1);

struct Struct_02245478 {
	unsigned char unknown_0_[0x37c];
	void* unknown_37c_;
	int unknown_380_;
	unsigned char unknown_384_[0x394 - 0x384];
	int unknown_394_;
	unsigned char unknown_398_;
};

// USA: func_ov031_02245478
extern "C" ARM void func_ov031_02245478(struct Struct_02245478* arg0) {
	int var0;
	int var1;
	int var2 = func_ov031_022119d0(&var0, &var1);
	memset(arg0->unknown_37c_, 0, arg0->unknown_380_);
	arg0->unknown_394_ = -var0;
	switch (var1) {
	case 0:
		arg0->unknown_394_ = 0;
		break;
	case 1:
		arg0->unknown_394_ = 0;
		break;
	case 6:
		if ((unsigned int)(var2 - 14) <= 1) {
			arg0->unknown_398_ = 1;
		}
		break;
	case 7:
		arg0->unknown_398_ = 2;
		break;
	default:
		break;
	}
	func_ov031_02245528((Struct_02245528*)arg0, 0);
}
