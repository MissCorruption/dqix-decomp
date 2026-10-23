#include <globaldefs.h>

extern "C" int func_ov031_02211484(int arg0, unsigned int arg1);
extern "C" void VectorizedMemset(void* dst, int value, unsigned int size);
extern "C" void* func_ov031_0220f518(void* arg0);

struct Struct_ov031_02211310 {
	char unknown_0_[0x10];
	int unknown_10_;
	int unknown_14_;
	int unknown_18_;
	char unknown_1c_[4];
	int unknown_20_;
	char unknown_24_[4];
	int unknown_28_;
	char unknown_2c_[0x14];
	int unknown_40_;
	int unknown_44_;
};
extern Struct_ov031_02211310* data_ov031_0224e590;

// USA: func_ov031_02211310
extern "C" ARM int func_ov031_02211310(int arg0, int arg1, int arg2, int arg3, int arg4) {
	if (!func_ov031_02211484(0, (unsigned int)arg0)) {
		return 0;
	}
	Struct_ov031_02211310* var0 = data_ov031_0224e590;
	VectorizedMemset((char*)var0 + 0x14, 0, 0x28);
	var0 = data_ov031_0224e590;
	var0->unknown_14_ = 3;
	var0 = data_ov031_0224e590;
	var0->unknown_18_ = arg0;
	var0 = data_ov031_0224e590;
	var0->unknown_20_ = arg1;
	var0 = data_ov031_0224e590;
	var0->unknown_28_ = arg2;
	var0 = data_ov031_0224e590;
	var0->unknown_40_ = arg3;
	var0 = data_ov031_0224e590;
	var0->unknown_44_ = arg4;
	var0 = data_ov031_0224e590;
	if (!func_ov031_0220f518((char*)var0 + 0x14)) {
		return 0;
	}
	data_ov031_0224e590->unknown_10_ = 1;
	return 1;
}
