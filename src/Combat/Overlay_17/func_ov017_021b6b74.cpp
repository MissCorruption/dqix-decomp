#include <globaldefs.h>

struct Struct_ov017_021a4368_3 { unsigned char unknown_0_[0x24]; void* unknown_24_; };

extern "C" void func_ov003_02160240(void*);

// USA: func_ov017_021b6b74
extern "C" ARM void func_ov017_021b6b74(Struct_ov017_021a4368_3* arg0) {
	void* var0 = arg0->unknown_24_;
	if (var0) func_ov003_02160240(var0);
}
