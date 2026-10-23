#include <globaldefs.h>

struct Struct_ov031_0221a4cc {
	unsigned int unknown_0_;
	void (*unknown_4_)(void*, void*, int);
};

extern "C" void func_ov031_022183b4(void* arg0);
extern Struct_ov031_0221a4cc* data_ov031_0224e69c;
extern void* data_ov031_0224a254;

// USA: func_ov031_0221a4cc
extern "C" ARM void func_ov031_0221a4cc() {
	Struct_ov031_0221a4cc* var0 = data_ov031_0224e69c;
	if (var0 == NULL) return;
	func_ov031_022183b4((char*)var0 + 8);
	var0 = data_ov031_0224e69c;
	var0->unknown_4_(&data_ov031_0224a254, var0, 0);
	data_ov031_0224e69c = NULL;
}
