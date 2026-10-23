#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

struct Struct_ov023_021fd2f8 { char unknown_0_[0x1c]; int unknown_1c_; };

// USA: func_ov023_021fd2f8
extern "C" ARM int func_ov023_021fd2f8(struct Struct_ov023_021fd2f8* arg0) {
	if (func_02094b4c(func_02094a00()) != 0) return 2;
	return arg0->unknown_1c_;
}
