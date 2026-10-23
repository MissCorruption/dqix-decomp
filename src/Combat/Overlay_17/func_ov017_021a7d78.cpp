#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021a7c94 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	SafeAllocator unknown_8_;
	int unknown_1c_;
	int unknown_20_;
	int unknown_24_;
	int unknown_28_;
	int unknown_2c_;
	short unknown_30_;
	short unknown_32_;
	int unknown_34_;
	short unknown_38_;
	short unknown_3a_;
	int unknown_3c_;
	int unknown_40_;
	int unknown_44_;
	int unknown_48_;
	int unknown_4c_;
};

// USA: func_ov017_021a7d78
extern "C" ARM void func_ov017_021a7d78(Struct_ov017_021a7c94* arg0) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x41;
	arg0->unknown_8_.ResetAllocatorPointer();
	arg0->unknown_1c_ = 0;
	arg0->unknown_20_ = 0;
	arg0->unknown_24_ = 0;
	arg0->unknown_28_ = -1;
	arg0->unknown_2c_ = 0;
	arg0->unknown_30_ = -1;
	arg0->unknown_34_ = -1;
	arg0->unknown_38_ = 0;
	arg0->unknown_3a_ = 0;
#if !defined(jpn)
	arg0->unknown_3c_ = 0;
	arg0->unknown_40_ = 0;
	arg0->unknown_44_ = 0;
	arg0->unknown_48_ = 0;
	arg0->unknown_4c_ = 0;
#endif
}
