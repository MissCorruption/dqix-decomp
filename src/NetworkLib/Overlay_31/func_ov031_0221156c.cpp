#include <globaldefs.h>

extern "C" ARM int func_ov031_022115a4(int *arg0);
extern "C" unsigned int func_ov031_02211720(void *arg0);

struct Struct_ov031_0221156c {
	char unknown_0_[0x3c];
	unsigned int unknown_3c_;
};

// USA: func_ov031_0221156c
extern "C" ARM int func_ov031_0221156c(Struct_ov031_0221156c *arg0) {
	if (!func_ov031_022115a4((int*)arg0)) return 0;
	return arg0->unknown_3c_ == func_ov031_02211720(arg0);
}
