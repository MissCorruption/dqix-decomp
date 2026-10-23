#include <globaldefs.h>

extern "C" void (*data_ov031_02290fc8)(void*);
extern "C" void func_ov031_02240e70(void*);

struct Struct_ov031_0223edb4 {
	char unknown_0_[0x30];
	void* unknown_30_;
};

// USA: func_ov031_02240df4
extern "C" ARM void func_ov031_02240df4(struct Struct_ov031_0223edb4* arg0) {
	data_ov031_02290fc8(arg0->unknown_30_);
	func_ov031_02240e70(arg0);
}
