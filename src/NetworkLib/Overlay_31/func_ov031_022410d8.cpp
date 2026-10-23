#include <globaldefs.h>

struct Struct_ov031_022410d8 { int unknown_0_; };

extern "C" int func_ov031_022404e8(Struct_ov031_022410d8* arg0, int arg1, int arg2, int* arg3);
extern "C" int func_ov031_022405b8(Struct_ov031_022410d8* arg0, int arg1, int arg2);
extern "C" int func_ov031_02240628(Struct_ov031_022410d8* arg0, int arg1, int arg2, const char* arg3, int arg4);

// USA: func_ov031_022410d8
extern "C" ARM int func_ov031_022410d8(Struct_ov031_022410d8* arg0, const char* arg1, int* arg2) {
	int var0;
	int var1 = func_ov031_022404e8(arg0, 0xc, arg0->unknown_0_, &var0);
	if (var1 <= 0) {
		goto fail;
	}
	{
		int var2;
		do {
			var2 = func_ov031_022404e8(arg0, var1, arg0->unknown_0_, &var0);
			if (var0 > 0 && func_ov031_02240628(arg0, var1, var0, arg1, 0) == 0) {
				if (var0 + 1 < arg0->unknown_0_) {
					// volatile read: the ROM reloads the length here instead of reusing the
					// register from the bounds check above.
					int var3 = func_ov031_022404e8(arg0, var0 + 1, *(volatile int*)arg0, 0);
					int var4;
					if (var3 <= 0) {
						var4 = arg0->unknown_0_;
					} else {
						if (var3 < 2) {
							return -1;
						}
						var4 = var3 - 2;
					}
					int var5 = func_ov031_022405b8(arg0, var0 + 1, var4);
					if (var5 < 0) {
						var5 = var4;
					}
					*arg2 = var5;
					return var4 - var5;
				}
				return 0;
			}
			var1 = var2;
		} while (var2 > 0);
	}
fail:
	return -1;
}
