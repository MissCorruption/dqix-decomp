#include <globaldefs.h>

struct Struct_ov031_02215528_2 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
	unsigned int unknown_8_;
	unsigned int unknown_c_;
	unsigned int unknown_10_;
	unsigned int unknown_14_;
	unsigned int unknown_18_;
	unsigned int unknown_1c_;
	unsigned int unknown_20_;
};

struct Struct_ov031_02215528 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
};

extern "C" void VectorizedInvertedMemcpy(const void* src, void* dst, unsigned int length);
extern "C" ARM unsigned int func_ov031_022135ac(unsigned int arg0);
extern "C" ARM unsigned int func_ov031_022155e8(unsigned char* arg0);
extern "C" ARM unsigned int func_ov031_0221563c(int arg0);
extern unsigned char data_ov031_02246028[0x58];

// USA: func_ov031_02215528
extern "C" ARM void func_ov031_02215528(Struct_ov031_02215528* arg0, unsigned char* arg1, Struct_ov031_02215528_2* arg2) {
	VectorizedInvertedMemcpy(data_ov031_02246028, arg2, 0x58);
	arg2->unknown_4_ = arg0->unknown_0_;
	arg2->unknown_8_ = arg0->unknown_4_;
	if (arg1[0xd0d] >= 6) {
		return;
	}
	arg1 += func_ov031_022135ac(arg1[0xd0d]) << 8;
	if (arg1[0xc0] != 0) {
		arg2->unknown_c_ = 0;
		arg2->unknown_10_ = func_ov031_022155e8(arg1 + 0xc0);
		arg2->unknown_14_ = func_ov031_0221563c(arg1[0xd0]);
		arg2->unknown_18_ = func_ov031_022155e8(arg1 + 0xc4);
		arg2->unknown_1c_ = func_ov031_022155e8(arg1 + 0xc8);
		arg2->unknown_20_ = func_ov031_022155e8(arg1 + 0xcc);
	} else {
		arg2->unknown_c_ = 1;
		arg2->unknown_10_ = 0;
		arg2->unknown_14_ = 0;
		arg2->unknown_18_ = 0;
		arg2->unknown_1c_ = 0;
		arg2->unknown_20_ = 0;
	}
}
