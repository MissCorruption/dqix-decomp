#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021b65e0 {
	unsigned char unknown_0_;
	char unknown_1_[0x8 - 0x1];
	SafeAllocator unknown_8_;
	char unknown_1c_[0x1c - 0x8 - sizeof(SafeAllocator)];
	unsigned char unknown1_1c_;
	unsigned char unknown_1d_;
	unsigned char unknown_1e_;
	unsigned char unknown_1f_;
	unsigned char unknown_20_;
	char unknown_21_[0x24 - 0x21];
	int unknown_24_;
};

// USA: func_ov017_021b6790
extern "C" ARM void func_ov017_021b6790(Struct_ov017_021b65e0* arg0) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x17;
	arg0->unknown_24_ = 0;
	arg0->unknown_1f_ = 0;
	arg0->unknown1_1c_ = 0;
	arg0->unknown_8_.ResetAllocatorPointer();
	arg0->unknown_1d_ = 0;
	arg0->unknown_1e_ = 0xff;
	arg0->unknown_20_ = arg0->unknown_1e_ - 0x100;
}
