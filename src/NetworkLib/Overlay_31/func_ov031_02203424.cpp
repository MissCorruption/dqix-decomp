#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" void func_ov031_0220aa30(void*);
extern "C" void func_ov031_02200264(void);
unsigned long long GetCurrentTimestamp(void);

typedef int (*Type_0200f3a4_3)(void);
struct Struct_ov031_0224c980_8 {
	char unknown_0_[0x48];
	Type_0200f3a4_3 unknown_48_;
};
extern Struct_ov031_0224c980_8 data_ov031_0224c980;

// USA: func_ov031_02203424
extern "C" ARM void func_ov031_02203424(void) {
	void* var0 = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (var0 == NULL) return;
	if (*((unsigned char*)var0 + 9) != 0) {
		func_ov031_0220aa30(var0);
	}
	int var1 = (int)(GetCurrentTimestamp() >> 16);
	while (data_ov031_0224c980.unknown_48_() != 0 && *((unsigned char*)var0 + 8) != 0
	       && (int)(GetCurrentTimestamp() >> 16) - var1 < 0x27) {
		func_ov031_02200264();
	}
	*((unsigned char*)var0 + 8) = 0;
}
