#include <globaldefs.h>

struct S021a9998 { unsigned char pad[0x20]; void* f20; };

extern "C" void func_ov008_02189404(void*);

// USA: func_ov017_021a9998
extern "C" ARM void func_ov017_021a9998(S021a9998* obj) {
	void* p = obj->f20;
	if (p) func_ov008_02189404(p);
}
