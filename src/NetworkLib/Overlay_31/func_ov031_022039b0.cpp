#include <globaldefs.h>

struct Struct_ov031_022039b0 { unsigned char unknown_0_[0x8]; unsigned char unknown_8_; unsigned char unknown_9_; };
struct Struct_02111304_5 { unsigned char unknown_0_[0x4]; void* unknown_4_; };

extern Struct_02111304_5 data_02111304;
extern unsigned char data_ov031_0224c980;

extern "C" int func_ov031_02201414(void* arg0, int arg1, Struct_ov031_022039b0* arg2);
extern "C" void func_ov031_02201364(void* arg0, unsigned int arg1, Struct_ov031_022039b0* arg2);
extern "C" int func_ov031_0220a87c(void* arg0, int arg1, void* arg2, int arg3, Struct_ov031_022039b0* arg4);
extern "C" int func_ov031_022037a8(void* arg0, int arg1, void* arg2, int arg3, Struct_ov031_022039b0* arg4);

// USA: func_ov031_022039b0
extern "C" ARM int func_ov031_022039b0(void* arg0, int arg1, void* arg2, int arg3) {
	Struct_ov031_022039b0* var0 = *(Struct_ov031_022039b0**)((char*)data_02111304.unknown_4_ + 0xa4);
	if (var0) {
		int var1;
		if (var0->unknown_8_ == 0xa) {
			if (arg1 != 0) func_ov031_02201414(arg0, arg1, var0);
			if (arg3 != 0) func_ov031_02201414(arg2, arg3, var0);
			var1 = arg1 + arg3;
		} else if (var0->unknown_8_ == 0xb) {
			if (arg1 != 0) func_ov031_02201364(arg0, arg1, var0);
			if (arg3 != 0) func_ov031_02201364(arg2, arg3, var0);
			var1 = arg1 + arg3;
		} else {
			if (var0->unknown_9_ != 0) {
				var1 = func_ov031_0220a87c(arg0, arg1, arg2, arg3, var0);
			} else {
				var1 = func_ov031_022037a8(arg0, arg1, arg2, arg3, var0);
			}
		}
		if (data_ov031_0224c980 == 0) {
			return var1;
		}
	}
	return 0;
}
