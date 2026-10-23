#include <globaldefs.h>

struct Struct_ov031_02239250 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned char unknown_4_[8]; unsigned short unknown_c_; };
extern struct Struct_ov031_02239250* data_ov031_02290d14;

// USA: func_ov031_02239250
extern "C" ARM void* func_ov031_02239250(int arg0) {
	struct Struct_ov031_02239250* var0 = data_ov031_02290d14;
	if (!(var0->unknown_2_ & (1 << arg0))) return NULL;
	return (char*)var0 + 0xe + (arg0 - 1) * 0x1e;
}
