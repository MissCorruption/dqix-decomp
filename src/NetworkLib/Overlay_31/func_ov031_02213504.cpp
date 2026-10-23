#include <globaldefs.h>

extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);
extern "C" void VectorizedMemset(void* dst, int value, unsigned int size);
extern "C" ARM unsigned int func_ov031_022135ac(unsigned int arg0);
extern "C" ARM void func_ov031_02215778(int arg0, void* arg1);
extern "C" void* func_ov031_0220f084(int arg0);

struct Struct_ov031_02213504 {
	unsigned char unknown_0_[0x17];
	unsigned char unknown_17_;
	char unknown_18_[0xa];
	unsigned char unknown_22_;
};

struct Struct_ov031_0224e5c4_8 {
	unsigned char unknown_0_[0xc];
	Struct_ov031_02213504* unknown_c_;
};

extern Struct_ov031_0224e5c4_8 data_ov031_0224e5c4;

// USA: func_ov031_02213504
extern "C" ARM void func_ov031_02213504(unsigned int arg0) {
	Struct_ov031_02213504* var0 = data_ov031_0224e5c4.unknown_c_;
	unsigned int var1 = var0->unknown_22_;
	if (var1 == 0) {
		var1 = func_ov031_022135ac(arg0);
	}

	var0 = data_ov031_0224e5c4.unknown_c_;
	var0->unknown_17_ = var1;
	void* var2 = func_ov031_0220f084(0);
	if (var2 != NULL) {
		InvalidateDataCacheRange(var2, 0x20);
		var0 = data_ov031_0224e5c4.unknown_c_;
		func_ov031_02215778((int)var2, var0->unknown_18_);
	}

	int var3 = 0;
	char* var4 = (char*)data_ov031_0224e5c4.unknown_c_;
	Struct_ov031_02213504* var5 = data_ov031_0224e5c4.unknown_c_;
	do {
		signed char var6 = *(var4 + 0x18);
		if (var6 < 0x20 || var6 > 0x7e) {
			VectorizedMemset(var5->unknown_18_, 0, 0xa);
			return;
		}
		var3++;
		var4++;
	} while (var3 < 0xa);
}
