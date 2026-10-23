#include <globaldefs.h>

extern void* data_ov031_0224e5bc;
extern "C" int func_ov031_02216ab4(void);
extern "C" void func_ov031_02216a2c(void);
extern "C" void func_ov031_02211b98(void* arg0, void* arg1, int arg2);
extern "C" void func_ov031_02216b00(int* arg0);
extern "C" void func_ov031_02211b08(int arg0, int arg1);

// USA: func_ov031_0221268c
extern "C" ARM int func_ov031_0221268c(void) {
	int var0[0x1c4 / 4];

	if (data_ov031_0224e5bc == NULL) return 0;

	int var1 = func_ov031_02216ab4();
	switch (var1) {
	case 0:
		return 2;
	case 0x15:
		func_ov031_02216a2c();
		func_ov031_02211b98((void*)4, data_ov031_0224e5bc, 0x1e20);
		data_ov031_0224e5bc = NULL;
		return 3;
	case 0x14:
		func_ov031_02216a2c();
		func_ov031_02211b98((void*)4, data_ov031_0224e5bc, 0x1e20);
		data_ov031_0224e5bc = NULL;
		return 5;
	default:
		func_ov031_02216b00(var0);
		func_ov031_02216a2c();
		func_ov031_02211b98((void*)4, data_ov031_0224e5bc, 0x1e20);
		data_ov031_0224e5bc = NULL;
		func_ov031_02211b08(2, var0[0]);
		return 4;
	}
}
