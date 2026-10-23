#include <globaldefs.h>

struct Struct_ov006_02159094 {
	char unknown_0_[0x372];
	unsigned short unknown_372_[3];
	short unknown_378_[3];
	char unknown_37e_[0x38c - 0x37e];
	unsigned char unknown_38c_[3];
};

extern "C" void func_ov006_02158fd8(Struct_ov006_02159094* arg0, int arg1, int arg2, int arg3);

// USA: func_ov006_02159094
extern "C" ARM void func_ov006_02159094(Struct_ov006_02159094* arg0) {
	for (signed char var0 = 2; var0 >= 0; var0--) {
		if (arg0->unknown_378_[var0] > 0) {
			unsigned char var1 = (unsigned char)arg0->unknown_372_[var0];
			unsigned char var2 = arg0->unknown_38c_[var0];
			func_ov006_02158fd8(arg0, var1, arg0->unknown_378_[var0], var2);
			arg0->unknown_372_[var0] = 0;
			arg0->unknown_378_[var0] = -1;
			arg0->unknown_38c_[var0] = 0;
			return;
		}
	}
}
