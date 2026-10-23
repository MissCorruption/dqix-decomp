#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02154e58 func_ov006_021565b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

// USA: func_ov006_0215919c
extern "C" ARM int func_ov006_0215919c(void* arg0) {
	int var0 = 0;
	short var1 = *(short*)((char*)arg0 + 0x300 + 0x62) - 0x5b;
	if (var1 >= 0) {
		int* var2 = *(int**)((char*)arg0 + R(0x40, 0x48));
		var0 = var2[var1];
	}
	return var0;
}
