#include <globaldefs.h>

struct Obj0205d2bc;
extern "C" void func_0205d2bc(struct Obj0205d2bc*);

struct Container021e76a8 { char pad[0x5dc]; int field5dc; };

// USA: func_ov023_021e76a8
extern "C" ARM void func_ov023_021e76a8(struct Container021e76a8* obj) {
	if (obj->field5dc == 0) return;
	func_0205d2bc((struct Obj0205d2bc*)((char*)obj + 0x78));
}
