#include <globaldefs.h>

extern "C" void* func_ov031_0223cf4c(unsigned int arg0, int arg1);

struct Struct_ov031_0223beb8 { short unknown_0_; unsigned char unknown_2_; unsigned char unknown_3_; };

// USA: func_ov031_0223beb8
extern "C" ARM void* func_ov031_0223beb8(int arg0) {
	unsigned int var0 = (arg0 + 1) * 4 + 8;
	Struct_ov031_0223beb8* var1 = (Struct_ov031_0223beb8*)func_ov031_0223cf4c(var0, 4);
	var1->unknown_0_ = arg0 + 1;
	var1->unknown_2_ = 0;
	var1->unknown_3_ = 0;
	return var1;
}
