#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct Struct_ov031_022358b4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned char unknown_4_[4]; unsigned short unknown_8_; };

extern "C" void func_ov031_02235a44(struct Struct_ov031_022358b4* arg0);
extern "C" int func_ov031_022358b4(void);
extern "C" void func_020c9be0(void);

extern char* data_ov031_02290cf8;

// USA: func_ov031_022359e0
extern "C" ARM void func_ov031_022359e0(struct Struct_ov031_022358b4* arg0) {
	if (arg0->unknown_2_ != 0) {
		return;
	}
	unsigned char var0 = *(unsigned char*)(data_ov031_02290cf8 + 0x1e5c);
	if (var0 != 0 || arg0->unknown_0_ != 0x26) {
		return;
	}
	if (arg0->unknown_8_ == 4) {
		goto case4;
	}
	if (arg0->unknown_8_ != 5) {
		goto def;
	}
	func_ov031_02235a44(arg0);
	func_ov031_022358b4();
	return;
case4:
	func_ov031_022358b4();
	return;
def:
	func_020c9be0();
}
