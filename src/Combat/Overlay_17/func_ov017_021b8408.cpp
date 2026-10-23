#include <globaldefs.h>

struct Struct_ov017_021a3ddc { unsigned char unknown_0_[0x6ac]; void* unknown_6ac_; };

extern "C" void func_ov000_02160b54(void*);

// USA: func_ov017_021b8408
extern "C" ARM void func_ov017_021b8408(Struct_ov017_021a3ddc* arg0) {
	void* var0 = arg0->unknown_6ac_;
	if (var0) func_ov000_02160b54(var0);
}
