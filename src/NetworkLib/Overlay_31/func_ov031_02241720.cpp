#include <globaldefs.h>

extern "C" void (* volatile data_ov031_02290fc8)(void*);

struct Struct_ov031_02241720 {
	char unknown_0_[0x800];
	void* unknown_800_;
};

// USA: func_ov031_02241720
extern "C" ARM void func_ov031_02241720(Struct_ov031_02241720* arg0) {
	if (!arg0) return;
	if (arg0->unknown_800_)
		data_ov031_02290fc8(arg0->unknown_800_);
	data_ov031_02290fc8(arg0);
}
