#include <globaldefs.h>

extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f08(void* arg0);
extern "C" void* func_ov024_021f69b4(char* arg0, int arg1);
extern "C" void* func_ov000_02171b9c(void* arg0, int arg1);

struct Struct_ov024_021f691c {
	unsigned short unknown_0_;
	signed char unknown_2_;
	char unknown_3_;
	float unknown_4_;
	char unknown_8_[2];
	unsigned char unknown_a_;
	unsigned char unknown_b_;
};

struct Struct_ov024_021f691c_2 { unsigned short unknown_0_; unsigned char unknown_2_; unsigned char unknown_3_; };

struct Struct_ov024_021f691c_3 {
	char unknown_0_[0x18];
	short unknown_18_;
	char unknown_1a_[8];
	signed char unknown_22_;
	char unknown_23_[9];
	short unknown_2c_;
};

// USA: func_ov024_021f691c
extern "C" ARM int func_ov024_021f691c(struct Struct_ov024_021f691c* arg0, unsigned short* arg1, struct Struct_ov024_021f691c_2* arg2, int arg3) {
	if (arg0->unknown_4_ > 0.0f) {
		unsigned short var0 = arg0->unknown_0_;
		if (arg0->unknown_2_ >= 0) {
			void* var1 = func_ov000_02160130();
			void* var2 = func_ov000_02160f08(var1);
			struct Struct_ov024_021f691c_3* var3 = (struct Struct_ov024_021f691c_3*)func_ov024_021f69b4((char*)var2, arg3);
			if (var3) {
				var3->unknown_22_ = arg0->unknown_2_;
				struct Struct_ov024_021f691c_3* var4 = (struct Struct_ov024_021f691c_3*)func_ov000_02171b9c(var3, arg0->unknown_2_);
				if (var4) {
					var3->unknown_2c_ = var4->unknown_18_;
				}
			}
		}
		arg2->unknown_0_ = var0;
		*arg1 = var0;
		if (arg0->unknown_a_ != 0xff) arg2->unknown_3_ = arg0->unknown_a_;
		if (arg0->unknown_b_ != 0xff) arg2->unknown_2_ = arg0->unknown_b_;
		return 1;
	}
	return 0;
}
