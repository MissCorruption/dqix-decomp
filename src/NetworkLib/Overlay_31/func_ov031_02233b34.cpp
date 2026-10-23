#include <globaldefs.h>

#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

extern "C" char* func_ov031_02235c70(void);
extern "C" void func_020ca408(void* src, void* dst, int size);
extern "C" void func_ov031_02227520(int* arg0, int* arg1);
extern "C" int func_ov031_02212d40(void* arg0);
extern "C" void func_ov031_02213204(int arg0, void* arg1);
extern "C" void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);
extern "C" void func_ov031_02233d84(void* arg0);

extern unsigned char data_ov031_022491d8[0xc];

struct Struct_ov031_02290cd0_2 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	int unknown_4_;
};
extern Struct_ov031_02290cd0_2 data_ov031_02290cd0;

// USA: func_ov031_02233b34
extern "C" ARM void func_ov031_02233b34(void) {
	unsigned char* var0 = (unsigned char*)func_ov031_02235c70();
	unsigned char var1[0xc];
	func_020ca408(data_ov031_022491d8, var1, 0xc);

	int var2;
	func_ov031_02227520(0, &var2);
	if (var2 == 2) {
		var1[0xa] = 4;
	} else {
		var1[0xa] = var0[0xf4] + 1;
	}

	int var3 = func_ov031_02212d40(var1);
	data_ov031_02290cd0.unknown_4_ = var3;
	if (var3 != 0 && var2 == 0) {
		func_ov031_02213204(var0[0xf4], var0);
	}

	func_ov031_0223e218(0, (void*)func_ov031_02233d84, 0, 0x78);
}
