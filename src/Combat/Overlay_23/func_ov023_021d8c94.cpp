#include <globaldefs.h>

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);

struct Struct_ov000_02160ad0 { char unknown_0_[0x11a]; unsigned char unknown_11a_; };

// USA: func_ov023_021d8c94
extern "C" ARM void func_ov023_021d8c94(struct Struct_ov000_02160ad0* arg0) {
	unsigned char var0 = arg0->unknown_11a_;
	if (var0 == 0 || var0 == 3) return;
	func_0205d2bc((struct Struct_0205d2bc*)((char*)arg0 + 0x20));
}
