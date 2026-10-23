#include <globaldefs.h>

struct Struct_02080fa8_2 { int unknown_0_; };
struct Struct_0207f524 { struct Struct_02080fa8_2* unknown_0_; short unknown_4_; };
struct Struct_02080fa8 { char unknown_0_[4]; struct Struct_0207f524 unknown_4_; };
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);

struct Struct_ov003_02167b34_2 { char unknown_0_[0x10]; struct Struct_02080fa8* unknown_10_; };

// USA: func_ov003_02168088
extern "C" ARM void func_ov003_02168088(struct Struct_ov003_02167b34_2* arg0, int* arg1) {
	struct Struct_02080fa8* var0;
	short var1;
	unsigned char var2;
	if (!arg1) return;
	var0 = arg0->unknown_10_;
	var1 = 0x13;
	for (var2 = 0; var2 < 0xc; var2++) {
		func_02080fa8(var0, var1, arg1[var2]);
		var1++;
	}
}
