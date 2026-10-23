#include <globaldefs.h>

extern "C" int func_ov031_022070bc(int arg0);

struct Struct_ov031_022054fc {
	unsigned short unknown_0_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
};

// USA: func_ov031_022054fc
extern "C" ARM int func_ov031_022054fc(struct Struct_ov031_022054fc* arg0) {
	int var0 = func_ov031_022070bc(arg0->unknown_3_ << 2);
	int var1 = func_ov031_022070bc(arg0->unknown_0_);
	return var0 + var1;
}
