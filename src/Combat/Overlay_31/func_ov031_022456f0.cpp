#include <globaldefs.h>

struct Obj_022456f0 { unsigned char pad34[0x34]; unsigned char f34; unsigned char f35; };

// USA: func_ov031_022456f0
extern "C" ARM int func_ov031_022456f0(Obj_022456f0* obj) {
	if (obj->f34 == 7 || obj->f34 == 6) {
		obj->f35 = 5;
		return 1;
	}
	return 0;
}
