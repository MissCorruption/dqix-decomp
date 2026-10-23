#include <globaldefs.h>

struct S021b1454 { unsigned char pad[0xa]; unsigned char byteA; };

// USA: func_ov017_021b1454
extern "C" ARM void func_ov017_021b1454(S021b1454* obj, int bit) {
	obj->byteA &= ~(1 << bit);
}
