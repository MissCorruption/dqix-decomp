#include <globaldefs.h>

extern "C" void func_ov031_0223e2c0(int arg0, void* arg1);
extern "C" void func_ov031_0223ba20(int arg0);

struct Struct_ov031_02226d48;
extern "C" void func_ov031_0223c534(Struct_ov031_02226d48* arg0);

struct Struct_ov031_0223da58;
extern "C" int func_ov031_0223da58(Struct_ov031_0223da58* arg0);

extern "C" unsigned int func_ov031_0223cf70(void** arg0);

struct Struct_ov031_022257d4 {
	Struct_ov031_02226d48* unknown_0_[3][4];
	Struct_ov031_0223da58* unknown_30_[0x2f];
	Struct_ov031_0223da58* unknown_ec_[4];
	int unknown_fc_[2];
	int unknown_104_[4];
};

extern "C" Struct_ov031_022257d4* data_ov031_02250bfc;
namespace DuplicatePool {
	extern "C" Struct_ov031_022257d4* data_ov031_02250bfc;
}

// USA: func_ov031_022257d4
extern "C" ARM void func_ov031_022257d4(void* arg0) {
	int var0;
	int var1;

	func_ov031_0223e2c0(0, arg0);

	for (var0 = 0; var0 < 3; var0++) {
		for (var1 = 0; var1 < 4; var1++) {
			func_ov031_0223c534(data_ov031_02250bfc->unknown_0_[var0][var1]);
			if (var0 == 0) {
				func_ov031_0223ba20(data_ov031_02250bfc->unknown_104_[var1]);
			}
		}
	}

	for (var0 = 0; var0 < 2; var0++) {
		func_ov031_0223ba20(data_ov031_02250bfc->unknown_fc_[var0]);
	}

	for (var0 = 0; var0 < 4; var0++) {
		func_ov031_0223da58(data_ov031_02250bfc->unknown_ec_[var0]);
	}

	for (var0 = 0; var0 < 0x2f; var0++) {
		func_ov031_0223da58(data_ov031_02250bfc->unknown_30_[var0]);
	}

	func_ov031_0223cf70((void**)&DuplicatePool::data_ov031_02250bfc);
}
