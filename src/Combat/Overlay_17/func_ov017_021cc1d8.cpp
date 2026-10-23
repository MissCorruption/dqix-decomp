#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov017_021cc1d8_2 { unsigned char unknown_0_[4]; unsigned char unknown_4_; unsigned char unknown_5_[3]; int unknown_8_; };
struct Struct_ov017_021cc1d8 { unsigned char unknown_0_[0xf]; unsigned char unknown_f_; signed char unknown_10_; };

// USA: func_ov017_021cc1d8
extern "C" ARM void func_ov017_021cc1d8(int arg0, Struct_ov017_021cc1d8_2* arg1, int arg2, GameResources* arg3) {
	Struct_ov017_021cc1d8* var0 = (Struct_ov017_021cc1d8*)arg3->unknown_ptr_array_3afc[12];
	if (var0->unknown_10_ == arg1->unknown_4_) {
		var0->unknown_f_ = (unsigned char)arg1->unknown_8_;
	}
}
