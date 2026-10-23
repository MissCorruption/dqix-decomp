#include <globaldefs.h>

extern "C" int func_ov031_0220f4bc(void);
extern "C" int func_ov031_022101e0(void);
extern "C" int func_ov031_02211410(void);
extern "C" void func_ov031_02211b98(int arg0, void* arg1, int arg2);

struct Struct_ov031_0221126c {
	int unknown_0_;
};

extern Struct_ov031_0221126c* data_ov031_0224e590;

// USA: func_ov031_0221126c
extern "C" ARM int func_ov031_0221126c(void) {
	int var0 = 1;
	Struct_ov031_0221126c* var1 = data_ov031_0224e590;
	if (var1 == NULL) return var0;
	var1->unknown_0_ = 3;
	if (!func_ov031_0220f4bc()) var0 = 0;
	if (!func_ov031_022101e0()) var0 = 0;
	if (var0) {
		int var2 = func_ov031_02211410();
		func_ov031_02211b98(0x53574300, data_ov031_0224e590, var2);
		data_ov031_0224e590 = NULL;
	}
	return var0;
}
