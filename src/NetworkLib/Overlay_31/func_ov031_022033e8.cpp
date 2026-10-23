#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" void func_ov031_0220a9b0(void*);
struct Struct_ov031_02203398;
extern "C" ARM void func_ov031_02203398(Struct_ov031_02203398* arg0);

// USA: func_ov031_022033e8
extern "C" ARM void func_ov031_022033e8(void) {
	void* var0 = *(void**)((char*)data_02111304.activeContext + 0xa4);
	if (var0 == NULL) return;
	if (*((unsigned char*)var0 + 9) != 0) {
		func_ov031_0220a9b0(var0);
	}
	func_ov031_02203398((Struct_ov031_02203398*)var0);
}
