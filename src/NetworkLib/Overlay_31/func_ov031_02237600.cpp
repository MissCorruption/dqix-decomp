#include <globaldefs.h>

extern "C" ARM int func_020d4848(void* arg0);
extern "C" ARM int func_020d5004(int arg0);
extern "C" ARM int func_020d503c(int arg0);
extern "C" ARM int func_ov031_0223e2e0(int arg0, void* arg1);
extern "C" ARM unsigned int func_ov031_0223cf70(void** arg0);
extern "C" void func_ov031_022376fc(void);

struct Struct_ov031_02237600 {
	unsigned char unknown_0_[0x13b8];
	unsigned short unknown_13b8_;
	unsigned char unknown_13ba_[0x1b90 - 0x13ba];
	void* unknown_1b90_;
	volatile unsigned char unknown_1b94_;
};

extern "C" Struct_ov031_02237600* data_ov031_02290d0c;
namespace DuplicatePool {
	extern "C" Struct_ov031_02237600* data_ov031_02290d0c;
}

// USA: func_ov031_02237600
extern "C" ARM int func_ov031_02237600(void) {
	data_ov031_02290d0c->unknown_1b94_ = 1;
	func_020d4848(&data_ov031_02290d0c->unknown_13b8_);

	if (data_ov031_02290d0c->unknown_13b8_ != 2) {
		if (func_020d5004((int)func_ov031_022376fc) != 2) {
			return 0;
		}
		do {
			func_020d4848(&data_ov031_02290d0c->unknown_13b8_);
		} while (data_ov031_02290d0c->unknown_13b8_ != 2);
	}

	if (func_020d503c((int)func_ov031_022376fc) != 2) {
		return 0;
	}

	if (data_ov031_02290d0c->unknown_1b90_ != 0) {
		func_ov031_0223e2e0(0, data_ov031_02290d0c->unknown_1b90_);
	}

	Struct_ov031_02237600* var0 = data_ov031_02290d0c;
	while (var0->unknown_1b94_ != 2) {
	}

	func_ov031_0223cf70((void**)&DuplicatePool::data_ov031_02290d0c);
	return 1;
}
