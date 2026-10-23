#include <globaldefs.h>

extern "C" void func_ov031_0220572c(void* arg0, unsigned short arg1, unsigned int arg2);

struct Struct_ov031_02207230 {
	char unknown_0_[2];
	unsigned short unknown_2_;
	unsigned int unknown_4_;
};

// USA: func_ov031_02207230
extern "C" ARM void func_ov031_02207230(void* arg0, Struct_ov031_02207230* arg1) {
	unsigned short var0 = arg1->unknown_2_;
	unsigned int var1 = arg1->unknown_4_;
	unsigned short var2 = (unsigned short)(((var0 >> 8) & 0xff) | ((var0 << 8) & 0xff00));
	unsigned int var3 = ((var1 >> 24) & 0xff) | ((var1 >> 8) & 0xff00) | ((var1 << 8) & 0xff0000) | ((var1 << 24) & 0xff000000);
	func_ov031_0220572c(arg0, var2, var3);
}
