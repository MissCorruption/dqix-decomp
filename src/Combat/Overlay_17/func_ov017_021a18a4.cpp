#include <globaldefs.h>

struct Struct_ov017_021a18a4;
extern "C" void func_ov023_021e3184(Struct_ov017_021a18a4*);

// USA: func_ov017_021a18a4
extern "C" ARM void func_ov017_021a18a4(void* arg0) {
	unsigned char var0 = *((unsigned char*)arg0 + 0x22);
	if (var0 <= 1) return;
	void* var1 = *(void**)((char*)arg0 + 0x1c);
	if (!var1) return;
	func_ov023_021e3184((Struct_ov017_021a18a4*)var1);
}
