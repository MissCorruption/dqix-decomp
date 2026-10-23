#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

// USA: func_ov017_021c1acc
extern "C" ARM void func_ov017_021c1acc(unsigned char* arg0) {
	func_0204693c((struct Struct_0204693c*)arg0);
	arg0[0] = 0x37;
	*(int*)(arg0 + 8) = 0;
	*(int*)(arg0 + 0xc) = 0;
}
