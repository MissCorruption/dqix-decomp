#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

struct Struct_ov023_021ffa34_3 {
	short unknown_0_;
	int unknown_4_;
	int unknown_8_;
	void* unknown_c_;
};
extern struct Struct_ov023_021ffa34_3 data_ov023_021ffa34;
extern int data_ov023_021fdc78;

// USA: func_ov023_021e133c
extern "C" ARM void func_ov023_021e133c(void* arg0, void* arg1, int arg2, int arg3, int arg4, short arg5) {
	char var0[0x430];
	if (arg2 != 0 && arg3 != 0) {
		data_ov023_021ffa34.unknown_c_ = arg0;
		data_ov023_021ffa34.unknown_8_ = (int)arg1;
		data_ov023_021ffa34.unknown_4_ = arg4;
		data_ov023_021ffa34.unknown_0_ = arg5;
		((Script*)((struct Struct_0201f040*)var0))->Initialize();
		((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov023_021fdc78);
		((Script*)((struct Struct_0201f040_2*)var0))->Load((struct Struct_02013fb4*)arg2, arg3);
		((Script*)((struct Struct_0201f040_3*)var0))->Execute();
	}
}
