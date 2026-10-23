#include <globaldefs.h>
extern "C" int func_ov031_02204c84(int arg0);

// USA: func_ov031_02217f9c
extern "C" ARM int func_ov031_02217f9c(void* arg0) {
	return func_ov031_02204c84(*(int*)((char*)arg0 + 0x1124));
}
