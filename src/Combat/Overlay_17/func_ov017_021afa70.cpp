#include <globaldefs.h>

#include "Resource/GameResources.h"

extern "C" void func_ov017_021a3b40(void *arg0, int arg1);
extern "C" void func_0205c96c(void *arg0, int arg1);

struct Struct_ov017_021a3b40_3 { char unknown_0_[4]; int unknown_4_; };

// USA: func_ov017_021afa70
extern "C" ARM void func_ov017_021afa70(Struct_ov017_021a3b40_3 *arg0) {
	GameResources *var0 = GetGameResources();
	void *var1 = *(void **)((char *)var0 + 0x3000
#if defined(jpn)
        + 0x4f0
#else
        + 0x700
#endif
);
	func_ov017_021a3b40(var1, arg0->unknown_4_);
	func_0205c96c((char *)arg0 + 0x48, 0);
}
