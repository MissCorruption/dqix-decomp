#include <globaldefs.h>

struct Struct_ov031_02212184 {
	int unknown_0_;
	unsigned short unknown_4_;
	char unknown_6_[0x10 - 0x6];
	int unknown_10_;
};

struct Struct_ov031_0224e5b4_8 {
	char unknown_0_[4];
	Struct_ov031_02212184* unknown_4_;
};

extern Struct_ov031_0224e5b4_8 data_ov031_0224e5b4;
extern "C" void func_ov031_02216698(void);
extern "C" int func_ov031_02216360(void);
extern "C" void func_ov031_022166b4(void);
extern "C" int func_ov031_022130ac(void);

// USA: func_ov031_02212184
extern "C" ARM int func_ov031_02212184(void) {
	Struct_ov031_02212184* var0 = data_ov031_0224e5b4.unknown_4_;
	if (var0 == NULL) return 1;
	unsigned short var1 = var0->unknown_4_;
	if (var1 == 8) return 1;
	if (var1 == 1) {
		int var2 = var0->unknown_10_;
		if (var2 == 1) {
			func_ov031_02216698();
			data_ov031_0224e5b4.unknown_4_->unknown_10_ = 5;
			return 0;
		}
		if (var2 == 5) {
			int var3 = func_ov031_02216360();
			if (var3 == 1) return 0;
			var3 -= 2;
			if ((unsigned int)var3 <= 2) {
				func_ov031_022166b4();
			}
		}
		data_ov031_0224e5b4.unknown_4_ = 0;
		return 1;
	}
	var0->unknown_4_ = 5;
	if (func_ov031_022130ac() == 0) return 0;
	data_ov031_0224e5b4.unknown_4_ = 0;
	return 1;
}
