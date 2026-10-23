#include <globaldefs.h>

struct Struct_ov014_021893e4_2 {
	unsigned short unknown_0_;
	int unknown_4_;
	int unknown_8_;
	int* unknown_c_;
};

struct Struct_ov014_021893e4 {
	short unknown_0_;
	unsigned short unknown_2_0_ : 12;
};

// USA: func_ov014_021893e4
extern "C" ARM int* func_ov014_021893e4(struct Struct_ov014_021893e4_2* arg0, struct Struct_ov014_021893e4* arg1) {
	if (!arg1) return NULL;
	return arg0->unknown_c_ + arg0->unknown_0_ + arg1->unknown_2_0_;
}
