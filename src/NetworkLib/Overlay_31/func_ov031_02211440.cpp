#include <globaldefs.h>

extern "C" void func_ov031_02211864(int arg0, int arg1);

struct Struct_ov031_02211440 {
	int unknown_0_;
	void* unknown_4_;
	char unknown_8_[0x34];
	void (*unknown_3c_)(void*);
};

extern Struct_ov031_02211440* data_ov031_0224e590;

// USA: func_ov031_02211440
extern "C" ARM void func_ov031_02211440(void* arg0) {
	if (data_ov031_0224e590 == NULL) return;
	data_ov031_0224e590->unknown_4_ = arg0;
	void (*var0)(void*) = data_ov031_0224e590->unknown_3c_;
	if (var0 != NULL) {
		var0(arg0);
	} else {
		func_ov031_02211864(9, 9 - 0xb);
	}
}
