#include <globaldefs.h>

struct Struct_ov031_0224e5ac {
	void* unknown_0_;
	void* unknown_4_;
};

extern Struct_ov031_0224e5ac data_ov031_0224e5ac;

extern "C" void* func_ov031_02211b20(void*);

typedef void (*Type_ov031_02211b98)(void*, void*, int);

// USA: func_ov031_02211b98
extern "C" ARM void func_ov031_02211b98(void* arg0, void* arg1) {
	if (arg1 == NULL) return;
	void* var0 = func_ov031_02211b20(arg1);
	int var1 = *(int*)((char*)var0 + 4) + 0x20;
	Type_ov031_02211b98 var2 = (Type_ov031_02211b98)data_ov031_0224e5ac.unknown_0_;
	var2(arg0, var0, var1);
}
