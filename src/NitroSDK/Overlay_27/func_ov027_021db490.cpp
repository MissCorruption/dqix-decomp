#include <globaldefs.h>

extern "C" void* func_ov027_021db524(void);
extern "C" void* func_020d472c(void* arg0);
extern "C" void func_ov027_021dd0cc(int arg0, int arg1);
extern "C" int func_020d6ad4(int arg0, int arg1, int arg2, int arg3, unsigned short arg4);

struct Struct_ov027_021dd8ec_2 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
	unsigned short unknown_6_;
};

extern Struct_ov027_021dd8ec_2 data_ov027_021dd8ec;

// USA: func_ov027_021db490
extern "C" ARM void func_ov027_021db490(void) {
	void* var0 = func_020d472c((void*)func_ov027_021db524);
	func_ov027_021dd0cc(0x80, (int)var0);
	int var1 = func_020d6ad4((int)func_ov027_021db524, data_ov027_021dd8ec.unknown_6_, data_ov027_021dd8ec.unknown_2_, data_ov027_021dd8ec.unknown_0_, data_ov027_021dd8ec.unknown_4_);
	func_ov027_021dd0cc(0x1d, var1);
}
