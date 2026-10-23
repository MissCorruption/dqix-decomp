#include <globaldefs.h>

struct S021b8408 { unsigned char pad[0x6ac]; void* f6ac; };

extern "C" void func_ov000_02160b54(void*);

// USA: func_ov017_021b8408
extern "C" ARM void func_ov017_021b8408(S021b8408* obj) {
	void* p = obj->f6ac;
	if (p) func_ov000_02160b54(p);
}
