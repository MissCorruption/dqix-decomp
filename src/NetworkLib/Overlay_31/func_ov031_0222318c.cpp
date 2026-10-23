#include <globaldefs.h>

struct Struct_ov031_02222f44_2;
extern "C" void func_ov031_0223bd28(Struct_ov031_02222f44_2*, int, unsigned int*, unsigned int*);
extern "C" void func_ov031_02222eb0(void*);
extern "C" void func_ov031_0223e2b8(void*, void*);
extern "C" void func_ov031_022231f0(int);

struct Struct_ov031_0222318c { int unknown_0_[1]; unsigned char unknown_4_[19]; unsigned char unknown_17_; };
extern Struct_ov031_0222318c* data_ov031_02250ba8;

// USA: func_ov031_0222318c
extern "C" ARM void func_ov031_0222318c(void* arg0) {
	unsigned int var0, var1;
	Struct_ov031_0222318c* var2 = data_ov031_02250ba8;
	func_ov031_0223bd28((Struct_ov031_02222f44_2*)var2->unknown_0_[2], 0, &var0, &var1);
	var1 += 4;
	func_ov031_02222eb0((void*)var1);
	if ((int)var1 < 0xc0) return;
	func_ov031_0223e2b8(arg0, (void*)func_ov031_022231f0);
}
