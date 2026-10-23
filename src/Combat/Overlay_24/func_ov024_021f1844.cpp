#include <globaldefs.h>

extern "C" int func_ov000_0215e9fc(int arg0, void* arg1, int arg2, int arg3);
extern "C" void func_ov024_021ed8c0(void* arg0, int arg1, int arg2, int* arg3, short* arg4);

struct Struct_ov024_021f1844 { int unknown_0_; };

// USA: func_ov024_021f1844
extern "C" ARM int func_ov024_021f1844(struct Struct_ov024_021f1844* arg0, int arg1, int arg2, int* arg3, void* arg4) {
	int var0 = func_ov000_0215e9fc(arg0->unknown_0_, arg4, 4, 1);
	*arg3 = var0;
	if (var0 <= 0) return 0;
	func_ov024_021ed8c0(arg0, arg1, arg2, arg3, static_cast<short*>(arg4));
	return 1;
}
