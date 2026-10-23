#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov024_021f6830 { int unknown_0_; float unknown_4_; int unknown_8_; };

// USA: func_ov024_021f6830
extern "C" ARM void func_ov024_021f6830(struct Struct_ov024_021f6830* arg0, struct Struct_ov024_021f6830* arg1) {
	if (arg1->unknown_4_ < arg0[3].unknown_4_) return;
	int var0;
	for (var0 = 0; var0 < 4; var0++) {
		if (arg1->unknown_4_ > arg0[var0].unknown_4_) {
			int var1;
			for (var1 = 2; var1 >= var0; var1--) {
				memcpy(&arg0[var0 + 1], &arg0[var0], 0xc);
			}
			memcpy(&arg0[var0], arg1, 0xc);
			return;
		}
	}
}
