#include <globaldefs.h>

extern "C" int func_ov000_0215e958(int arg0);
extern "C" void func_ov000_0215a88c(void* arg0, void* arg1, int arg2);
extern "C" void func_ov000_0215ffc4(void* arg0, void* arg1, int arg2);

struct Struct_ov024_021e2bd0 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };

// USA: func_ov024_021e8ca0
extern "C" ARM void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1) {
	void* var0 = (void*)func_ov000_0215e958((int)arg0->unknown_10_);
	if (!var0) return 0;
	func_ov000_0215a88c(arg0->unknown_10_, var0, arg1);
	func_ov000_0215ffc4(arg0->unknown_c_, var0, 1);
	((unsigned char*)arg0->unknown_10_)[0x8e02] = ((unsigned char*)arg0->unknown_10_)[0x8e02] + 1;
	return var0;
}
