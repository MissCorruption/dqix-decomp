#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov017_021d23ec_2 { unsigned char unknown_0_[4]; unsigned short unknown_4_; };
struct Struct_ov017_021d23ec { unsigned char unknown_0_[0x24]; unsigned short unknown_24_; };

// USA: func_ov017_021d23ec
extern "C" ARM void func_ov017_021d23ec(int arg0, Struct_ov017_021d23ec_2* arg1, int arg2, GameResources* arg3) {
	Struct_ov017_021d23ec* var0 = (Struct_ov017_021d23ec*)arg3->unknown_ptr_array_36fc[4];
	var0->unknown_24_ = arg1->unknown_4_;
}
