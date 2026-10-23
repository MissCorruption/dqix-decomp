#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_02061c04_8 { unsigned char unknown_0_; unsigned char unknown_1_[7]; unsigned char unknown_8_[8]; unsigned char unknown_10_; unsigned char unknown_11_; unsigned short unknown_12_; };

// USA: func_ov017_021aa16c
extern "C" ARM void func_ov017_021aa16c(Struct_02061c04_8* arg0) {
	GetGameResources();
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x3c;
	memset(arg0->unknown_8_, arg0->unknown_0_ - 0x3d, 8);
	arg0->unknown_10_ = 0;
	arg0->unknown_11_ = 0;
	arg0->unknown_12_ = 0;
}
