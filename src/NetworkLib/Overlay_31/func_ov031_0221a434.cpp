#include <globaldefs.h>
#include "NitroSDK/Memory.h"

typedef void* (*Type_ov031_0221a434)(void*, unsigned int);

extern "C" void func_ov031_02211b08(int arg0, int arg1);

extern char* data_ov031_0224e69c;
extern void* data_ov031_0224a244;

struct Struct_ov031_0221a434 {
	Type_ov031_0221a434 unknown_0_;
	void* unknown_4_;
};

// USA: func_ov031_0221a434
extern "C" ARM int func_ov031_0221a434(Type_ov031_0221a434 arg0, void* arg1) {
	if (data_ov031_0224e69c != NULL) {
		func_ov031_02211b08(9, 0xffffa1dc);
		return 0;
	}
	void* var0 = arg0(&data_ov031_0224a244, 0x1c20);
	data_ov031_0224e69c = (char*)var0;
	if (var0 == NULL) {
		func_ov031_02211b08(9, 0xffffa1dc);
		return 0;
	}
	VectorizedMemset(var0, 0, 0x1c20);
	((Struct_ov031_0221a434*)data_ov031_0224e69c)->unknown_0_ = arg0;
	((Struct_ov031_0221a434*)data_ov031_0224e69c)->unknown_4_ = arg1;
	return 1;
}
