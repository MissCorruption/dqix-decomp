#include <globaldefs.h>

struct Struct_0202c1a4;
extern "C" void func_ov017_02190264(unsigned char* arg0, unsigned char arg1);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

struct Struct_ov017_021cc6c4 {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_[1];
};

// USA: func_ov017_021cc6c4
extern "C" ARM void func_ov017_021cc6c4(int arg0, Struct_ov017_021cc6c4* arg1, int arg2, unsigned char* arg3, struct Struct_0202c1a4* arg4) {
#if defined(jpn)
 enum {Enum_ov017_021cc6c4_737=0xc1};
#else
 enum {Enum_ov017_021cc6c4_737=0x2e1};
#endif
	int var0 = 0;
	for (int var1 = 0; var1 < arg1->unknown_4_; var1++) {
		unsigned char var2 = arg1->unknown_5_[var1];
		func_ov017_02190264(arg3, var2);
		if (var2 == 0) var0 = 1;
	}
	if (!var0) return;
	if (func_0202c1a4(arg4) != 0) {
		arg3[0x4000 + Enum_ov017_021cc6c4_737] = 1;
	}
}
