#include <globaldefs.h>

struct Struct_0202c1a4 {
	char unknown_0_[0x1038];
	signed char unknown_1038_[16];
};

extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d1dc0 {
	short unknown_0_;
	short unknown_2_;
	short unknown_4_;
	short unknown_6_;
	short unknown_8_;
	short unknown_a_;
	short unknown_c_;
};

struct Struct_ov017_021d1dc0_2 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	Struct_ov017_021d1dc0 unknown_4_;
	unsigned char unknown_12_[2];
};

// USA: func_ov017_021d1dc0
extern "C" ARM void func_ov017_021d1dc0(unsigned short arg0, int arg1, int* arg2, int arg3, int arg4) {
	if (!func_0202b7d8(func_0202ae18())) return;
	if (func_0202c1a4((struct Struct_0202c1a4*)func_0202ae18()) != 0) return;
	void* var0 = func_0202ae24();

	struct Struct_ov017_021d1dc0_2 var1;
	var1.unknown_0_ = 0xb5;
	var1.unknown_4_.unknown_0_ = arg0;
	var1.unknown_4_.unknown_2_ = arg1;
	var1.unknown_4_.unknown_4_ = arg3;
	var1.unknown_4_.unknown_6_ = (short)arg4;
	var1.unknown_4_.unknown_8_ = (short)(arg2[0] >> 7);
	var1.unknown_4_.unknown_a_ = (short)(arg2[1] >> 7);
	var1.unknown_4_.unknown_c_ = (short)(arg2[2] >> 7);
	func_0205e330(var0, &var1, 0);
}
