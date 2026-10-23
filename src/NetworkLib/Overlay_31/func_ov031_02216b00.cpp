#include <globaldefs.h>

struct Struct_ov031_0224e5e8_7 {
	char unknown_0_[8];
	void *unknown_8_;
};
extern struct Struct_ov031_0224e5e8_7 data_ov031_0224e5e8;

extern "C" void* VectorizedMemset(void *dst, int val, int n);
extern "C" void* VectorizedInvertedMemcpy(void *dst, void *src, int n);

// USA: func_ov031_02216b00
extern "C" ARM void func_ov031_02216b00(int *arg0) {
	if (data_ov031_0224e5e8.unknown_8_ == 0) {
		VectorizedMemset(arg0, 0, 0x1c4);
	}
	VectorizedInvertedMemcpy((char*)data_ov031_0224e5e8.unknown_8_ + 0x1008, arg0, 0x1c4);
	int var0 = *arg0;
	if (var0 < 20000 || var0 >= 30000) {
		*arg0 = 0x5206;
	}
	var0 = *arg0;
	if (var0 >= 20100) {
		*arg0 = -var0;
	}
}
