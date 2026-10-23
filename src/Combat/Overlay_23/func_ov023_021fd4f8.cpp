#include <globaldefs.h>

struct Struct_ov023_021fd4f8_2 {
	char unknown_0_[0xb8];
	void (*unknown_b8_)(void*);
};

struct Struct_ov023_021fd4f8 {
	struct Struct_ov023_021fd4f8_2 *unknown_0_;
};

// USA: func_ov023_021fd4f8
extern "C" ARM void func_ov023_021fd4f8(struct Struct_ov023_021fd4f8 *arg0) {
	arg0->unknown_0_->unknown_b8_(arg0);
}
