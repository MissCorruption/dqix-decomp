#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov024_021fe698(void* arg0, int arg1);
struct Struct_ov024_021fc754_5;
extern "C" int func_ov024_021fcac0(struct Struct_ov024_021fc754_5* arg0);
extern "C" void func_ov024_021f9874(void* arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021fcd7c {
	char unknown_0_[4];
	short unknown_4_;
	unsigned char unknown_6_;
	char unknown_7_;
	struct Struct_ov024_021fc754_5* unknown_8_;
	int unknown_c_;
};

// USA: func_ov024_021fcd7c
extern "C" ARM void func_ov024_021fcd7c(struct Struct_ov024_021fcd7c* arg0) {
	int var0 = 0;
	if (arg0->unknown_6_ == 2) var0 = 1;
	if (arg0->unknown_6_ == 0) return;
	if (arg0->unknown_c_ >= 3) var0 = 1;
	if (!var0) return;
	if (!func_ov024_021fe698(arg0, 0x12)) return;
	if (func_ov024_021fcac0(arg0->unknown_8_)) return;
	char var1[0xc8];
	memset(var1, 0, 0xc8);
	*(float*)(var1 + 0xc4) = 1000.0f;
	func_ov024_021f9874(arg0, var1, 0, (unsigned char)arg0->unknown_4_);
}
