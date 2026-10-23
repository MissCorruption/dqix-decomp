#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" unsigned short* func_02012fe4(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d24a8 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	int unknown_4_;
};

struct Struct_ov017_021d24a8_2 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	Struct_ov017_021d24a8 unknown_4_;
	unsigned char unknown_c_[8];
};

// USA: func_ov017_021d24a8
extern "C" ARM void func_ov017_021d24a8(int arg0) {
	void* var0 = func_0202ae24();

	Struct_ov017_021d24a8_2 var1;
	Struct_ov017_021d24a8* var2 = &var1.unknown_4_;
	var2->unknown_0_ = arg0;
	var1.unknown_0_ = 0x1e;
	unsigned short* var3 = func_02012fe4();
	var2->unknown_4_ = *var3;
	func_0205e330(var0, &var1, 0);
}
