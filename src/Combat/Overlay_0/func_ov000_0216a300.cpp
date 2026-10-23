#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern "C" void func_ov000_02169b78(void*);

struct Struct_ov000_02184264_8 {
	unsigned char unknown_0_[8];
	SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_8 data_ov000_02184264;

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_ov000_0216a300 {
	int unknown_0_;
	int unknown_4_;
	unsigned short unknown_8_;
};

// USA: func_ov000_0216a300
extern "C" ARM int func_ov000_0216a300(struct Struct_0201c1c8* arg0) {
	struct Struct_ov000_0216a300* var0 = (struct Struct_ov000_0216a300*)data_ov000_02184264.unknown_8_->Allocate(0xc);
	var0->unknown_0_ = 0xa;
	var0->unknown_8_ = (unsigned short)((Script::Parameter*)arg0)->ToInt();
	if (var0->unknown_8_ != 0) {
		func_ov000_02169b78(var0);
	}
	return 1;
}
