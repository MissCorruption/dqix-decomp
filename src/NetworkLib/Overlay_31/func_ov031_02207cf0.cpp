#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_022496fc {
	int unknown_0_;
	int unknown_4_;
};

extern Struct_ov031_022496fc data_ov031_022496fc;

// USA: func_ov031_02207cf0
extern "C" ARM unsigned int func_ov031_02207cf0() {
	if ((unsigned int)data_ov031_022496fc.unknown_4_ >= 0x20) {
		return -1;
	}
	ProcessorContext* var0 = data_02111304.activeContext;
	unsigned int var1 = GetContextPriority(var0);
	ChangeContextPriority(var0, data_ov031_022496fc.unknown_4_);
	return var1;
}
