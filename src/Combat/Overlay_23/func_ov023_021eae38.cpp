#include <globaldefs.h>
#include "Combat/Main/BattleList.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov017_021d6134(void*, int);
extern "C" int func_020ac020(void* arg0, short* arg1, int* arg2, int arg3);

struct Struct_ov023_021eae38 {
	unsigned int unknown_0_0_ : 10;
	unsigned int unknown_1_2_ : 1;
	unsigned int unknown_1_3_ : 7;
	unsigned int unknown_2_2_ : 7;
	unsigned int unknown_3_1_ : 7;
};

union Struct_ov023_021eae38_2 {
	struct Struct_ov023_021eae38 unknown_0_;
	int unknown1_0_;
};

// USA: func_ov023_021eae38
extern "C" ARM int func_ov023_021eae38(void *arg0) {
	short var0[1];
	union Struct_ov023_021eae38_2 var1;
	var1.unknown_0_.unknown_0_0_ = 0;
	var1.unknown_0_.unknown_1_2_ = 0;
	var1.unknown_0_.unknown_1_3_ = 0;
	var1.unknown_0_.unknown_2_2_ = 0;
	var0[0] = (short)func_ov017_021d60f4(arg0);
	func_020ac020(0, var0, &var1.unknown1_0_, 1);
	func_ov017_021d6134((char*)arg0 + 8, (int)var1.unknown_0_.unknown_0_0_);
	return 1;
}
