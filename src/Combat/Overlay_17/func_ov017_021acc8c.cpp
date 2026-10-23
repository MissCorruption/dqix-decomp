#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

struct Struct_ov017_021d83cc_2 {
	void* unknown_0_;
	int unknown_4_;
};
extern struct Struct_ov017_021d83cc_2 data_ov017_021d83cc;
extern int data_ov017_021d7900;

// USA: func_ov017_021acc8c
extern "C" ARM void func_ov017_021acc8c(void* arg0, struct Struct_02013fb4* arg1, int arg2, int arg3) {
	char var0[0x430];
	data_ov017_021d83cc.unknown_0_ = arg0;
	data_ov017_021d83cc.unknown_4_ = arg3;
	((Script*)((struct Struct_0201f040*)var0))->Initialize();
	((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov017_021d7900);
	((Script*)((struct Struct_0201f040_2*)var0))->Load(arg1, arg2);
	((Script*)((struct Struct_0201f040_3*)var0))->Execute();
}
