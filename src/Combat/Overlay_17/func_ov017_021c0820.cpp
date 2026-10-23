#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov017_021c07d0(void* arg0);

struct Struct_ov017_021c0580 {
	unsigned char unknown_0_[8];
	SafeAllocator unknown_8_;
	int unknown_1c_;
	int unknown_20_;
	unsigned char unknown_24_;
	unsigned char unknown_25_[0xbc - 0x25];
	unsigned char unknown_bc_;
};

// USA: func_ov017_021c0820
extern "C" ARM void func_ov017_021c0820(Struct_ov017_021c0580* arg0) {
	func_ov017_021c07d0(arg0);
	arg0->unknown_20_ = 0;
	arg0->unknown_24_ = 0;
	arg0->unknown_1c_ = 0;
	arg0->unknown_8_.ResetAllocatorPointer();
	arg0->unknown_bc_ = 0;
}
