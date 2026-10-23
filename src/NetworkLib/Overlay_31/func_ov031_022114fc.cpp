#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" long long func_ov031_02212d20(void);
extern "C" void func_ov031_02211754(struct Struct_ov031_022114fc_2* arg0);
extern "C" void func_ov031_02211678(void* arg0, int arg1, int arg2);

struct Struct_ov031_022114fc_2;

struct Struct_ov031_022114fc {
	int unknown_0_;
	char unknown_4_[0xc];
	char unknown_10_[0xc];
	int unknown_1c_;
	char unknown_20_[4];
	int unknown_24_;
	int unknown_28_;
	int unknown_2c_;
};

// USA: func_ov031_022114fc
extern "C" ARM void func_ov031_022114fc(Struct_ov031_022114fc* arg0, int arg1) {
	VectorizedMemset(arg0, 0, 0x40);
	arg0->unknown_0_ = 0x40;
	long long var0 = func_ov031_02212d20();
	func_ov031_02211678((char*)arg0 + 4, (int)var0, (int)(var0 >> 32));
	func_ov031_02211678((char*)arg0 + 0x10, 0, 0);
	arg0->unknown_1c_ = 0;
	arg0->unknown_24_ = arg1;
	arg0->unknown_28_ = 0x41435753;
	arg0->unknown_2c_ = 0x10000;
	func_ov031_02211754((struct Struct_ov031_022114fc_2*)arg0);
}
