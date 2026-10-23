#include <globaldefs.h>

extern "C" void func_ov001_02164578(int arg0, int arg1, void* arg2, int arg3, float arg4);
extern int data_ov001_02165884;

struct Struct_ov001_02159a00 {
	char unknown_0_[0x10];
	int unknown_10_;
	int unknown_14_;
	int unknown_18_;
	char unknown_1c_[0x1c - 0x1c];
	int unknown1_1c_;
	char unknown_20_[0x3c - 0x20];
	int* unknown_3c_;
};

struct Struct_ov001_02159a00_2 {
	char unknown_0_[0x70];
	int unknown_70_;
};

// USA: func_ov001_02159a00
extern "C" ARM int func_ov001_02159a00(struct Struct_ov001_02159a00* arg0, struct Struct_ov001_02159a00_2* arg1) {
	if (arg0->unknown_18_ == 0) {
		float var0 = (float)arg0->unknown_14_;
		func_ov001_02164578(data_ov001_02165884, arg1->unknown_70_, &arg0->unknown1_1c_, arg0->unknown_10_, var0);
		if (arg0->unknown_3c_ != NULL) {
			int var1 = *arg0->unknown_3c_;
			if (var1 == 0xd || var1 == 0xf) {
				return 0;
			}
		}
		arg0->unknown_18_ = 1;
		return 1;
	}
	return 0;
}
