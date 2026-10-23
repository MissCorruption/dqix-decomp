#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov001_02158dcc(int arg0);

// USA: func_ov001_0215905c
extern "C" ARM void* func_ov001_0215905c(int arg0, int arg1) {
	int* var0 = (int*)func_ov001_02158dcc(arg0);
	if (var0) {
		var0[0] = 7;
		var0[7] = arg1;
	}
	return var0;
}
