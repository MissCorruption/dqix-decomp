#include <globaldefs.h>

struct Struct_02053dc0 { char unknown_0_[0x19c]; void* unknown_19c_; };
extern "C" void* func_02053dc0(struct Struct_02053dc0* arg0);

struct Struct_02053dc0_2 { char unknown_0_[0x30]; };

struct Struct_ov024_021f81dc {
	char unknown_0_[4];
	short unknown_4_;
	char unknown_6_[6];
	int unknown_c_;
	char unknown_10_[0x114];
	float unknown_124_;
	char unknown_128_[0x280];
	struct Struct_02053dc0_2 unknown_3a8_[9];
};

extern "C" void func_ov024_021f9660(void* arg0);
extern "C" int func_ov024_021f8628(void* arg0, void* arg1, void* arg2, void* arg3);
extern "C" int func_ov024_021f691c(void* arg0, unsigned short* arg1, void* arg2, int arg3);

// USA: func_ov024_021f81dc
extern "C" ARM int func_ov024_021f81dc(struct Struct_ov024_021f81dc* arg0, void* arg1, struct Struct_02053dc0* arg2, unsigned short* arg3) {
	void* var0 = func_02053dc0(arg2);
	if (!var0) return (int)var0;
	arg0->unknown_124_ = 0.4f;
	func_ov024_021f9660(arg0);
	int var1 = func_ov024_021f691c(&arg0->unknown_3a8_[6], arg3, var0, arg0->unknown_4_);
	if (var1) return var1;
	var1 = func_ov024_021f691c(&arg0->unknown_3a8_[5], arg3, var0, arg0->unknown_4_);
	if (var1) return var1;
	if (arg0->unknown_c_ >= 4) {
		var1 = func_ov024_021f691c(&arg0->unknown_3a8_[8], arg3, var0, arg0->unknown_4_);
		if (var1) return var1;
	}
	if (arg0->unknown_c_ >= 4) {
		var1 = func_ov024_021f691c(&arg0->unknown_3a8_[0], arg3, var0, arg0->unknown_4_);
		if (var1) return var1;
		var1 = func_ov024_021f691c(&arg0->unknown_3a8_[2], arg3, var0, arg0->unknown_4_);
		if (var1) return var1;
	} else {
		var1 = func_ov024_021f691c(&arg0->unknown_3a8_[3], arg3, var0, arg0->unknown_4_);
		if (var1) return var1;
	}
	return func_ov024_021f8628(arg0, arg1, arg2, arg3);
}
