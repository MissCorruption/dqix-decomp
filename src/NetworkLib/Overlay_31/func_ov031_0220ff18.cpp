#include <globaldefs.h>

extern "C" int func_ov031_0221032c(void* arg0);

// USA: func_ov031_0220ff18
extern "C" ARM int func_ov031_0220ff18(void* arg0) {
	int var0 = *(int*)arg0;
	return var0 == func_ov031_0221032c(arg0);
}
