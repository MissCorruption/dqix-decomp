#include <globaldefs.h>

typedef void (*Type_ov031_02216a2c)(void *a, void *b, int c);

struct Struct_ov031_0224e5e8_4 {
	char unknown_0_[8];
	void *unknown_8_;
};
extern struct Struct_ov031_0224e5e8_4 data_ov031_0224e5e8;
extern void *data_ov031_02249ba8;
extern "C" void func_ov031_022183b4(void);

// USA: func_ov031_02216a2c
extern "C" ARM void func_ov031_02216a2c(void) {
	void *var0 = data_ov031_0224e5e8.unknown_8_;
	if (var0 == 0) return;
	char *var1 = (char*)var0 + 0x1000;
	int var2 = *(int*)(var1 + 0x314);
	Type_ov031_02216a2c var3 = *(Type_ov031_02216a2c*)(var1 + 0x210);
	if (var2 != 0) {
		func_ov031_022183b4();
	}
	var3(&data_ov031_02249ba8, data_ov031_0224e5e8.unknown_8_, 0);
	data_ov031_0224e5e8.unknown_8_ = 0;
}
