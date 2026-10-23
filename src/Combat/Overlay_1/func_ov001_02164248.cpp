#include <globaldefs.h>

extern "C" int func_ov001_021641e0(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov001_02164248
extern "C" ARM int func_ov001_02164248(void* arg0, int arg1, int arg2, int arg3, int arg4) {
	if (arg1 < 0 || arg1 >= 0x20) return 0;
	return func_ov001_021641e0((char*)arg0 + arg1 * 0x10, arg2, arg3, arg4);
}
