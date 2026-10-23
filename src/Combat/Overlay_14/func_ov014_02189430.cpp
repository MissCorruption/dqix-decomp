#include <globaldefs.h>

struct Struct_ov014_02189398;
struct Struct_ov014_021893e4_2;
struct Struct_ov014_021893e4;
extern "C" ARM int* func_ov014_0218940c(struct Struct_ov014_021893e4_2* arg0, int arg1, struct Struct_ov014_021893e4* arg2);
extern "C" ARM int* func_ov014_02189398(struct Struct_ov014_02189398* arg0);

// USA: func_ov014_02189430
extern "C" ARM int* func_ov014_02189430(struct Struct_ov014_02189398* arg0, int arg1, struct Struct_ov014_021893e4* arg2) {
	if (!arg2) return 0;
	int* var0 = func_ov014_0218940c((struct Struct_ov014_021893e4_2*)arg0, arg1, arg2);
	if (!var0) return 0;
	int* var1 = func_ov014_02189398(arg0);
	return var1 + *(unsigned short*)var0;
}
