#include <globaldefs.h>

struct Struct_ov031_0224e5c4_7 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
	unsigned int unknown_8_;
	void* unknown_c_;
};

extern Struct_ov031_0224e5c4_7 data_ov031_0224e5c4;

// USA: func_ov031_022134f0
extern "C" ARM void* func_ov031_022134f0(void) {
	return *(void**)((char*)data_ov031_0224e5c4.unknown_c_ + 0xc);
}
