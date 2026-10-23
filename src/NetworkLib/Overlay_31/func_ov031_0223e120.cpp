#include <globaldefs.h>

struct Struct_ov031_0223d884 { int unknown_0_, unknown_4_, unknown_8_, unknown_c_; };
struct Struct_ov031_0223bf2c { int unknown_0_, unknown_4_, unknown_8_, unknown_c_; };
extern "C" void func_ov031_0223d884(Struct_ov031_0223d884);
extern "C" void func_ov031_0223bf2c(Struct_ov031_0223bf2c);
typedef void (*Type_ov031_0223e120)(int);

struct Struct_ov031_0223e120 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
	unsigned char unknown_c_[0x34];
};

extern "C" void func_ov031_0223cf70(void** arg0);
extern "C" Struct_ov031_0223e120* data_ov031_02290d9c;
namespace DuplicatePool {
    extern "C" Struct_ov031_0223e120* data_ov031_02290d9c;
}

// USA: func_ov031_0223e120
extern "C" ARM void func_ov031_0223e120(void) {
	for (int var0 = 0; var0 < 2; var0++) {
		((Type_ov031_0223e120)func_ov031_0223d884)(data_ov031_02290d9c[var0].unknown_8_);
		((Type_ov031_0223e120)func_ov031_0223bf2c)(data_ov031_02290d9c[var0].unknown_0_);
	}
	func_ov031_0223cf70((void**)&DuplicatePool::data_ov031_02290d9c);
}
