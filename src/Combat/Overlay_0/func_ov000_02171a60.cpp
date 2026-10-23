#include <globaldefs.h>

// USA: func_ov000_02171a60
extern "C" ARM int func_ov000_02171a60(void* arg0) {
	return (*(int*)((char*)arg0 + 0x28) & 1) != 0;
}
