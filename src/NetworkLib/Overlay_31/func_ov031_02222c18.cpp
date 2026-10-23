#include <globaldefs.h>

extern "C" int FastIntModulus(int arg0, int arg1);
extern "C" int FastIntDivide(int arg0, unsigned int arg1);
extern "C" void func_ov031_0223bdb0(int arg0, int arg1, void* arg2);

struct Struct_ov031_02222b0c { unsigned int unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
struct Struct_ov031_02222b0c_2 {
	unsigned char unknown_0_[4];
	Struct_ov031_02222b0c* unknown_4_;
	unsigned char unknown_8_;
	unsigned char unknown_9_;
};
extern Struct_ov031_02222b0c_2* data_ov031_02250ba4;
extern unsigned char data_ov031_02248910[];

// USA: func_ov031_02222c18
extern "C" ARM void func_ov031_02222c18(void) {
	data_ov031_02250ba4->unknown_9_ = FastIntModulus(data_ov031_02250ba4->unknown_9_ + 1, 0x28);
	int var0 = FastIntDivide(data_ov031_02250ba4->unknown_9_, 5);
	func_ov031_0223bdb0(0, var0 + 0x47, data_ov031_02250ba4->unknown_4_);

	data_ov031_02250ba4->unknown_4_->unknown_4_ = (data_ov031_02250ba4->unknown_4_->unknown_4_ & ~0xc00) | 0x400;

	unsigned char var1 = data_ov031_02248910[data_ov031_02250ba4->unknown_8_];
	Struct_ov031_02222b0c* var2 = data_ov031_02250ba4->unknown_4_;
	var2->unknown_0_ &= ~0xc00;
	var2->unknown_4_ = (var2->unknown_4_ & ~0xf000) | (var1 << 12);

	data_ov031_02250ba4->unknown_4_->unknown_0_ = (data_ov031_02250ba4->unknown_4_->unknown_0_ & 0xfe00ff00) | 0x8b | 0xe60000;
}
