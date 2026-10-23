#include <globaldefs.h>

extern "C" void func_ov031_0223dcf4(void*);
extern "C" void func_ov031_0223bf48(void*, void*);
extern void* data_ov031_02290d38;

struct Struct_ov031_02226d48 {
	char unknown_0_[0x28];
	void* unknown_28_;
};

// USA: func_ov031_0223c534
extern "C" ARM void func_ov031_0223c534(Struct_ov031_02226d48* arg0) {
	func_ov031_0223dcf4(arg0->unknown_28_);
	void* var0 = *(void**)((char*)data_ov031_02290d38 + 0x670);
	func_ov031_0223bf48(var0, arg0);
}
