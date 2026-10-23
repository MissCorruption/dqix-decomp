#include <globaldefs.h>

struct Struct_ov031_0224e5c4_9 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
	unsigned int unknown_8_;
	void* unknown_c_;
	unsigned int unknown_10_;
};

extern Struct_ov031_0224e5c4_9 data_ov031_0224e5c4;

extern "C" void func_ov031_02213270(unsigned int arg0, int arg1, int arg2);

// USA: func_ov031_022135bc
extern "C" ARM void func_ov031_022135bc(void) {
	func_ov031_02213270(8, data_ov031_0224e5c4.unknown_8_, 0xc);
	func_ov031_02213270(0x10, data_ov031_0224e5c4.unknown_10_, 0xd18);
}
