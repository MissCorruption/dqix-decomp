#include <globaldefs.h>

extern "C" void* func_ov031_0221188c(void);
extern "C" void func_ov031_02243c10(void*);
extern "C" void func_ov031_02243d20(void*);
extern "C" void func_ov031_02243e34(void*);
extern "C" void func_ov031_02244050(void*);
extern "C" void func_ov031_02244660(void*);
extern "C" void func_ov031_02244e44(void*);
extern "C" void func_ov031_02244ad0(void*);
extern "C" int func_ov031_022119d0(int*, int*);
extern "C" void func_ov031_02245548(void*);

struct Struct_02243b34 {
	unsigned char unknown_0_[0x34];
	unsigned char unknown_34_;
	unsigned char unknown_35_[0x394 - 0x35];
	int unknown_394_;
	unsigned char unknown_398_[0x399 - 0x398];
	unsigned char unknown_399_;
	unsigned char unknown_39a_[0x3d0 - 0x39a];
	unsigned char unknown_3d0_;
};

// USA: func_ov031_02243b34
extern "C" ARM void func_ov031_02243b34(Struct_02243b34* arg0) {
	if (arg0->unknown_3d0_ != 0) {
		func_ov031_0221188c();
	}
	switch (arg0->unknown_34_) {
		case 1: func_ov031_02243c10(arg0); break;
		case 2: func_ov031_02243d20(arg0); break;
		case 3: func_ov031_02243e34(arg0); break;
		case 4: func_ov031_02244050(arg0); break;
		case 5: func_ov031_02244660(arg0); break;
		case 6: func_ov031_02244e44(arg0); break;
		case 7: func_ov031_02244ad0(arg0); break;
		case 8: break;
		default: break;
	}
	if (arg0->unknown_3d0_ == 0 && arg0->unknown_399_ == 0) {
		int var0, var1;
		func_ov031_022119d0(&var0, &var1);
		arg0->unknown_394_ = -var0;
	}
	func_ov031_02245548(arg0);
}
