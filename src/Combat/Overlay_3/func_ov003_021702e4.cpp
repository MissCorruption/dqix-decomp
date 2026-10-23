#include <globaldefs.h>

struct Struct_ov003_0216dee4;
extern "C" void func_ov003_0216dee4(struct Struct_ov003_0216dee4* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov003_0217019c {
	char unknown_0_[0x1];
	signed char unknown_1_;
	char unknown_2_[0xc - 0x2];
	signed short unknown_c_;
	char unknown_e_[0x68 - 0xe];
};

// USA: func_ov003_021702e4
extern "C" ARM void func_ov003_021702e4(struct Struct_ov003_0217019c* arg0) {
	signed char var0 = arg0->unknown_1_;
	if (var0 == 0)
		return;
	if (var0 == 1)
		return;
	short var1 = arg0->unknown_c_;
	int var2 = 7, var3 = 4;
	if (var1 == 5) {
		var2 = 6;
		var3 = 3;
	}
	func_ov003_0216dee4((struct Struct_ov003_0216dee4*)((char*)arg0 + 0x68), var2, 0xcc, 0xb, -1, var3, 3);
}
