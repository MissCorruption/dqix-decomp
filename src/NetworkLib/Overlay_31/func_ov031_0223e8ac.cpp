#include <globaldefs.h>

struct Struct_ov031_02290da0_4 { void* unknown_0_; char unknown_4_[0x10]; int unknown_14_; };
extern struct Struct_ov031_02290da0_4 data_ov031_02290da0;
extern "C" int func_ov031_0223fd9c(void*);
extern "C" void func_ov031_0223e868(void);

// USA: func_ov031_0223e8ac
extern "C" ARM int func_ov031_0223e8ac(void* arg0) {
	data_ov031_02290da0.unknown_14_ = 0;
	data_ov031_02290da0.unknown_0_ = arg0;
	return func_ov031_0223fd9c((void*)func_ov031_0223e868);
}
