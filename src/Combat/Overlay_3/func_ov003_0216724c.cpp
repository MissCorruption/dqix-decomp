#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov003_0216724c {
	void* unknown_0_;
	SafeAllocator* unknown_4_;
};

struct Struct_ov003_0217f4e4 { unsigned int unknown_0_[3]; };
extern struct Struct_ov003_0217f4e4 data_ov003_0217f4e4;

// USA: func_ov003_0216724c
extern "C" ARM void func_ov003_0216724c(struct Struct_ov003_0216724c* arg0, SafeAllocator* arg1) {
	int var0;
	struct Struct_ov003_0217f4e4 var1;
	if (arg1 == NULL) return;
	arg0->unknown_4_ = (SafeAllocator*)arg1->Allocate(0x3c);
	var1 = data_ov003_0217f4e4;
	for (var0 = 0; var0 < 3; var0++) {
		unsigned int var2 = var1.unknown_0_[var0];
		void* var3 = arg1->Allocate(var2);
		arg0->unknown_4_[var0].CreateTypeA(var3, var2);
	}
	if (arg0->unknown_0_ == NULL) {
		arg0->unknown_0_ = arg1->Allocate(0x4000);
	}
}
