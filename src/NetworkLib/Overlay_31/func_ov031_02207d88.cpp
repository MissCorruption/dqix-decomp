#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_02207d88_2 {
	const char* unknown_0_;
};

struct Struct_ov031_02207d88 {
	char unknown_0_[0x814];
	Struct_ov031_02207d88_2** unknown_814_;
	int unknown_818_;
};

// USA: func_ov031_02207d88
extern "C" ARM Struct_ov031_02207d88_2* func_ov031_02207d88(Struct_ov031_02207d88* arg0, const char* arg1) {
	int var0 = 0;
	Struct_ov031_02207d88_2** var1;
	int var2 = arg0->unknown_818_;
	if (var2 > 0) {
		var1 = arg0->unknown_814_;
		do {
			Struct_ov031_02207d88_2* var3 = var1[var0];
			if (strcmp(var3->unknown_0_, arg1) == 0) {
				return var3;
			}
			var0++;
		} while (var0 < var2);
	}
	return 0;
}
