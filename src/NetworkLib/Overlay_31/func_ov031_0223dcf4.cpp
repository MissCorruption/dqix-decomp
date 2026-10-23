#include <globaldefs.h>

extern "C" void func_ov031_0223d8a0(void);
extern "C" void func_ov031_0223bf48(void* arg0, int arg1);

struct Struct_ov031_0223dcf4 { unsigned char unknown_0_[0x19c]; void* unknown_19c_; };
extern struct Struct_ov031_0223dcf4* data_ov031_02290d64;

// USA: func_ov031_0223dcf4
extern "C" ARM void func_ov031_0223dcf4(int arg0) {
	int var0 = 0;
	func_ov031_0223d8a0();
	if ((unsigned int)arg0 >= (unsigned int)&data_ov031_02290d64[1]) {
		var0 = 1;
	}
	func_ov031_0223bf48(data_ov031_02290d64[var0].unknown_19c_, arg0);
}
