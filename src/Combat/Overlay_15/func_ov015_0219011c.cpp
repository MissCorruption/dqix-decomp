#include <globaldefs.h>

struct Struct_02029634_2;
struct Struct_02029634;
extern "C" struct Struct_02029634_2* func_0202a9ac(struct Struct_02029634* arg0, int arg1);
extern "C" void* func_02029560(void* arg0);
extern "C" void* func_ov015_0218f39c(void* arg0, void* arg1);

struct Struct_ov015_0219011c {
	void* unknown_0_;
	char unknown_4_[0x38 - 0x4];
	short unknown_38_;
};

// USA: func_ov015_0219011c
extern "C" ARM void func_ov015_0219011c(struct Struct_ov015_0219011c* arg0, int arg1) {
	struct Struct_02029634* var0 = (struct Struct_02029634*)((char*)arg0->unknown_0_ + 0x2c4);
	struct Struct_02029634_2* var1 = func_0202a9ac(var0, arg0->unknown_38_);
	void* var2;
	void* var3;
	if (var1 == 0) {
		return;
	}
	var2 = func_02029560(var1);
	var3 = func_ov015_0218f39c(arg0, var2);
	if (var3 != 0) {
		*(int*)((char*)var3 + 0x18) = arg1;
	}
}
