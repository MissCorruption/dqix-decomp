#include <globaldefs.h>

struct Struct_ov031_02222fb0 { unsigned char unknown_0_[0x14]; unsigned short unknown_14_; signed char unknown_16_; };
extern Struct_ov031_02222fb0* data_ov031_02250ba8;
extern "C" void func_ov031_0223e2b8(void*, void*);
extern "C" void func_ov031_02223000(void);

// USA: func_ov031_02222fb0
extern "C" ARM void func_ov031_02222fb0(void* arg0) {
	data_ov031_02250ba8->unknown_16_ = -1;
	data_ov031_02250ba8->unknown_14_ += 1;
	if (data_ov031_02250ba8->unknown_14_ < 4) return;
	data_ov031_02250ba8->unknown_14_ = 0;
	func_ov031_0223e2b8(arg0, (void*)func_ov031_02223000);
}
