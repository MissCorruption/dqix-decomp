#include <globaldefs.h>

extern "C" int func_ov024_021fe698(char* arg0, int arg1);
extern "C" int func_ov024_021fdf04(void* arg0, int arg1);
extern "C" int func_ov024_021fd954(void* arg0, int arg1);

struct Struct_ov024_021fbdb4 { unsigned int unknown_0_0_ : 8; unsigned int unknown_1_0_ : 2; };

// USA: func_ov024_021fbdb4
extern "C" ARM int func_ov024_021fbdb4(void* arg0) {
	void* var0 = *(void**)((char*)arg0 + 0x64c);
	struct Struct_ov024_021fbdb4* var1 = (struct Struct_ov024_021fbdb4*)((char*)var0 + 8);
	int var2;
	if (var1->unknown_1_0_ == 1) {
		var2 = func_ov024_021fe698((char*)arg0, 2);
		if (!var2) {
			return var2;
		}
		var2 = func_ov024_021fe698((char*)arg0, 0xe);
		if (!var2) {
			return var2;
		}
		return func_ov024_021fdf04(arg0, 0x12);
	} else {
		var2 = func_ov024_021fe698((char*)arg0, 3);
		if (!var2) {
			return var2;
		}
		var2 = func_ov024_021fe698((char*)arg0, 6);
		if (!var2) {
			return var2;
		}
		return func_ov024_021fd954(arg0, 0x12);
	}
}
