#include <globaldefs.h>

struct Struct_ov017_021a3b40 { unsigned char unknown_0_[0x20]; void* unknown_20_; };

extern "C" void func_ov008_02189404(void*);

// USA: func_ov017_021a9998
extern "C" ARM void func_ov017_021a9998(Struct_ov017_021a3b40* arg0) {
	void* var0 = arg0->unknown_20_;
	if (var0) func_ov008_02189404(var0);
}
