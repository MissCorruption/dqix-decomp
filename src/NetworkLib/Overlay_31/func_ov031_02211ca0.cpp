#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02211ca0_2 {
	int unknown_0_;
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	unsigned short unknown_8_;
	unsigned short unknown_a_;
};

struct Struct_ov031_0224e5b4_3 {
	char unknown_0_[4];
	Struct_ov031_02211ca0_2* unknown_4_;
};

extern Struct_ov031_0224e5b4_3 data_ov031_0224e5b4;

extern "C" void func_ov031_02211b08(int arg0, int arg1);
extern "C" int func_ov031_02212d40(void* arg0);
extern "C" void* func_ov031_02211b54(void*, void*);
extern "C" void func_ov031_02211b98(void*, void*);

struct Struct_ov031_02211ca0 {
	void* (*unknown_0_)(void*, void*);
	void (*unknown_4_)(void*, void*);
	unsigned char unknown_8_;
	unsigned char unknown_9_;
	unsigned char unknown_a_[2];
};

// USA: func_ov031_02211ca0
extern "C" ARM void func_ov031_02211ca0(void) {
	Struct_ov031_02211ca0_2* var0 = data_ov031_0224e5b4.unknown_4_;
	if (var0 != 0) {
		if (var0->unknown_4_ == 1) {
			Struct_ov031_02211ca0 var1;
			VectorizedMemset(&var1, 0, 0xc);

			var0 = data_ov031_0224e5b4.unknown_4_;
			var1.unknown_8_ = (unsigned char)var0->unknown_8_;
			var1.unknown_9_ = (unsigned char)var0->unknown_a_;
			var1.unknown_0_ = func_ov031_02211b54;
			var1.unknown_4_ = func_ov031_02211b98;
			var0->unknown_4_ = 2;

			if (func_ov031_02212d40(&var1) == 0) {
				func_ov031_02211b08(9, 0xffff3be9);
			}
		}
	} else {
		func_ov031_02211b08(9, 0xffff3be9);
	}
}
