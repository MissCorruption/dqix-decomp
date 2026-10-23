#include <globaldefs.h>

struct Struct_ov031_0220d9c8 {
	short unknown_0_;
	short unknown_2_;
	int unknown_4_;
	int unknown_8_;
	int unknown_c_;
};
typedef void (*Type_ov031_0220d9c8)(Struct_ov031_0220d9c8*);

extern void* data_ov031_0224e53c;

// USA: func_ov031_0220d9c8
extern "C" ARM void func_ov031_0220d9c8(short arg0, short arg1, int arg2, int arg3, int arg4) {
	char* var0 = (char*)data_ov031_0224e53c;
	if (*(Type_ov031_0220d9c8*)(var0 + 0x227c) == 0) return;
	Struct_ov031_0220d9c8 var1;
	var1.unknown_0_ = arg0;
	var1.unknown_2_ = arg1;
	var1.unknown_4_ = arg2;
	var1.unknown_8_ = arg3;
	var1.unknown_c_ = arg4;
	(*(Type_ov031_0220d9c8*)(var0 + 0x227c))(&var1);
}
