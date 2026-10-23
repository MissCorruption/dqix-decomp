#include <globaldefs.h>

struct Struct_ov001_0215758c_2 {
	int unknown_0_, unknown_4_, unknown_8_;
};

struct Struct_ov001_02158348 {
	int unknown_0_;
	struct Struct_ov001_0215758c_2 unknown_4_;
	struct Struct_ov001_0215758c_2 unknown_10_;
};

struct Struct_ov001_0215758c;
extern "C" int func_ov001_0215758c(struct Struct_ov001_0215758c* arg0, struct Struct_ov001_0215758c_2 arg1, struct Struct_ov001_0215758c_2 arg2);

// USA: func_ov001_02158348
extern "C" ARM int func_ov001_02158348(struct Struct_ov001_02158348* arg0, char* arg1) {
	func_ov001_0215758c((struct Struct_ov001_0215758c*)(arg1 + 0x15c), arg0->unknown_4_, arg0->unknown_10_);
	return 0;
}
