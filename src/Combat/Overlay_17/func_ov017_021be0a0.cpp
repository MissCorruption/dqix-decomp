#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

// USA: func_ov017_021be0a0
extern "C" ARM void func_ov017_021be0a0(unsigned char* arg0) {
	func_0204693c((struct Struct_0204693c*)arg0);
	arg0[0] = 0x33;
	*(int*)(arg0 + 8) = 0;
	*(int*)(arg0 + 0xc) = 0;
}
