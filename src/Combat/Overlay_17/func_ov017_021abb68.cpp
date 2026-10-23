#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021ab860 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	unsigned char unknown_8_;
	unsigned char unknown_9_;
	unsigned short unknown_a_;
	unsigned char unknown_c_;
	unsigned char unknown_d_;
	unsigned char unknown_e_[2];
	SafeAllocator unknown_10_;
	int unknown_24_;
};

// USA: func_ov017_021abb68
extern "C" ARM void func_ov017_021abb68(Struct_ov017_021ab860* arg0, unsigned char arg1) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x1c;
	arg0->unknown_8_ = 0;
	arg0->unknown_a_ = 0;
	arg0->unknown_c_ = arg1;
	arg0->unknown_24_ = -1;
	arg0->unknown_d_ = 0;
	arg0->unknown_10_.ResetAllocatorPointer();
}
