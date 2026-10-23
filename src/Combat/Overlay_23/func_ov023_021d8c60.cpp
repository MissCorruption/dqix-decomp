#include <globaldefs.h>

struct Obj021d8c60 { char pad[0x11a]; unsigned char field11a; };

struct Cont0205d1e0;
extern "C" void func_0205d1e0(Cont0205d1e0*);
struct Cont0205d228;
extern "C" void func_0205d228(Cont0205d228*);
struct Cont0205d274;
extern "C" void func_0205d274(Cont0205d274*);

// USA: func_ov023_021d8c60
extern "C" ARM void func_ov023_021d8c60(struct Obj021d8c60* obj) {
	unsigned char v = obj->field11a;
	if (v == 0 || v == 3) return;
	func_0205d1e0((Cont0205d1e0*)((char*)obj + 0x20));
	func_0205d228((Cont0205d228*)((char*)obj + 0x20));
	func_0205d274((Cont0205d274*)((char*)obj + 0x20));
}
