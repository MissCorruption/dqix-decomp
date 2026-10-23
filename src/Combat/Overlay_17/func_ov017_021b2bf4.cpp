#include <globaldefs.h>

struct S021b2bf4 {
	unsigned char pad[0x38];
	union {
		unsigned int word038;
		struct {
			unsigned int b0_2 : 3;
			unsigned int bit3 : 1;
			unsigned int bit4 : 1;
			unsigned int bit5 : 1;
			unsigned int rest : 26;
		} bits;
	};
};

// USA: func_ov017_021b2bf4
extern "C" ARM void func_ov017_021b2bf4(S021b2bf4* obj, unsigned int v) {
	obj->bits.bit4 = v;
}
