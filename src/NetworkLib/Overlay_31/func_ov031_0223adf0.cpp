#include <globaldefs.h>

extern "C" void func_ov031_0223b07c(void);
extern "C" void func_ov031_0223b040(void);
extern "C" void func_ov031_0223a274(int arg0);

struct Struct_ov031_02290d20 { void* unknown_0_; };
extern struct Struct_ov031_02290d20 data_ov031_02290d20;

// USA: func_ov031_0223adf0
extern "C" ARM void func_ov031_0223adf0(void) {
	func_ov031_0223b07c();
	func_ov031_0223a274((int)func_ov031_0223b040);
	*((unsigned char*)data_ov031_02290d20.unknown_0_ + 0xa90) = 8;
}
