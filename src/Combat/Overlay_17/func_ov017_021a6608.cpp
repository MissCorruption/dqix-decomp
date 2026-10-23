#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021a65c4 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	unsigned char unknown_8_;
	unsigned char unknown_9_;
	unsigned char unknown_a_;
	unsigned char unknown_b_;
	unsigned char unknown_c_;
	unsigned char unknown_d_;
	unsigned short unknown_e_;
	SafeAllocator unknown_10_;
};

// USA: func_ov017_021a6608
extern "C" ARM void func_ov017_021a6608(Struct_ov017_021a65c4* arg0) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x3d;
	arg0->unknown_8_ = 0;
	arg0->unknown_e_ = (unsigned short)(arg0->unknown_8_ - 1);
	arg0->unknown_9_ = 0;
	arg0->unknown_a_ = 0;
	arg0->unknown_b_ = 0;
	arg0->unknown_c_ = 0;
	arg0->unknown_10_.ResetAllocatorPointer();
}
