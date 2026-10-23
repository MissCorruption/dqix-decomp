#include <globaldefs.h>

struct Struct_ov031_022402b0 { unsigned char unknown_0_[8]; void* unknown_8_; };
extern struct Struct_ov031_022402b0* data_ov031_02290fdc;
extern "C" void func_ov031_02240210(void*);

// USA: func_ov031_022402b0
extern "C" ARM void func_ov031_022402b0(void) {
	struct Struct_ov031_022402b0* var0 = data_ov031_02290fdc;
	if (var0 != NULL) {
		do {
			func_ov031_02240210(var0->unknown_8_);
			var0 = data_ov031_02290fdc;
		} while (var0 != NULL);
	}
}
