#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" void* func_ov031_022127a8(void* arg0);

struct Struct_ov031_022128b8 {
	char unknown_0_[4];
	void (*unknown_4_)(void);
	char unknown_8_[0x9c0 - 8];
	ProcessorContext unknown_9c0_;
};

extern Struct_ov031_022128b8* data_ov031_0224e5c0;

// USA: func_ov031_022128b8
extern "C" ARM void func_ov031_022128b8(void) {
	AwaitContextCompletion(&data_ov031_0224e5c0->unknown_9c0_);
	void (*var0)(void) = data_ov031_0224e5c0->unknown_4_;
	func_ov031_022127a8(data_ov031_0224e5c0);
	data_ov031_0224e5c0 = NULL;
	if (var0 != NULL) var0();
}
