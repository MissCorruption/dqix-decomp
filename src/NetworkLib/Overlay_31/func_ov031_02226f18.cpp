#include <globaldefs.h>

extern "C" void func_ov031_0221e894(void*);
extern "C" void func_ov031_02236364(void*);
extern "C" int func_ov031_0223cf70(void*);

struct Struct_ov031_02226f18 { unsigned char unknown_0_[0x116]; unsigned char unknown_116_; };
struct Struct_ov031_02250c04_2 { unsigned char unknown_0_; unsigned char unknown_1_[3]; Struct_ov031_02226f18* unknown_4_; };

extern Struct_ov031_02250c04_2 data_ov031_02250c04;
extern int data_ov031_02250c08;

// USA: func_ov031_02226f18
extern "C" ARM void func_ov031_02226f18(void* arg0) {
	func_ov031_0221e894(arg0);
	if (arg0 != 0) {
		if (data_ov031_02250c04.unknown_4_->unknown_116_ == 0 && data_ov031_02250c04.unknown_0_ == 1) {
			func_ov031_02236364((char*)data_ov031_02250c04.unknown_4_ + 0x117);
		}
	}
	func_ov031_0223cf70(&data_ov031_02250c08);
}
