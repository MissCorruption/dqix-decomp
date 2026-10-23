#include <globaldefs.h>

extern "C" int func_ov031_022415a8(const char* arg0);
extern "C" int func_ov031_0223ffb0(void* arg0, const char* arg1, int arg2);
extern "C" int func_ov031_0223fe20(void* arg0, void* arg1, const char* arg2, int arg3);

// USA: func_ov031_02240074
extern "C" ARM int func_ov031_02240074(int* arg0, void* arg1, const char* arg2) {
	int var0 = 0;
	if (*arg0 != 0) {
		return var0;
	}
	int var1 = func_ov031_022415a8(arg2);
	if (func_ov031_0223ffb0(arg0, arg2, var1) != 0) {
		var0 = func_ov031_0223fe20((char*)arg0 + 0x38, arg1, arg2, 0x18);
		if (var0 != 0) {
			void* var2 = *(void**)((char*)arg0 + 0x38);
			void* var3 = *(void**)var2;
			*(int*)((char*)var3 + 0x10) = var1;
		}
	}
	return var0;
}
