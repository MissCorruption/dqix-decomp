#include <globaldefs.h>

extern "C" int func_ov031_02211aec(void);
extern "C" int func_ov031_0223f528(void*, void*, int, int);

// USA: func_ov031_02212c84
extern "C" ARM int func_ov031_02212c84(void* arg0, void* arg1, int arg2) {
	if (func_ov031_02211aec()) return 0;
	return func_ov031_0223f528(arg0, arg1, arg2, 0);
}
