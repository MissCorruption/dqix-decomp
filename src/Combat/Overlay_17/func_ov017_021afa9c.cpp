#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021a3ddc(void* arg0, void* arg1);

struct Struct_ov017_021a3ddc_3 { char unknown_0_[4]; void* unknown_4_; };

// USA: func_ov017_021afa9c
extern "C" ARM void func_ov017_021afa9c(Struct_ov017_021a3ddc_3* arg0) {
	void* var0 = *(void**)((char*)GetGameResources()
#if defined(jpn)
        + 0x34f0
#else
        + 0x3700
#endif
);
	func_ov017_021a3ddc(var0, arg0->unknown_4_);
}
