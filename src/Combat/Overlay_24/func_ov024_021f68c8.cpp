#include <globaldefs.h>

struct Struct_ov024_021f6820;
extern "C" void func_ov024_021f6820(struct Struct_ov024_021f6820*, short, char, char);

struct Struct_ov024_021f68c8 {
	short unknown_0_;
	char unknown_2_;
	char unknown_3_;
	float unknown_4_;
	char unknown_8_[4];
};

// USA: func_ov024_021f68c8
extern "C" ARM void func_ov024_021f68c8(struct Struct_ov024_021f68c8* arg0) {
	for (int var0 = 0; var0 < 4; var0++) {
		func_ov024_021f6820((struct Struct_ov024_021f6820*)&arg0[var0], 0, -1, 0);
		arg0[var0].unknown_4_ = -1.0f;
	}
}
