#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern "C" void func_ov000_02169b78(void*);

struct Struct_ov000_02184264_7 {
	unsigned char unknown_0_[8];
	SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_7 data_ov000_02184264;

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_ov000_0216a1a4 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
	unsigned char unknown_c_;
};

// USA: func_ov000_0216a1a4
extern "C" ARM int func_ov000_0216a1a4(struct Struct_0201c1c8* arg0, int arg1) {
	struct Struct_ov000_0216a1a4* var0 = (struct Struct_ov000_0216a1a4*)data_ov000_02184264.unknown_8_->Allocate(0x10);
	var0->unknown_0_ = 8;
	var0->unknown_8_ = ((Script::Parameter*)arg0)->ToInt();
	var0->unknown_c_ = 0;
	if (arg1 >= 2) {
		var0->unknown_c_ = (unsigned char)((Script::Parameter*)(arg0 + 1))->ToInt();
	}
	func_ov000_02169b78(var0);
	return 1;
}
