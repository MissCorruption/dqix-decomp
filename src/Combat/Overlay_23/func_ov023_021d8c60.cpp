#include <globaldefs.h>

struct Struct_ov023_021d8c60 { char unknown_0_[0x11a]; unsigned char unknown_11a_; };

struct Struct_0205d1e0;
extern "C" void func_0205d1e0(Struct_0205d1e0*);
struct Struct_0205d228;
extern "C" void func_0205d228(Struct_0205d228*);
struct Struct_0205d274;
extern "C" void func_0205d274(Struct_0205d274*);

// USA: func_ov023_021d8c60
extern "C" ARM void func_ov023_021d8c60(struct Struct_ov023_021d8c60* arg0) {
	unsigned char var0 = arg0->unknown_11a_;
	if (var0 == 0 || var0 == 3) return;
	func_0205d1e0((Struct_0205d1e0*)((char*)arg0 + 0x20));
	func_0205d228((Struct_0205d228*)((char*)arg0 + 0x20));
	func_0205d274((Struct_0205d274*)((char*)arg0 + 0x20));
}
