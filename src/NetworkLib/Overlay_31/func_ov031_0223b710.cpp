#include <globaldefs.h>

struct Struct_ov031_0223b710_2 { int unknown_0_, unknown_4_, unknown_8_, unknown_c_; };
extern "C" void func_ov031_0223cf70(Struct_ov031_0223b710_2* arg0);
extern "C" void func_ov031_0223bf48(void* arg0, int arg1);

struct Struct_ov031_0223b710 { unsigned char unknown_0_[0x84]; void* unknown_84_; };
extern Struct_ov031_0223b710* data_ov031_02290d24;

// USA: func_ov031_0223b710
extern "C" ARM void func_ov031_0223b710(Struct_ov031_0223b710_2 arg0) {
	func_ov031_0223cf70(&arg0);
	func_ov031_0223bf48(data_ov031_02290d24->unknown_84_, arg0.unknown_0_);
}
