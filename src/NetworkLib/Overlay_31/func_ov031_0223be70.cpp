#include <globaldefs.h>

struct Struct_ov031_0223be70 { unsigned short unknown_0_; short unknown_2_; int unknown_4_; };
extern Struct_ov031_0223be70* data_ov031_02290d2c[];

extern "C" void* func_ov031_0223b8c4(int, int, int);
extern "C" void* func_ov031_0223baa0(void*, int);
extern "C" void func_ov031_0223bdb0(int, int, void*);

// USA: func_ov031_0223be70
extern "C" ARM void* func_ov031_0223be70(int arg0, int arg1, int arg2) {
	int var0 = data_ov031_02290d2c[arg0][arg1].unknown_0_;
	void* var1 = func_ov031_0223b8c4(arg0, var0, arg2);
	void* var2 = func_ov031_0223baa0(var1, 0);
	func_ov031_0223bdb0(arg0, arg1, var2);
	return var1;
}
