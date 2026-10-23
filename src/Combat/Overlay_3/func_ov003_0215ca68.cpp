#include <globaldefs.h>

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);
extern "C" void func_ov003_0215db2c(void* arg0);

#if defined(jpn)
enum { Enum_ov003_0215ca68_956 = 0x3d4, Enum_ov003_0215ca68_152 = 0xb0 };
#else
enum { Enum_ov003_0215ca68_956 = 0x3bc, Enum_ov003_0215ca68_152 = 0x98 };
#endif
struct Struct_ov003_0215ca68 { char unknown_0_[Enum_ov003_0215ca68_956]; unsigned char unknown_3bc_; };

// USA: func_ov003_0215ca68
extern "C" ARM void func_ov003_0215ca68(struct Struct_ov003_0215ca68* arg0) {
	if (arg0->unknown_3bc_ == 0) return;
	func_0205d2bc((struct Struct_0205d2bc*)((char*)arg0 + Enum_ov003_0215ca68_152));
	func_ov003_0215db2c(arg0);
}
