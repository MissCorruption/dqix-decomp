#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov017_021a4368_2;
extern "C" void func_ov017_021a4368(void *arg0, Struct_ov017_021a4368_2* arg1);
extern "C" void func_020439b0(int arg0, int arg1);
extern "C" int func_020421a0();

struct Struct_ov017_021a4368_4 { char unknown_0_[4]; Struct_ov017_021a4368_2* unknown_4_; };

// USA: func_ov017_021afabc
extern "C" ARM void func_ov017_021afabc(Struct_ov017_021a4368_4 *arg0) {
	GameResources *var0 = GetGameResources();
	void *var1 = var0->unknown_ptr_array_36fc[1];
	func_ov017_021a4368(var1, arg0->unknown_4_);
	func_020439b0(func_020421a0(), 0);
}
