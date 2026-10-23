#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" int func_ov031_0220a540(void* arg0);
extern "C" int func_ov031_022032a4(void* arg0);

// USA: func_ov031_02203358
extern "C" ARM int func_ov031_02203358(void) {
	void* var0 = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (var0) {
		if (*((unsigned char*)var0 + 9) != 0) {
			return func_ov031_0220a540(var0);
		}
		return func_ov031_022032a4(var0);
	}
	return 1;
}
