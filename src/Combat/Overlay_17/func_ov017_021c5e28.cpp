#include <globaldefs.h>

extern "C" void func_0202ae18(void);
extern "C" int func_0202c508(void);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void* func_0207d78c(void);

struct Struct_0207d7f4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned int unknown_4_; unsigned int unknown_8_; };
extern "C" void func_0207da7c(Struct_0207d7f4* arg0, unsigned short arg1);

struct Struct_ov017_021c5e28 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	short unknown_6_;
	unsigned char unknown_8_[0xc];
};

// USA: func_ov017_021c5e28
extern "C" ARM void func_ov017_021c5e28(int arg0, int arg1) {
	func_0202ae18();
	if (func_0202c508()) {
		void* var0 = func_0202ae24();
		struct Struct_ov017_021c5e28 var1;
		var1.unknown_0_ = 0x3e;
		var1.unknown_4_ = (unsigned char)arg0;
		var1.unknown_6_ = arg1;
		func_0205e330(var0, &var1, 0);
		Struct_0207d7f4* var2 = (Struct_0207d7f4*)func_0207d78c();
		func_0207da7c(var2, (unsigned short)arg1);
	}
}
