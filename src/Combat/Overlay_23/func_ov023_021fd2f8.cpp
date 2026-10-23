#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

struct S_021fd2f8 { char pad[0x1c]; int val; };

// USA: func_ov023_021fd2f8
extern "C" ARM int func_ov023_021fd2f8(struct S_021fd2f8* s) {
	if (func_02094b4c(func_02094a00()) != 0) return 2;
	return s->val;
}
