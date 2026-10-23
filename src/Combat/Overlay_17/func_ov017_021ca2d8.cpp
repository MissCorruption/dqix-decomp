#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov017_021ca2d8 { unsigned char unknown_0_[4]; unsigned short unknown_4_; unsigned short unknown_6_; };

struct Struct_ov017_021b88d0_3;
extern "C" void func_ov017_021b88d0(Struct_ov017_021b88d0_3*, int arg1, int arg2);

// USA: func_ov017_021ca2d8
extern "C" ARM void func_ov017_021ca2d8(int arg0, Struct_ov017_021ca2d8* arg1, int arg2, GameResources* arg3) {
	Struct_ov017_021b88d0_3* var0 = (Struct_ov017_021b88d0_3*)arg3->unknown_ptr_3718;
	func_ov017_021b88d0(var0, arg1->unknown_4_, arg1->unknown_6_);
}
