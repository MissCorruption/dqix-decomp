#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_0224e540_5 { char unknown_0_[0x24]; int unknown_24_; };
extern struct Struct_ov031_0224e540_5 data_ov031_0224e540;
extern struct BlockedContextList data_ov031_0224e544;
extern "C" void func_ov031_0220dab4(void);

struct Struct_ov031_0220f28c { unsigned short unknown_0_; unsigned short unknown_2_; };

// USA: func_ov031_0220f28c
extern "C" ARM void func_ov031_0220f28c(struct Struct_ov031_0220f28c* arg0) {
	if (arg0->unknown_0_ != 0x12) return;
	data_ov031_0224e540.unknown_24_ = arg0->unknown_2_;
	if (arg0->unknown_2_ == 0) {
		func_ov031_0220dab4();
	}
	UnblockContexts(&data_ov031_0224e544);
}
