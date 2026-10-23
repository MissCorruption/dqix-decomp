#include <globaldefs.h>

struct Struct_ov031_022183b4 {
	int unknown_0_;
	int unknown_4_;
};

typedef void (*Type_ov031_02218f18)(void*, int, int);

extern int data_ov031_02249fd8;
extern int data_ov031_02249ff4;

// USA: func_ov031_02218f18
extern "C" ARM void func_ov031_02218f18(void* arg0, struct Struct_ov031_022183b4* arg1, int arg2) {
	Type_ov031_02218f18 var0 = *(Type_ov031_02218f18*)((char*)arg0 + 0x1014);
	int var1 = 0;
	if (arg2 <= 0) return;

	void* var2 = &data_ov031_02249fd8;
	void* var3 = &data_ov031_02249ff4;
	do {
		int var4 = arg1[var1].unknown_0_;
		if (var4 != 0) {
			var0(var2, var4, 0);
			arg1[var1].unknown_0_ = 0;
		}
		int var5 = arg1[var1].unknown_4_;
		if (var5 != 0) {
			var0(var3, var5, 0);
			arg1[var1].unknown_4_ = 0;
		}
		var1++;
	} while (var1 < arg2);
}
