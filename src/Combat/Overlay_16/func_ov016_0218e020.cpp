#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_ov016_0218e020 {
	unsigned int unknown_0_[6]; // 0x0..0x17
	struct Struct_ov016_0218e020* unknown_18_; // 0x18
};

struct Struct_ov016_0218de60 {
	struct Struct_ov016_0218e020* unknown_0_; // 0x0
	unsigned int unknown_4_;             // 0x4
	SafeAllocator* unknown_8_;       // 0x8
};

// USA: func_ov016_0218e020
extern "C" ARM void func_ov016_0218e020(Struct_ov016_0218de60* arg0, void* arg1) {
	if (arg0->unknown_8_ == NULL)
		return;
	struct Struct_ov016_0218e020* var0 = (struct Struct_ov016_0218e020*)arg0->unknown_8_->Allocate(0x1c);
	if (var0 == NULL)
		return;
	memcpy(var0, arg1, 0x1c);
	var0->unknown_18_ = NULL;
	{
		struct Struct_ov016_0218e020* var1 = arg0->unknown_0_;
		struct Struct_ov016_0218e020* var2;
		if (var1 == NULL)
			goto setHead;
		goto testFirst;
	advance:
		var1 = var2;
	testFirst:
		var2 = var1->unknown_18_;
		if (var2 != NULL)
			goto advance;
		var1->unknown_18_ = var0;
		goto after;
	setHead:
		arg0->unknown_0_ = var0;
	after:
		;
	}
	arg0->unknown_4_++;
}
