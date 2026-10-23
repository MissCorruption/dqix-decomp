#include <globaldefs.h>

struct Struct_ov031_02240410 { void* unknown_0_; };
extern "C" void func_ov031_02240410(void* arg0, int arg1, Struct_ov031_02240410** arg2, int* arg3);
extern "C" signed char func_ov031_0224046c(void* arg0, void** arg1, int* arg2);

// USA: func_ov031_022404e8
extern "C" ARM int func_ov031_022404e8(void* arg0, int arg1, int arg2, int* arg3) {
	int var0 = 0;
	if (arg3) {
		*arg3 = -1;
	}
	if (arg1 >= arg2) {
		goto fail;
	}
	Struct_ov031_02240410* var1;
	int var2;
	func_ov031_02240410(arg0, arg1, &var1, &var2);
	if (arg1 >= arg2) {
		goto fail;
	}
	int var3 = arg1;
	do {
		signed char var4 = func_ov031_0224046c(arg0, (void**)&var1, &var2);
		if (var4 == ':' && arg3 && *arg3 < 0) {
			*arg3 = var3;
		}
		if (!var0) {
			if (var4 == '\r') {
				var0 = 1;
			}
		} else {
			if (var4 == '\n') {
				return (var3 == arg2 - 1) ? 0 : var3 + 1;
			}
			var0 = 0;
		}
		var3++;
	} while (var3 < arg2);
fail:
	return -1;
}
