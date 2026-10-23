#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov000_02169b78(void*);

struct Struct_ov000_02184264_2 {
	unsigned char unknown_0_[8];
	SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_2 data_ov000_02184264;

struct Struct_ov000_02169e54 {
	int unknown_0_;
};

// USA: func_ov000_02169e54
extern "C" ARM int func_ov000_02169e54() {
	struct Struct_ov000_02169e54* var0 = (struct Struct_ov000_02169e54*)data_ov000_02184264.unknown_8_->Allocate(8);
	var0->unknown_0_ = 4;
	func_ov000_02169b78(var0);
	return 1;
}
