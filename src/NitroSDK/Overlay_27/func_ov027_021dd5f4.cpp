#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov027_021e3424_2 {
	char unknown_0_[4];
	void *unknown_4_;
};

extern struct Struct_ov027_021e3424_2 data_ov027_021e3424;

// USA: func_ov027_021dd5f4
extern "C" ARM void func_ov027_021dd5f4(int arg0) {
	void *var0 = data_ov027_021e3424.unknown_4_;
	if (var0 != NULL) {
		int var1 = arg0 - 1;
		VectorizedMemset((char *)var0 + (var1 << 5), 0, 0x1e);
		*(int *)((char *)data_ov027_021e3424.unknown_4_ + (var1 << 2) + 0x1e0) = 0;
	}
}
