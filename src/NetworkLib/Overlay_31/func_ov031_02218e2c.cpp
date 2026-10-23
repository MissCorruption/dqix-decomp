#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_02218e2c_2 {
	const char* unknown_0_;
	void* unknown_4_;
};

struct Struct_ov031_02218e2c {
	unsigned char unknown_0_[0x1a38];
	Struct_ov031_02218e2c_2 unknown_1a38_[0x20];
};

// USA: func_ov031_02218e2c
extern "C" ARM void* func_ov031_02218e2c(void* arg0, const char* arg1) {
	Struct_ov031_02218e2c* var0 = (Struct_ov031_02218e2c*)arg0;
	for (int var1 = 0; var1 < 0x20; var1++) {
		if (var0->unknown_1a38_[var1].unknown_0_ == NULL) break;
		if (strcmp(arg1, var0->unknown_1a38_[var1].unknown_0_) == 0) {
			return var0->unknown_1a38_[var1].unknown_4_;
		}
	}
	return NULL;
}
