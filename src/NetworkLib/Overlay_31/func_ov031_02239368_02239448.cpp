#include <globaldefs.h>

struct Struct_ov031_02290d18_6 { void* unknown_0_; void* unknown_4_; };
extern struct Struct_ov031_02290d18_6 data_ov031_02290d18;

extern "C" void func_ov031_022393e4(int arg0);
extern "C" ARM void func_ov031_02239368(int arg0);
extern "C" int func_ov031_022394b4(void);
extern "C" int func_ov031_02239550(void);

// USA: func_ov031_02239448
extern "C" ARM void func_ov031_02239448(unsigned short* arg0) {
	unsigned short var0 = arg0[1];
	if (var0 != 0) {
		func_ov031_022393e4(var0);
		func_ov031_02239368(9);
		return;
	}
	if (*(int*)((char*)data_ov031_02290d18.unknown_4_ + 0x1000 + 0x3ac) != 0) {
		if (func_ov031_022394b4() == 0) {
			func_ov031_02239368(9);
		}
		return;
	}
	if (func_ov031_02239550() == 0) {
		func_ov031_02239368(9);
	}
}
