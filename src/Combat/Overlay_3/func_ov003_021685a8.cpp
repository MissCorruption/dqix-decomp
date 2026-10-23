#include <globaldefs.h>

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);

#if defined(jpn)
enum { Enum_ov003_021685a8_1260 = 0x4e8, Enum_ov003_021685a8_228 = 0xe0 };
#else
enum { Enum_ov003_021685a8_1260 = 0x4ec, Enum_ov003_021685a8_228 = 0xe4 };
#endif
struct Struct_ov003_021685a8 { char unknown_0_[Enum_ov003_021685a8_1260]; unsigned char unknown_4ec_; };

// USA: func_ov003_021685a8
extern "C" ARM void func_ov003_021685a8(struct Struct_ov003_021685a8* arg0) {
	if (arg0->unknown_4ec_ == 0) return;
	func_0205d2bc((struct Struct_0205d2bc*)((char*)arg0 + Enum_ov003_021685a8_228));
}
