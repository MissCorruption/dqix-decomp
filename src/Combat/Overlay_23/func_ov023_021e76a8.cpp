#include <globaldefs.h>

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);

struct Struct_ov002_02155f4c { char unknown_0_[0x5dc]; int unknown_5dc_; };

// USA: func_ov023_021e76a8
extern "C" ARM void func_ov023_021e76a8(struct Struct_ov002_02155f4c* arg0) {
	if (arg0->unknown_5dc_ == 0) return;
	func_0205d2bc((struct Struct_0205d2bc*)((char*)arg0 + 0x78));
}
