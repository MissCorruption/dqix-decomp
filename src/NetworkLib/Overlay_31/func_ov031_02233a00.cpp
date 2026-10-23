#include <globaldefs.h>

struct Struct_ov031_02290cd0 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	int unknown_4_;
};
extern Struct_ov031_02290cd0 data_ov031_02290cd0;

extern "C" void func_ov031_02233a8c(void);
extern "C" void func_ov031_02227520(int* arg0, int* arg1);
extern "C" void func_ov031_0222336c(int, int, int);
extern "C" int func_ov031_02223518(void* arg0);
extern "C" void func_ov031_022239f4(void);
extern "C" void func_ov031_022235a0(void* arg0);
extern "C" void func_ov031_02222b0c(int);
extern "C" void func_ov031_02233b34(void);
extern "C" void func_ov031_02223a64(int);
extern "C" int func_ov031_02236878(int arg0);
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_02233bd4(void);

// USA: func_ov031_02233a00
extern "C" ARM void func_ov031_02233a00(void) {
	data_ov031_02290cd0.unknown_0_ = 0;
	func_ov031_02233a8c();
	int var0;
	func_ov031_02227520(0, &var0);
	if (var0 != 0) goto skipInit;
	func_ov031_0222336c(0x31, 0x31 - 0x32, 0);
skipInit:
	func_ov031_02223518((void*)2);
	if (var0 != 0) goto skipCall;
	func_ov031_022239f4();
skipCall:
	func_ov031_022235a0((void*)0x2c);
	func_ov031_02222b0c(0);
	func_ov031_02233b34();
	func_ov031_02223a64(0);
	func_ov031_02236878(0xc);
	func_ov031_022274c0((int)func_ov031_02233bd4);
}
