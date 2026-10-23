#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov027_021d96c4 {
	unsigned char unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
};

extern "C" void *func_ov027_021dd638(struct Struct_ov027_021d96c4 *arg0, void *arg1);
extern "C" void func_ov027_021dab00(int arg0, int arg1, void *arg2);

struct Struct_ov027_021e33ec_3 {
	void *unknown_0_;
};

extern struct Struct_ov027_021e33ec_3 data_ov027_021e33ec;

// USA: func_ov027_021d96c4
extern "C" ARM void func_ov027_021d96c4(unsigned char arg0, int arg1) {
	struct Struct_ov027_021d96c4 var0;
	var0.unknown_0_ = arg0;
	func_ov027_021dd638(&var0, data_ov027_021e33ec.unknown_0_);
	func_ov027_021dab00(6, arg1, data_ov027_021e33ec.unknown_0_);
}
