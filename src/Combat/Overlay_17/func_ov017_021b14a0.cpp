#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

extern int data_ov017_021d83ec;

struct Struct_ov017_021b146c {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	SafeAllocator unknown_8_;
	int unknown_1c_;
	unsigned char unknown_20_[0x10];
	unsigned char unknown_30_;
	unsigned char unknown_31_;
	unsigned char unknown_32_[0x16];
	unsigned char unknown_48_;
	unsigned char unknown_49_;
	unsigned char unknown_4a_;
};

// USA: func_ov017_021b14a0
extern "C" ARM void func_ov017_021b14a0(Struct_ov017_021b146c* arg0) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x2b;
	arg0->unknown_8_.ResetAllocatorPointer();
	arg0->unknown_1c_ = 0;
	data_ov017_021d83ec = 0;
	arg0->unknown_30_ = 0;
	arg0->unknown_31_ = 0;
	arg0->unknown_48_ = 0;
	arg0->unknown_49_ = 1;
	arg0->unknown_4a_ = 0;
}
