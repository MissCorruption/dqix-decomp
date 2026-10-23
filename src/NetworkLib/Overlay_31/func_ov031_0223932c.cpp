#include <globaldefs.h>

struct Struct_ov031_02290d18_2 { void* unknown_0_; void* unknown_4_; };
extern struct Struct_ov031_02290d18_2 data_ov031_02290d18;

// USA: func_ov031_0223932c
extern "C" ARM void func_ov031_0223932c(void* arg0) {
	data_ov031_02290d18.unknown_4_ = arg0;
	*(int*)((char*)arg0 + 0x40) = 0;
	*(int*)((char*)data_ov031_02290d18.unknown_4_ + 0x1000 + 0x3a8) = 0;
	*(int*)((char*)data_ov031_02290d18.unknown_4_ + 0x1000 + 0x3ac) = 0;
	*(int*)((char*)data_ov031_02290d18.unknown_4_ + 0x1000 + 0x3b0) = 0;
}
