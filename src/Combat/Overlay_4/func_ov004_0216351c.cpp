#include <globaldefs.h>

struct ShortPairSrc0216351c { char pad[0x5c]; short a; short b; };

// USA: func_ov004_0216351c
extern "C" ARM void func_ov004_0216351c(ShortPairSrc0216351c* src, short* out1, short* out2) {
	*out1 = src->a;
	*out2 = src->b;
}
