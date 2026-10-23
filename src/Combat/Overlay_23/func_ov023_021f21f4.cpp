#include <globaldefs.h>

struct Struct_ov023_021f1868_10 { char unknown_0_[0x60]; int unknown_60_; int unknown_64_; };

// USA: func_ov023_021f21f4
extern "C" ARM int func_ov023_021f21f4(struct Struct_ov023_021f1868_10* arg0) {
	int var0 = arg0->unknown_60_ == -1;
	int var1 = arg0->unknown_64_ == -1;
	return (var0 & var1) != 0;
}
