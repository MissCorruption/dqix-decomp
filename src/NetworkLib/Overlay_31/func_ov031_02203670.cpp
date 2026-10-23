#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" void func_ov031_0220a66c(int arg0, char* arg1);
extern "C" void func_ov031_022035e0(int arg0, void* arg1);

// USA: func_ov031_02203670
extern "C" ARM void func_ov031_02203670(int arg0) {
	void* var0 = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (var0 == NULL) return;
	if (*((unsigned char*)var0 + 9) != 0) {
		func_ov031_0220a66c(arg0, (char*)var0);
	} else {
		func_ov031_022035e0(arg0, var0);
	}
}
