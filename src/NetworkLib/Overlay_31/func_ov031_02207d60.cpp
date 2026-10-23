#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

// USA: func_ov031_02207d60
extern "C" ARM void func_ov031_02207d60(void* arg0, void* arg1) {
	void* var0 = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (var0) {
		void* var1 = *(void**)((char*)var0 + 0xc);
		if (var1) {
			*(void**)((char*)var1 + 0x814) = arg0;
			*(void**)((char*)var1 + 0x818) = arg1;
		}
	}
}
