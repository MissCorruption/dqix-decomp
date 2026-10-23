#include <globaldefs.h>

struct Struct_ov014_02189380 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	int unknown_4_;
	int unknown_8_;
	int* unknown_c_;
};

// USA: func_ov014_02189380
extern "C" ARM int* func_ov014_02189380(struct Struct_ov014_02189380* arg0) {
	return arg0->unknown_c_ + arg0->unknown_0_ + arg0->unknown_2_;
}
