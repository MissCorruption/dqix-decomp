#include <globaldefs.h>

struct Struct_ov031_0224e5c4 {
	void* unknown_0_;
	void* unknown_4_;
	void* unknown_8_;
	void* unknown_c_;
	void* unknown_10_;
};

extern Struct_ov031_0224e5c4 data_ov031_0224e5c4;

// USA: func_ov031_022133f8
extern "C" ARM void* func_ov031_022133f8(unsigned int arg0) {
	if (arg0 & 1) return data_ov031_0224e5c4.unknown_c_;
	if (arg0 & 2) return data_ov031_0224e5c4.unknown_0_;
	if (arg0 & 4) return data_ov031_0224e5c4.unknown_4_;
	if (arg0 & 8) return data_ov031_0224e5c4.unknown_8_;
	if (arg0 & 0x10) return data_ov031_0224e5c4.unknown_10_;
	return NULL;
}
