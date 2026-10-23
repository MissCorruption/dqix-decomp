#include <globaldefs.h>

struct Struct_ov031_02205a38_3 {
	char unknown_0_[0x73];
	signed char unknown_73_;
};

extern "C" int func_ov031_02205cc4(Struct_ov031_02205a38_3* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int func_ov031_02205b48(Struct_ov031_02205a38_3* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov031_02205ad4
extern "C" ARM int func_ov031_02205ad4(Struct_ov031_02205a38_3* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
	if (arg0->unknown_73_ == 4) {
		return func_ov031_02205cc4(arg0, arg1, arg2, arg3, arg4);
	}
	int var0 = func_ov031_02205b48(arg0, arg1, arg2, arg3, arg4);
	if (var0 != -6) {
		return var0;
	}
	if ((arg5 & 1) == 0) {
		return var0;
	}
	return func_ov031_02205cc4(arg0, arg1, arg2, arg3, arg4);
}
