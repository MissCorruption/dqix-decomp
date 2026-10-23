#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021c0334 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	SafeAllocator unknown_8_;
	int unknown_1c_;
	int unknown_20_;
	unsigned char unknown_24_;
};

// USA: func_ov017_021c0334
extern "C" ARM void func_ov017_021c0334(Struct_ov017_021c0334* arg0) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x28;
	arg0->unknown_8_.ResetAllocatorPointer();
	arg0->unknown_1c_ = 0;
	arg0->unknown_20_ = 0;
	arg0->unknown_24_ = 0;
}
