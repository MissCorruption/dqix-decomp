#include <globaldefs.h>

extern "C" void func_ov031_02214520(int arg0);

struct Struct_ov031_02214d38 {
	unsigned char unknown_0_0_ : 4;
	unsigned char unknown_0_4_ : 4;
};

// USA: func_ov031_02214d38
extern "C" ARM int func_ov031_02214d38(char* arg0) {
	*(unsigned char*)(arg0 + 0xd15) = 0;
	((struct Struct_ov031_02214d38*)(arg0 + 0xd0b))->unknown_0_4_ += 1;
	func_ov031_02214520(0);
	*(unsigned char*)(arg0 + 0xd11) = 1;
	return 3;
}
