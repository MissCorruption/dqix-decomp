#include <globaldefs.h>

extern "C" int func_ov016_0218f340(void* arg0);

// USA: func_ov016_0218e768
extern "C" ARM int func_ov016_0218e768(void* arg0, void*) {
	if (arg0 == NULL) return 0;
	return func_ov016_0218f340(arg0) == 1;
}
